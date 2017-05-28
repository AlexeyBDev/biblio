#include "helpers.h"

#include <QWidget>

namespace BIBLIO {

namespace HLP {

void setHorisontalPolicy(QWidget *W, QSizePolicy::Policy Pol)
{
    QSizePolicy P = W->sizePolicy();
    P.setHorizontalPolicy(Pol);
    W->setSizePolicy(P);
}

/**
 * @TODO Задавать размер по шрифту
 */
void setWidth(QWidget *W, int Width)
{
    QSize S = W->minimumSize();
    S.setWidth(Width);
    W->setMinimumSize(S);
    // W->resize(S);
}

} // namespace HLP

} // namespzce BIBLIO
