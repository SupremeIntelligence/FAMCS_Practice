#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    double Exchange(double value, QString from, QString to);
    ~MainWindow();

private slots:

    void on_Upload_clicked();

    void on_Download_clicked();

    void on_line1_textChanged();

    void on_Exchange_rate_clicked();

    void on_line2_textChanged();

    void on_line3_textChanged();

    void setQMap (QMap<QString,double> &map, QString line);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
