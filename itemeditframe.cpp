#include "itemeditframe.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>

namespace BIBLIO {

/**************************************************************/

ItemEditFrame::ItemEditFrame(QWidget *parent)
    : QFrame(parent) {
    setFrameStyle(StyledPanel | Sunken);
    setSizePolicy(QSizePolicy::Expanding,
                  QSizePolicy::Expanding);

    QVBoxLayout *L = new QVBoxLayout(this);

    setup_Author(L);
    setup_Title(L);
    setup_Subtitle(L);

}

/**************************************************************/

void ItemEditFrame::setup_Author(QVBoxLayout *L)
{ // Author
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Author"));
    L1->addWidget(lbl);
    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Title(QVBoxLayout *L)
{ // Title
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Title"));
    L1->addWidget(lbl);
    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Subtitle(QVBoxLayout *L)
{ // Subtitle
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Subtitle"));
    L1->addWidget(lbl);
    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

ItemEditFrame::~ItemEditFrame()
{

}


/**************************************************************/

} // namespace BIBLIO
