#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtQml>
#include <QtQuickWidgets/QQuickWidget>
#include <QQuickItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow      *ui;
    QQuickWidget        *view;
    QQuickItem          *rootObject;
    QObject             *mapObject;
};

#endif // MAINWINDOW_H
