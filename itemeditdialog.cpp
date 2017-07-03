#include "itemeditdialog.h"

#include <QFrame>
#include <QPushButton>
#include <QBoxLayout>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QCloseEvent>

namespace BIBLIO {

/**************************************************************/
namespace IED_HELPER {

Buttons::Buttons(QWidget *parent)
    : QFrame(parent) {

    setFrameStyle(StyledPanel | Sunken);
    setSizePolicy(QSizePolicy::Expanding,
                     QSizePolicy::Minimum);
    QHBoxLayout *L = new QHBoxLayout(this);
    L->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding,
                                     QSizePolicy::Minimum));
    {
     QPushButton *B = pOk = new QPushButton(this);
     L->addWidget(B);
     B->setText(tr("Ok"));
     connect(B, SIGNAL(clicked(bool)), this, SIGNAL(accepting()));
    }
    {
     QPushButton *B = pCancel = new QPushButton(this);
     L->addWidget(B);
     B->setText(tr("Cancel"));
     connect(B, SIGNAL(clicked(bool)), this, SIGNAL(rejecting()));
    }

}

} // namespace IED_HELPER

/**************************************************************/

ItemEditDialog::ItemEditDialog(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle(tr("Editing a reference"));

    QVBoxLayout *L0 = new QVBoxLayout(this);

    {
        // Верхний фрейм
     Edt = new ItemEditFrame(this);
     L0->addWidget(Edt);
    }
    {
        // Нижний фрейм
     Btn = new IED_HELPER::Buttons(this);
     L0->addWidget(Btn);
     connect(Btn, SIGNAL(accepting()), this, SLOT(accept()));
     connect(Btn, SIGNAL(rejecting()), this, SLOT(reject()));
    }
}

/**************************************************************/

ItemEditDialog::~ItemEditDialog()
{

}

/**************************************************************/

void ItemEditDialog::closeEvent(QCloseEvent *E) {
    switch (result()) {
    case Rejected:
        E->accept();
        break;
    case Accepted:
        if(Edt->isValid()) {
            Edt->save();
            E->accept();
        }
        else {
            E->ignore();
        }
        break;
    default:
        E->accept();
        break;
    }
}

/**************************************************************/

} // namespace BIBLIO
