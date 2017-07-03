#include <QAction>

#include "application.h"
#include "table.h"
#include "itemeditdialog.h"

namespace BIBLIO {

Table::Table(QWidget *parent)
    : QTableView(parent) {
    setProperty("modeName", "Table");

//    pModel = new BiblioModel(this);
//    setModel(pModel);

    setModel(APP->model());

    setContextMenuPolicy(Qt::ActionsContextMenu);
    {
        QAction *A = actNew = new QAction(this);
        A->setText(tr("New"));
        connect(A, SIGNAL(triggered()), this, SLOT(itemCreateNew()));
        addAction(A);
    } {
        QAction *A = actEdit = new QAction(this);
        A->setText(tr("Edit"));
        connect(A, SIGNAL(triggered()), this, SLOT(itemEditCurrent()));
        addAction(A);
    } {
        QAction *A = actDelete = new QAction(this);
        A->setText(tr("Delete"));
        connect(A, SIGNAL(triggered()), this, SLOT(itemDeleteCurrent()));
        addAction(A);
    }
}

Table::~Table() {

}

void Table::itemEditCurrent(void) {
    // Определяем какая строчка выбрана
    if( ! selectedIndexes().first().isValid() ) return;
    int row = selectedIndexes().first().row();
    DATA::Object *X = APP->model()->at(row);
    // создаем диалог
    ItemEditDialog Dia(this);
    Dia.attach(X);
    Dia.exec();
}

void Table::itemCreateNew(void) {

}

void Table::itemDeleteCurrent(void) {

}

} // namespace BIBILO
