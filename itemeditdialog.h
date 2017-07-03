#ifndef ITEMEDITDIALOG_H
#define ITEMEDITDIALOG_H

#include <QDialog>
#include <QFrame>

#include "itemeditframe.h"
#include "data.h"

class QPushButton;

namespace BIBLIO {

namespace IED_HELPER {

    class Buttons : public QFrame {
        Q_OBJECT
    private:
        QPushButton *pOk;
        QPushButton *pCancel;
    public:
        Buttons(QWidget *parent = 0);

    signals:
        void accepting(void);
        void rejecting(void);
    };

} // namespace IED_HELPER

/**************************************************************/

/**
 * @brief The ItemEditDialog class - редактирование данных
 * об издании в отдельном окне.
 */

class ItemEditDialog : public QDialog
{
    Q_OBJECT

    private:
        ItemEditFrame       *Edt;
        IED_HELPER::Buttons *Btn;

    public:
        ItemEditDialog(QWidget *parent = 0);
        virtual ~ItemEditDialog();

        void attach(DATA::Object *X) {Edt->attach(X);}

    protected:
        void closeEvent(QCloseEvent *E);
};

} // namespace BIBLIO

#endif // ITEMEDITDIALOG_H
