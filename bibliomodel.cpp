#include "bibliomodel.h"

namespace BIBLIO {

BiblioModel::BiblioModel(QObject *parent)
    : QAbstractTableModel(parent) {
    // Временно
    DATA::Book *X = new DATA::Book();
    X->Author = "Vasy Pupkin";
    X->Title = "Hello, World!";
    List.append(X);

}

BiblioModel::~BiblioModel()
{
    QListIterator<DATA::Object*> it(List);
    while(it.hasNext()) {
        DATA::Object *X = it.next();
        //...................
        delete X;
    }
}
// Количество строчек в модели
int BiblioModel::rowCount    (const QModelIndex &parent) const {
    if(parent.isValid()) return 0;
    return List.size();
}
// Количество столбцов в модели
int BiblioModel::columnCount (const QModelIndex &parent) const {
    if(parent.isValid()) return 0;
    return 5; //
}

QVariant BiblioModel::data(const QModelIndex &I, int  role) const {
    if(role == Qt::DisplayRole) {
        switch (I.column()) {
        case 0:
            return List.at(I.row())->Author;
        case 1:
            return List.at(I.row())->Title;
        default:
            return QVariant();
        }
    } else {
        return QVariant();
    }

}

} // namespace BIBILO
