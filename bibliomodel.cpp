#include "bibliomodel.h"

namespace BIBLIO {

BiblioModel::BiblioModel(QObject *parent)
    : QAbstractTableModel(parent) {

}

BiblioModel::~BiblioModel()
{

}
// Количество строчек в модели
int BiblioModel::rowCount    (const QModelIndex &parent) const {
    if(parent.isValid()) return 0;
    return 5; // List.size();
}
// Количество столбцов в модели
int BiblioModel::columnCount (const QModelIndex &parent) const {
    if(parent.isValid()) return 0;
    return 2; //
}

QVariant BiblioModel::data(const QModelIndex &I, int  role) const {
    if(role == Qt::DisplayRole) {
        return "Hello"; // List.at(I.row()).Author;
    } else {
        return QVariant();
    }

}

} // namespace BIBILO
