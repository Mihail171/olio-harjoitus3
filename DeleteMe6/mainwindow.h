#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getBookSlot (QNetworkReply *reply);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *postManager;
    QNetworkReply *reply;
    QByteArray response_data;
    void addBookSlot (QNetworkReply *reply);
private slots:

    void on_pushButton_clicked();
    QString webToken;
};
#endif // MAINWINDOW_H
