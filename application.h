#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

namespace BIBLIO {

class Application : public QApplication
{
public:
    Application(int argc, char *argv[]);
    virtual ~Application();
};

} // namespace BIBLIO

#endif // APPLICATION_H
