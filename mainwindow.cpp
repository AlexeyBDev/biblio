#include "mainwindow.h"
#include "itemeditdialog.h"

#include <QAction>
#include <QPushButton>
#include <QToolButton>
#include <QMenuBar>

namespace BIBLIO {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    {
    QAction *A = 0;
    A = actNewItem = new QAction(this);
    A->setText(tr("Item action"));
    connect(A, SIGNAL(triggered()), this, SLOT(newItem()));
    }

    QMenu *mItem = menuBar()->addMenu(tr("Item (A)"));
    mItem->addAction(actNewItem);

//    QToolButton *B = new QToolButton(this);
//    B->setText(tr("Item (B)"));
//    B->move(100, 100);
//    //connect(B, SIGNAL(clicked(bool)), this, SLOT(newItem()));
//    B->setDefaultAction(actNewItem);

//    QPushButton *C = new QPushButton(this);
//    C->setText(tr("Item (C)"));
//    C->move(100, 200);
//    // connect(C, SIGNAL(clicked(bool)), this, SLOT(newItem()));
//    // C->setDefaultAction(actNewItem);
//    connect(C,          SIGNAL(clicked(bool)),
//            actNewItem, SIGNAL(triggered(bool)));

//    actNewItem->setEnabled(false);
}

MainWindow::~MainWindow()
{

}

void MainWindow::newItem()
{
    ItemEditDialog Dia(this);
    Dia.exec();
}

} // namespace BIBLIO
