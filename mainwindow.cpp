#include "mainwindow.h"
#include "itemeditdialog.h"
#include "table.h"
#include "edit.h"

#include <QAction>
#include <QPushButton>
#include <QToolButton>
#include <QMenuBar>
#include <QTextEdit>
#include <QToolBar>
#include <QDockWidget>
#include <QFrame>
#include <QIcon>

namespace BIBLIO {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QActionGroup *agModes = new QActionGroup(this);
    agModes->setExclusive(true);

    {
    QAction *A = actNewItem = new QAction(this);
    A->setText(tr("Item"));
    connect(A, SIGNAL(triggered()), this, SLOT(newItem()));
    } {
    QAction *A = actTableMode = new QAction(this);
    QIcon Ic(":/icons/table");
    A->setText(tr("Table mode"));
    A->setIcon(Ic);
    A->setCheckable(true);
    agModes->addAction(A);
    modeActiond.insert("Table", A);
    connect(A, SIGNAL(triggered()), this, SLOT(tableMode()));
    } {
    QAction *A = actEditMode = new QAction(this);
    QIcon Ic(":/icons/edit");
    A->setText(tr("Edit mode"));
    A->setIcon(Ic);
    A->setCheckable(true);
    agModes->addAction(A);
    modeActiond.insert("Edit", A);
    connect(A, SIGNAL(triggered()), this, SLOT(editMode()));
    }

    QMenu *mItem = menuBar()->addMenu(tr("Item (A)"));
    mItem->addAction(actNewItem);

    QMenu *mModes = menuBar()->addMenu(tr("Modes"));
    mModes->addAction(actTableMode);
    mModes->addAction(actEditMode);

    QToolBar *tbModes = new QToolBar(this);
    tbModes->setWindowTitle(tr("Modes"));
    tbModes->addAction(actTableMode);
    tbModes->addAction(actEditMode);
    addToolBar(Qt::TopToolBarArea, tbModes);

    QToolBar *tbEmpty = new QToolBar(this);
    tbEmpty->setWindowTitle(tr("Empty"));
    addToolBar(Qt::TopToolBarArea, tbEmpty);

//    Edit *T = new Edit(this);
//    setCentralWidget(T);
//    editMode();
    tableMode();

    // несколько тестовых припаркованных окон

    QMenu *mWindows = menuBar()->addMenu(tr("Windows"));

    {
     QDockWidget *D1 = new QDockWidget(this);
     D1->setWindowTitle(tr("Yellow"));
     QFrame *F1 = new QFrame(this);
     F1->setStyleSheet("background: yellow");
     D1->setWidget(F1);
     addDockWidget(Qt::LeftDockWidgetArea, D1);
     mWindows->addAction(D1->toggleViewAction());
    } {
     QDockWidget *D1 = new QDockWidget(this);
     D1->setWindowTitle(tr("Green"));
     QFrame *F1 = new QFrame(this);
     F1->setStyleSheet("background: green");
     D1->setWidget(F1);
     addDockWidget(Qt::LeftDockWidgetArea, D1);
     mWindows->addAction(D1->toggleViewAction());
    } {
     QDockWidget *D1 = new QDockWidget(this);
     D1->setWindowTitle(tr("Red"));
     QFrame *F1 = new QFrame(this);
     F1->setStyleSheet("background: red");
     D1->setWidget(F1);
     addDockWidget(Qt::LeftDockWidgetArea, D1);
     mWindows->addAction(D1->toggleViewAction());
    }




}

MainWindow::~MainWindow()
{

}

void MainWindow::newItem()
{
    // modal dialog
    ItemEditDialog Dia(this);
    Dia.exec();

    // non modal dialog
//    ItemEditDialog *Dia = new ItemEditDialog(this);
//    Dia->show();
}

void MainWindow::tableMode(void) {
    QWidget *W = centralWidget();
    // Проверяем надо ли вообще переключать режим
    if(dynamic_cast<Table*>(W)) return;
    if(W) {
        // Проверяем, можно ли выключить старый режим
        bool OK = true;
        cancelMode(&OK);
        if(!OK) {
            QString modeName = W->property("modeName").toString();
            QAction *A = modeActiond.value(modeName, 0);
            if(A) A->setChecked(true);
            return;
        }
        // Выключаем старый режим
        setCentralWidget(0); // снимаем центральный виджет
        delete W;
    }
    // Включаем новый режим
    W = new Table(this);
    setCentralWidget(W); // ставим новый центральный виджет
    actTableMode->setChecked(true);
}

void MainWindow::editMode(void) {
    // проверим, можно ли выключить старый режим
    bool OK = true;
    cancelMode(&OK);
    if(!OK) return;
    // переключаем режим
    QWidget *W = centralWidget();
    if(dynamic_cast<Edit*>(W)) return;
    setCentralWidget(0); // снимаем центральный виджет
    delete W;
    W = new Edit(this);
    setCentralWidget(W); // ставим новый центральный виджет
    connect(this, SIGNAL(cancelMode(bool*)), W, SLOT(onCancelMode(bool*)));
    actEditMode->setChecked(true);
}

} // namespace BIBLIO
