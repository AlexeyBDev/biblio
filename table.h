#ifndef TABLE_H
#define TABLE_H

class QAction;

#include <QTableView>

namespace BIBLIO {

class Table : public QTableView
{
    Q_OBJECT
private:
    QAction *actEdit;
    QAction *actNew;
    QAction *actDelete;

public:
    Table(QWidget *parent = 0);
    virtual ~Table();

protected slots:
    void itemEditCurrent(void);
    void itemCreateNew(void);
    void itemDeleteCurrent(void);
};

} // namespace BIBLIO

#endif // TABLE_H
