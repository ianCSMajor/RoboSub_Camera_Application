#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QBoxLayout>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QApplication>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void set_camera_action(QAction *camera_action);
    void set_camera(const QCameraInfo &camera_info);

private:
    Ui::MainWindow *ui;

    void _setup_ui();
    void _setup_camera_devices();

    QCameraViewfinder* _camera_view;
    QWidget *_central_widget;
    QPushButton *_take_image_button;
};
#endif // MAINWINDOW_H
