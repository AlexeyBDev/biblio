#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// Класс QAction, объявленный в заголовочном файле, используется только для
// того чтобы создать переменную-указатель. Функционал данного класса использоваться
// не будет.

class QAction;

namespace BIBLIO {

/***************************************************************/

/**
 * @brief The MainWindow class - пользовательский класс
 * главного окна.
 */

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QAction *actNewItem;

    QAction *actEditMode;
    QAction *actTableMode;

public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

protected slots:
    void newItem(void);
    //void editMode(void);
    //void tableMode(void);

};

/***************************************************************/

} // namespace BIBLIO

#endif // MAINWINDOW_H
