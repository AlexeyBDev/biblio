#include "mainwindow.h"
#include "application.h"


int main(int argc, char *argv[])
{
    BIBLIO::Application app(argc, argv);
    BIBLIO::MainWindow w;
    w.show();

    return app.exec();
}
