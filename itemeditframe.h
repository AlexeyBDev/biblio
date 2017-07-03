#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>

#include "data.h"

class QBoxLayout;

namespace BIBLIO {

/**************************************************************/

class ItemEditFrame : public QFrame
{
    Q_OBJECT
private:
    DATA::Object *Dt;

    QLabel    *lblTotalPages;
    QLineEdit *edtTotalPages;
    void setup_TotalPages   (QBoxLayout *L);

    QComboBox *cbxKind;
    void setup_Kind         (QBoxLayout *L);

    QLineEdit *edtAuthor;
    void setup_Author       (QBoxLayout *L);

    QLineEdit *edtTitle;
    void setup_Title        (QBoxLayout *L);
    void setup_Subtitle     (QBoxLayout *L);
    void setup_Location     (QBoxLayout *L);
    void setup_Publisher    (QBoxLayout *L);
    void setup_Year         (QBoxLayout *L);

    QLineEdit *edtJournal;
    void setup_Journal      (QBoxLayout *L);
    void setup_Volume       (QBoxLayout *L);
    void setup_Issue        (QBoxLayout *L);
    void setup_Pages        (QBoxLayout *L);
    void setup_Comment      (QBoxLayout *L);

protected slots:
    void kindSelected(int index);

public:
    ItemEditFrame(QWidget *parent = 0);
    virtual ~ItemEditFrame();

    void attach(DATA::Object *X);
    void save(void);

    bool isValid() const;
};

/**************************************************************/

} // namespace BIBLIO

#endif // ITEMEDITFRAME_H
