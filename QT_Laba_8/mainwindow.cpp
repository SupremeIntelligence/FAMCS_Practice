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
        line = input.readLine();
        setQMap (USD, line);
        line = input.readLine();
        setQMap(EUR, line);
        line = input.readLine();
        setQMap(RUB, line);
        line = input.readLine();
        setQMap (KZT, line);

        up_file.close();
    }
    else
    {
        QMessageBox::critical(this, "Ошибка", "Входной файл не открыт");
    }

}


void MainWindow::on_Download_clicked()
{
 QString directory = QFileDialog::getExistingDirectory(this, tr("Выберите директорию выгрузки выходного файла"), QDir::homePath());

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
        ui->line2->setPlainText(currency);
        currency = QString :: number (Exchange(value, main_name, name3));
        ui->line3->setPlainText(currency);

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
    ui->line1->setPlainText(currency);
    currency = QString :: number (Exchange(value, main_name, name3));
    ui->line3->setPlainText(currency);

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
        ui->line1->setPlainText(currency);
        currency = QString :: number (Exchange(value, main_name, name2));
        ui->line2->setPlainText(currency);
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







