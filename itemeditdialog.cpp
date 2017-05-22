#include "itemeditdialog.h"

namespace BIBLIO {

ItemEditDialog::ItemEditDialog(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle(tr("Editing a reference"));
}

ItemEditDialog::~ItemEditDialog()
{

}

} // namespace BIBLIO
