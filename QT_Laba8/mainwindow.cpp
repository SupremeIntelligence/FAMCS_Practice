#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
#include<QObject>
#include<QTextEdit>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QString>
#include<QMap>
#include<QDialog>

QMap<QString, double> BYN = {{"BYN", 1.0}, {"USD", 3.185}, {"EUR", 3.449}, {"RUB", 0.0367}, {"KZT",0.0068} };
QMap<QString, double> USD = {{"BYN", 0.3162}, {"USD", 1.0}, {"EUR", 1.0695}, {"RUB", 0.0116}, {"KZT",0.0021}};
QMap<QString, double> EUR = {{"BYN", 0.2957}, {"USD", 0.935}, {"EUR", 1.0}, {"RUB", 0.0109}, {"KZT",0.002} };
QMap<QString, double> RUB = {{"BYN", 27.1843}, {"USD", 85.9675}, {"EUR", 91.9399}, {"RUB", 1.0}, {"KZT",0.1844} };
QMap<QString, double> KZT = {{"BYN",147.4057}, {"USD",466.1557}, {"EUR",498.5407}, {"RUB", 5.4225}, {"KZT",1.0} };


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Rates->hide();
    ui->statusbar->showMessage("version 2.0");

    //connect(ui->line1, &QTextEdit::textChanged, this, &MainWindow::on_line1_textChanged);
    //connect(ui->line2, &QTextEdit::textChanged, this, &MainWindow::on_line2_textChanged);
    //connect(ui->line3, &QTextEdit::textChanged, this, &MainWindow::on_line3_textChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: setQMap (QMap<QString,double> &map, QString line)
{
    QList<QString> list = line.split(" ");
    QList<QString> :: iterator itr = list.begin();
    map["BYN"] = (*itr).toDouble();
    itr++;
    map["USD"]= (*itr).toDouble();
    itr++;
    map["EUR"]= (*itr).toDouble();
    itr++;
    map["RUB"]= (*itr).toDouble();
    itr++;
    map["KZT"]= (*itr).toDouble();
}


void MainWindow::on_Upload_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Открыть входной файл"), "", tr("Text Files (*.txt)"));
    QFile up_file (filename);

    if (up_file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream input(&up_file);
        QString line = input.readLine();
        setQMap (BYN, line);
        ui->USD_BYN_label->setText(QString::number(BYN["USD"]));
        ui->EUR_BYN_label->setText(QString::number(BYN["EUR"]));
        ui->RUB_BYN_label->setText(QString::number(BYN["RUB"]));
        ui->KZT_BYN_label->setText(QString::number(BYN["KZT"]));
        line = input.readLine();
        setQMap (USD, line);
        ui->BYN_USD_label->setText(QString::number(USD["BYN"]));
        ui->EUR_USD_label->setText(QString::number(USD["EUR"]));
        ui->RUB_USD_label->setText(QString::number(USD["RUB"]));
        ui->KZT_USD_label->setText(QString::number(USD["KZT"]));
        line = input.readLine();
        setQMap(EUR, line);
        ui->USD_EUR_label->setText(QString::number(EUR["USD"]));
        ui->BYN_EUR_label->setText(QString::number(EUR["BYN"]));
        ui->RUB_EUR_label->setText(QString::number(EUR["RUB"]));
        ui->KZT_EUR_label->setText(QString::number(EUR["KZT"]));
        line = input.readLine();
        setQMap(RUB, line);
        ui->USD_RUB_label->setText(QString::number(RUB["USD"]));
        ui->EUR_RUB_label->setText(QString::number(RUB["USD"]));
        ui->BYN_RUB_label->setText(QString::number(RUB["USD"]));
        ui->KZT_RUB_label->setText(QString::number(RUB["USD"]));
        line = input.readLine();
        setQMap (KZT, line);
        ui->USD_KZT_label->setText(QString::number(KZT["USD"]));
        ui->EUR_KZT_label->setText(QString::number(KZT["EUR"]));
        ui->RUB_KZT_label->setText(QString::number(KZT["RUB"]));
        ui->BYN_KZT_label->setText(QString::number(KZT["BYN"]));


        up_file.close();
    }
    else
    {
        QMessageBox::critical(this, "Ошибка", "Входной файл не открыт");
    }

}


void MainWindow::on_Download_clicked()
{
 QString down_file = QFileDialog::getExistingDirectory(this, tr("Выберите директорию выгрузки выходного файла"), QDir::homePath());
    down_file+= "/output.txt";
    QFile out(down_file);
    if (out.open(QIODevice::WriteOnly))
    {
    QTextStream output (&out);
    output<<qSetFieldWidth(12)<<"BYN"<<qSetFieldWidth(12)<<"USD"<<qSetFieldWidth(12)<<"EUR"<<qSetFieldWidth(12)<<"RUB"<<qSetFieldWidth(12)<<"KZT\n";
    output<<qSetFieldWidth(3)<<"BYN"<<qSetFieldWidth(9)<<BYN["BYN"]<<qSetFieldWidth(12)<<BYN["USD"]<<qSetFieldWidth(12)<<BYN["EUR"]<<qSetFieldWidth(12)<<BYN["RUB"]<<qSetFieldWidth(12)<<BYN["KZT"]<<Qt::endl;
    output<<qSetFieldWidth(3)<<"USD"<<qSetFieldWidth(9)<<USD["BYN"]<<qSetFieldWidth(12)<<USD["USD"]<<qSetFieldWidth(12)<<USD["EUR"]<<qSetFieldWidth(12)<<USD["RUB"]<<qSetFieldWidth(12)<<USD["KZT"]<<Qt::endl;
    output<<qSetFieldWidth(3)<<"EUR"<<qSetFieldWidth(9)<<EUR["BYN"]<<qSetFieldWidth(12)<<EUR["USD"]<<qSetFieldWidth(12)<<EUR["EUR"]<<qSetFieldWidth(12)<<EUR["RUB"]<<qSetFieldWidth(12)<<EUR["KZT"]<<Qt::endl;
    output<<qSetFieldWidth(3)<<"RUB"<<qSetFieldWidth(9)<<RUB["BYN"]<<qSetFieldWidth(12)<<RUB["USD"]<<qSetFieldWidth(12)<<RUB["EUR"]<<qSetFieldWidth(12)<<RUB["RUB"]<<qSetFieldWidth(12)<<RUB["KZT"]<<Qt::endl;
    output<<qSetFieldWidth(3)<<"KZT"<<qSetFieldWidth(9)<<KZT["BYN"]<<qSetFieldWidth(12)<<KZT["USD"]<<qSetFieldWidth(12)<<KZT["EUR"]<<qSetFieldWidth(12)<<KZT["RUB"]<<qSetFieldWidth(12)<<KZT["KZT"]<<Qt::endl;

    out.close();
    }
    else
    {
        qDebug()<<"Error opening file"<<down_file;
    }

}


double MainWindow:: Exchange(double value, QString from, QString to)
{
    if (from == "BYN")      return value / BYN[to];
    else if (from == "USD") return value / USD[to];
    else if (from == "EUR") return value / EUR[to];
    else if (from == "RUB") return value / RUB[to];
    else if (from == "KZT") return value / KZT[to];
}

void MainWindow::on_line1_textChanged()
{

    QString currency = ui->line1->toPlainText();
    bool ok = false;
    double value = currency.toDouble(&ok);
    if (ok || currency.isEmpty())
    {
        ui->line2->blockSignals(true);
        ui->line3->blockSignals(true);

        QString main_name = ui->Currency_1->currentText();
        QString name2 = ui->Currency_2->currentText();
        QString  name3 = ui->Currency_3->currentText();
        currency = QString :: number(Exchange(value, main_name, name2));
        ui->line2->setText(currency);
        currency = QString :: number (Exchange(value, main_name, name3));
        ui->line3->setText(currency);

        ui->line2->blockSignals(true);
        ui->line3->blockSignals(true);
    }
    else
    {
        QMessageBox::critical(this, "Ошибка ввода", "Введенное значение не является числовым");
    }

}

void MainWindow::on_line2_textChanged()
{
    QString currency = ui->line2->toPlainText();
    bool ok = false;
    double value = currency.toDouble(&ok);
    if (ok || currency.isEmpty())
    {
    ui->line1->blockSignals(true);
    ui->line3->blockSignals(true);
    QString main_name = ui->Currency_2->currentText();
    QString name1 = ui->Currency_1->currentText();
    QString  name3 = ui->Currency_3->currentText();
    currency = QString :: number(Exchange(value, main_name, name1));
    ui->line1->setText(currency);
    currency = QString :: number (Exchange(value, main_name, name3));
    ui->line3->setText(currency);

    ui->line1->blockSignals(false);
    ui->line3->blockSignals(false);
    }
    else
    {
        QMessageBox::critical(this, "Ошибка ввода", "Введенное значение не является числовым");
    }
}

void MainWindow::on_line3_textChanged()
{
    QString currency = ui->line3->toPlainText();
    bool ok = false;
    double value = currency.toDouble(&ok);
    if (ok || currency.isEmpty())
    {
        ui->line1->blockSignals(true);
        ui->line2->blockSignals(true);
        QString main_name = ui->Currency_3->currentText();
        QString name1 = ui->Currency_1->currentText();
        QString  name2 = ui->Currency_2->currentText();
        currency = QString :: number(Exchange(value, main_name, name1));
        ui->line1->setText(currency);
        currency = QString :: number (Exchange(value, main_name, name2));
        ui->line2->setText(currency);
        ui->line1->blockSignals(false);
        ui->line2->blockSignals(false);
    }
    else
    {
        QMessageBox::critical(this, "Ошибка ввода", "Введенное значение не является числовым");
    }


}
void MainWindow::on_Exchange_rate_clicked()
{
    if(ui->Exchange_rate->isChecked())
    {
        ui->Rates->show();
    }
    else
    {
        ui->Rates->hide();
    }
}


void MainWindow::on_Personalization_triggered()
{
    QMessageBox::information(this, "В разработке", "It will be realeased in ver2.5");
}

void MainWindow::on_About_triggered()
{
    QDialog* about_w = new QDialog();
    about_w->setWindowTitle("О Разработчике");
    about_w->setWindowIcon(QIcon("Icon.ico"));
    about_w->setModal(true);
    about_w->setFixedWidth(360);
    about_w->setFixedHeight(200);
    about_w->show();

    QLabel *about_label = new QLabel();
    about_label->setParent(about_w);
    about_label->setGeometry(0,0, 360,200);
    about_label->setAlignment(Qt::AlignCenter);
    about_label->setText("Программа находится в стадии разработки.\n"
                        "Разработчик: Александр 'Supreme Intelligence' Евдокимов\n"
                        "ФПМИ БГУ, 1 курс, специальность: прикладная математика\n");
    about_label->show();
}

void MainWindow::on_Exit_triggered()
{
    QApplication::quit();
}

