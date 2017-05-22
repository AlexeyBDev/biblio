#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

namespace BIBLIO {

/**
 * @brief The Application class - пользовательский класс
 * приложения.
 */

class Application : public QApplication
{
public:
    Application(int argc, char *argv[]);
    virtual ~Application();
};

} // namespace BIBLIO

#endif // APPLICATION_H
