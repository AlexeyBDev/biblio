#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

class QTranslator;

namespace BIBLIO {

/**
 * @brief The Application class - пользовательский класс
 * приложения.
 */

class Application : public QApplication
{
    Q_OBJECT
private:
    QTranslator *pTranslator;
public:
    Application(int argc, char *argv[]);
    virtual ~Application();
};

} // namespace BIBLIO

#endif // APPLICATION_H
