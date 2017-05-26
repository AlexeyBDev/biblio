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

    {
     QHBoxLayout *L1 = new QHBoxLayout();
     L1->setMargin(0);
     L->addLayout(L1);
     setup_Location(L1);
     setup_Publisher(L1);
     setup_Year(L1);
     setup_TotalPages(L1);
    }
}

/**************************************************************/

void ItemEditFrame::setup_Author(QBoxLayout *L)
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

void ItemEditFrame::setup_Title(QBoxLayout *L)
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

void ItemEditFrame::setup_Subtitle(QBoxLayout *L)
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

void ItemEditFrame::setup_Location(QBoxLayout *L)
{ // Location
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Location"));
    L1->addWidget(lbl);

    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Publisher(QBoxLayout *L)
{ // Publisher
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Publisher"));
    L1->addWidget(lbl);

    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Year(QBoxLayout *L)
{ // Year
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Year"));
    L1->addWidget(lbl);

    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_TotalPages(QBoxLayout *L)
{ // TotalPages
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Total Pages"));
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
