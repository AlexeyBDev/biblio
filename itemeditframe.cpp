#include "itemeditframe.h"
#include "helpers.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>

namespace BIBLIO {

/**************************************************************/

ItemEditFrame::ItemEditFrame(QWidget *parent)
    : QFrame(parent) {
    setFrameStyle(StyledPanel | Sunken);
    setSizePolicy(QSizePolicy::Expanding,
                  QSizePolicy::Expanding);

    QVBoxLayout *L = new QVBoxLayout(this);

    setup_Kind(L);
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

    {
     QHBoxLayout *L1 = new QHBoxLayout();
     L1->setMargin(0);
     L->addLayout(L1);
     setup_Journal(L1);
     setup_Volume(L1);
     setup_Issue(L1);
     setup_Pages(L1);
    }

    setup_Comment(L);
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

void ItemEditFrame::setup_Journal(QBoxLayout *L)
{ // Journal
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Journal"));
    L1->addWidget(lbl);

    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Volume(QBoxLayout *L)
{ // Number of journal
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Volume"));
    L1->addWidget(lbl);

    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Issue(QBoxLayout *L)
{ // Release of journal
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Issue"));
    L1->addWidget(lbl);

    QLineEdit *txt = new QLineEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Pages(QBoxLayout *L)
{ // Pages in journal
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Pages"));
    HLP::setHorisontalPolicy(lbl, QSizePolicy::Minimum);
    //HLP::setWidth(lbl, 150);
    L1->addWidget(lbl);

    QLineEdit *txt = new QLineEdit();
    HLP::setHorisontalPolicy(txt, QSizePolicy::Minimum);
    HLP::setWidth(txt, 50);
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Comment(QBoxLayout *L)
{ // Comment
    QVBoxLayout *L1 = new QVBoxLayout();
    L1->setSpacing(0);
    L1->setMargin(0);
    L->addLayout(L1);

    QLabel *lbl = new QLabel();
    lbl->setText(tr("Comment"));
    L1->addWidget(lbl);

    QTextEdit *txt = new QTextEdit();
    L1->addWidget(txt);
}

/**************************************************************/

void ItemEditFrame::setup_Kind(QBoxLayout *L)
{ // Kind
    QHBoxLayout *L1 = new QHBoxLayout();
    L->addLayout(L1);

    QSpacerItem *Sp = new QSpacerItem(0, 0, QSizePolicy::Expanding);
    L1->addItem(Sp);

    QComboBox *cbx = new QComboBox(this);
    cbx->addItem(tr("---"));
    L1->addWidget(cbx);
}

/**************************************************************/

ItemEditFrame::~ItemEditFrame()
{

}


/**************************************************************/

} // namespace BIBLIO
