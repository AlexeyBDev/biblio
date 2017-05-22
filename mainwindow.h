#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace BIBLIO {

/***************************************************************/

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();
};

/***************************************************************/

} // namespace BIBLIO

#endif // MAINWINDOW_H
