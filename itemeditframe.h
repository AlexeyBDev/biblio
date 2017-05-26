#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>

class QBoxLayout;

namespace BIBLIO {

/**************************************************************/

class ItemEditFrame : public QFrame
{
    Q_OBJECT
private:
    void setup_Author       (QBoxLayout *L);
    void setup_Title        (QBoxLayout *L);
    void setup_Subtitle     (QBoxLayout *L);
    void setup_Location     (QBoxLayout *L);
    void setup_Publisher    (QBoxLayout *L);
    void setup_Year         (QBoxLayout *L);
    void setup_TotalPages   (QBoxLayout *L);
public:
    ItemEditFrame(QWidget *parent = 0);
    virtual ~ItemEditFrame();
};

/**************************************************************/

} // namespace BIBLIO

#endif // ITEMEDITFRAME_H
