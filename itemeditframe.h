#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>

class QBoxLayout;

namespace BIBLIO {

/**************************************************************/

class ItemEditFrame : public QFrame
{
    Q_OBJECT
private:
    QLabel    *lblTotalPages;
    QLineEdit *edtTotalPages;
    void setup_TotalPages   (QBoxLayout *L);

    QComboBox *cbxKind;
    void setup_Kind         (QBoxLayout *L);

    void setup_Author       (QBoxLayout *L);
    void setup_Title        (QBoxLayout *L);
    void setup_Subtitle     (QBoxLayout *L);
    void setup_Location     (QBoxLayout *L);
    void setup_Publisher    (QBoxLayout *L);
    void setup_Year         (QBoxLayout *L);
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
};

/**************************************************************/

} // namespace BIBLIO

#endif // ITEMEDITFRAME_H
