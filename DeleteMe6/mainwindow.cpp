#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    webToken="Your_token_here";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QJsonObject jsonObj;
    jsonObj.insert("name","Uusi kirja");
    jsonObj.insert("author","Matti Mainio");
    jsonObj.insert("isbn","123-456-789");

    QString site_url="http://localhost:3000/book";
    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //WEBTOKEN ALKU
   QByteArray =reply->readAll();
    request.setRawHeader(QByteArray("Authorization"),(myToken));
    //WEBTOKEN LOPPU

    postManager = new QNetworkAccessManager(this);
    connect(postManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(addBookSlot(QNetworkReply*)));

    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());
}
// void MainWindow::getBookSlot (QNetworkReply *reply)
// {
//     response_data=reply->readAll();
//     qDebug()<<"DATA : "+response_data;
//     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
//     QJsonArray json_array = json_doc.array();
//     QString book;
//     for (const QJsonValue &value: json_array) {
//         QJsonObject json_obj = value.toObject();
//         book+=QString::number(json_obj["id_book"].toInt())+", "+json_obj["name"].toString()+", "+json_obj["author"].toString()+"\r";
//     }

//     ui->textBooks->setText(book);

//     reply->deleteLater();
//     getManager->deleteLater();
// }
void MainWindow::addBookSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    postManager->deleteLater();
}
