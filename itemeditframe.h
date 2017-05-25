#ifndef ITEMEDITFRAME_H
#define ITEMEDITFRAME_H

#include <QFrame>

class QVBoxLayout;

namespace BIBLIO {

/**************************************************************/

class ItemEditFrame : public QFrame
{
    Q_OBJECT
private:
    void setup_Author   (QVBoxLayout *L);
    void setup_Title    (QVBoxLayout *L);
    void setup_Subtitle (QVBoxLayout *L);
public:
    ItemEditFrame(QWidget *parent = 0);
    virtual ~ItemEditFrame();
};

/**************************************************************/

} // namespace BIBLIO

#endif // ITEMEDITFRAME_H
