#ifndef ITEMEDITDIALOG_H
#define ITEMEDITDIALOG_H

#include <QDialog>

namespace BIBLIO {

/**
 * @brief The ItemEditDialog class - редактирование данных
 * об издании в отдельном окне.
 */

class ItemEditDialog : public QDialog
{
public:
    ItemEditDialog(QWidget *parent = 0);
    virtual ~ItemEditDialog();
};

} // namespace BIBLIO

#endif // ITEMEDITDIALOG_H
