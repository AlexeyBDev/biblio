#ifndef TABLE_H
#define TABLE_H

#include <QTableView>

namespace BIBLIO {

class Table : public QTableView
{
    Q_OBJECT

public:
    Table(QWidget *parent = 0);
    virtual ~Table();
};

} // namespace BIBLIO

#endif // TABLE_H
