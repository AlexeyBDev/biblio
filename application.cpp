#include "application.h"

#include <QTranslator>

namespace BIBLIO {

Application::Application(int argc, char *argv[])
    : QApplication(argc, argv) {
    pTranslator = new QTranslator(this);
    pTranslator->load(":/lang/rus");
    installTranslator(pTranslator);
}

Application::~Application()
{

}

} // namespace BIBLIO
