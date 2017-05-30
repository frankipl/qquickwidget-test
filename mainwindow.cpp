#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    view = new QQuickWidget(ui->centralWidget);
    ui->gridLayout->addWidget(view,0,0);
    ui->gridLayout->setMargin(0);
    view->setSource(QUrl("qrc:/navi-viewer.qml"));
    view->setResizeMode(QQuickWidget::SizeRootObjectToView);
    view->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
