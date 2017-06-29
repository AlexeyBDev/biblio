#include "application.h"
#include "table.h"

namespace BIBLIO {

Table::Table(QWidget *parent)
    : QTableView(parent) {
    setProperty("modeName", "Table");

//    pModel = new BiblioModel(this);
//    setModel(pModel);

    setModel(APP->model());
}

Table::~Table() {

}

} // namespace BIBILO
