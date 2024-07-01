/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Personalization;
    QAction *About;
    QAction *Exit;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *Exchange_rate;
    QPushButton *Upload;
    QPushButton *Download;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *Rates;
    QGridLayout *gridLayout_2;
    QLabel *label_36;
    QLabel *label_24;
    QLabel *RUB_BYN_label;
    QLabel *EUR_BYN_label;
    QLabel *label_35;
    QLabel *label_39;
    QLabel *EUR_KZT_label;
    QLabel *RUB_USD_label;
    QLabel *USD_EUR_label;
    QLabel *label_20;
    QLabel *RUB_EUR_label;
    QLabel *label_44;
    QLabel *EUR_RUB_label;
    QLabel *BYN_RUB_label;
    QLabel *label_11;
    QLabel *RUB_KZT_label;
    QLabel *label_7;
    QLabel *BYN_KZT_label;
    QLabel *label_30;
    QLabel *label_18;
    QLabel *KZT_EUR_label;
    QLabel *label_29;
    QLabel *label_41;
    QLabel *label_33;
    QLabel *KZT_USD_label;
    QLabel *label_10;
    QLabel *label_22;
    QLabel *label_3;
    QLabel *KZT_RUB_label;
    QLabel *BYN_EUR_label;
    QLabel *label_27;
    QLabel *USD_BYN_label;
    QLabel *label_37;
    QLabel *BYN_USD_label;
    QLabel *label_40;
    QLabel *EUR_USD_label;
    QLabel *KZT_BYN_label;
    QLabel *label_2;
    QLabel *USD_KZT_label;
    QLabel *label_15;
    QLabel *USD_RUB_label;
    QLabel *label;
    QLabel *label_26;
    QLabel *label_16;
    QLabel *label_9;
    QFormLayout *formLayout_2;
    QComboBox *Currency_1;
    QTextEdit *line1;
    QComboBox *Currency_2;
    QTextEdit *line2;
    QComboBox *Currency_3;
    QTextEdit *line3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(517, 727);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        Personalization = new QAction(MainWindow);
        Personalization->setObjectName("Personalization");
        About = new QAction(MainWindow);
        About->setObjectName("About");
        Exit = new QAction(MainWindow);
        Exit->setObjectName("Exit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 10, 452, 619));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Exchange_rate = new QCheckBox(layoutWidget);
        Exchange_rate->setObjectName("Exchange_rate");

        horizontalLayout->addWidget(Exchange_rate);

        Upload = new QPushButton(layoutWidget);
        Upload->setObjectName("Upload");
        Upload->setStyleSheet(QString::fromUtf8("color:red"));

        horizontalLayout->addWidget(Upload);

        Download = new QPushButton(layoutWidget);
        Download->setObjectName("Download");
        Download->setStyleSheet(QString::fromUtf8("color:red"));

        horizontalLayout->addWidget(Download);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Rates = new QGroupBox(layoutWidget);
        Rates->setObjectName("Rates");
        Rates->setEnabled(true);
        Rates->setAutoFillBackground(true);
        Rates->setStyleSheet(QString::fromUtf8(""));
        Rates->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(Rates);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 2, -1, 12);
        label_36 = new QLabel(Rates);
        label_36->setObjectName("label_36");
        label_36->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_36, 0, 0, 1, 2);

        label_24 = new QLabel(Rates);
        label_24->setObjectName("label_24");

        gridLayout_2->addWidget(label_24, 11, 0, 1, 1);

        RUB_BYN_label = new QLabel(Rates);
        RUB_BYN_label->setObjectName("RUB_BYN_label");
        QFont font;
        font.setBold(true);
        RUB_BYN_label->setFont(font);
        RUB_BYN_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(RUB_BYN_label, 3, 1, 1, 1);

        EUR_BYN_label = new QLabel(Rates);
        EUR_BYN_label->setObjectName("EUR_BYN_label");
        EUR_BYN_label->setFont(font);
        EUR_BYN_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(EUR_BYN_label, 2, 1, 1, 1);

        label_35 = new QLabel(Rates);
        label_35->setObjectName("label_35");

        gridLayout_2->addWidget(label_35, 16, 0, 1, 1);

        label_39 = new QLabel(Rates);
        label_39->setObjectName("label_39");

        gridLayout_2->addWidget(label_39, 26, 0, 1, 1);

        EUR_KZT_label = new QLabel(Rates);
        EUR_KZT_label->setObjectName("EUR_KZT_label");
        EUR_KZT_label->setFont(font);
        EUR_KZT_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(EUR_KZT_label, 28, 1, 1, 1);

        RUB_USD_label = new QLabel(Rates);
        RUB_USD_label->setObjectName("RUB_USD_label");
        RUB_USD_label->setFont(font);
        RUB_USD_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(RUB_USD_label, 13, 1, 1, 1);

        USD_EUR_label = new QLabel(Rates);
        USD_EUR_label->setObjectName("USD_EUR_label");
        USD_EUR_label->setFont(font);
        USD_EUR_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(USD_EUR_label, 6, 1, 1, 1);

        label_20 = new QLabel(Rates);
        label_20->setObjectName("label_20");

        gridLayout_2->addWidget(label_20, 14, 0, 1, 1);

        RUB_EUR_label = new QLabel(Rates);
        RUB_EUR_label->setObjectName("RUB_EUR_label");
        RUB_EUR_label->setFont(font);
        RUB_EUR_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(RUB_EUR_label, 8, 1, 1, 1);

        label_44 = new QLabel(Rates);
        label_44->setObjectName("label_44");

        gridLayout_2->addWidget(label_44, 30, 0, 1, 1);

        EUR_RUB_label = new QLabel(Rates);
        EUR_RUB_label->setObjectName("EUR_RUB_label");
        EUR_RUB_label->setFont(font);
        EUR_RUB_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(EUR_RUB_label, 18, 1, 1, 1);

        BYN_RUB_label = new QLabel(Rates);
        BYN_RUB_label->setObjectName("BYN_RUB_label");
        BYN_RUB_label->setFont(font);
        BYN_RUB_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(BYN_RUB_label, 20, 1, 1, 1);

        label_11 = new QLabel(Rates);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 6, 0, 1, 1);

        RUB_KZT_label = new QLabel(Rates);
        RUB_KZT_label->setObjectName("RUB_KZT_label");
        RUB_KZT_label->setFont(font);
        RUB_KZT_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(RUB_KZT_label, 29, 1, 1, 1);

        label_7 = new QLabel(Rates);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        BYN_KZT_label = new QLabel(Rates);
        BYN_KZT_label->setObjectName("BYN_KZT_label");
        BYN_KZT_label->setFont(font);
        BYN_KZT_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(BYN_KZT_label, 30, 1, 1, 1);

        label_30 = new QLabel(Rates);
        label_30->setObjectName("label_30");

        gridLayout_2->addWidget(label_30, 18, 0, 1, 1);

        label_18 = new QLabel(Rates);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_18, 10, 0, 1, 2);

        KZT_EUR_label = new QLabel(Rates);
        KZT_EUR_label->setObjectName("KZT_EUR_label");
        KZT_EUR_label->setFont(font);
        KZT_EUR_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(KZT_EUR_label, 9, 1, 1, 1);

        label_29 = new QLabel(Rates);
        label_29->setObjectName("label_29");

        gridLayout_2->addWidget(label_29, 20, 0, 1, 1);

        label_41 = new QLabel(Rates);
        label_41->setObjectName("label_41");

        gridLayout_2->addWidget(label_41, 29, 0, 1, 1);

        label_33 = new QLabel(Rates);
        label_33->setObjectName("label_33");

        gridLayout_2->addWidget(label_33, 24, 0, 1, 1);

        KZT_USD_label = new QLabel(Rates);
        KZT_USD_label->setObjectName("KZT_USD_label");
        KZT_USD_label->setFont(font);
        KZT_USD_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(KZT_USD_label, 14, 1, 1, 1);

        label_10 = new QLabel(Rates);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 7, 0, 1, 1);

        label_22 = new QLabel(Rates);
        label_22->setObjectName("label_22");

        gridLayout_2->addWidget(label_22, 12, 0, 1, 1);

        label_3 = new QLabel(Rates);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        KZT_RUB_label = new QLabel(Rates);
        KZT_RUB_label->setObjectName("KZT_RUB_label");
        KZT_RUB_label->setFont(font);
        KZT_RUB_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(KZT_RUB_label, 24, 1, 1, 1);

        BYN_EUR_label = new QLabel(Rates);
        BYN_EUR_label->setObjectName("BYN_EUR_label");
        BYN_EUR_label->setFont(font);
        BYN_EUR_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(BYN_EUR_label, 7, 1, 1, 1);

        label_27 = new QLabel(Rates);
        label_27->setObjectName("label_27");
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_27, 15, 0, 1, 2);

        USD_BYN_label = new QLabel(Rates);
        USD_BYN_label->setObjectName("USD_BYN_label");
        USD_BYN_label->setFont(font);
        USD_BYN_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(USD_BYN_label, 1, 1, 1, 1);

        label_37 = new QLabel(Rates);
        label_37->setObjectName("label_37");
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_37, 25, 0, 1, 2);

        BYN_USD_label = new QLabel(Rates);
        BYN_USD_label->setObjectName("BYN_USD_label");
        BYN_USD_label->setFont(font);
        BYN_USD_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(BYN_USD_label, 11, 1, 1, 1);

        label_40 = new QLabel(Rates);
        label_40->setObjectName("label_40");

        gridLayout_2->addWidget(label_40, 28, 0, 1, 1);

        EUR_USD_label = new QLabel(Rates);
        EUR_USD_label->setObjectName("EUR_USD_label");
        EUR_USD_label->setFont(font);
        EUR_USD_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(EUR_USD_label, 12, 1, 1, 1);

        KZT_BYN_label = new QLabel(Rates);
        KZT_BYN_label->setObjectName("KZT_BYN_label");
        KZT_BYN_label->setFont(font);
        KZT_BYN_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(KZT_BYN_label, 4, 1, 1, 1);

        label_2 = new QLabel(Rates);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        USD_KZT_label = new QLabel(Rates);
        USD_KZT_label->setObjectName("USD_KZT_label");
        USD_KZT_label->setFont(font);
        USD_KZT_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(USD_KZT_label, 26, 1, 1, 1);

        label_15 = new QLabel(Rates);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 8, 0, 1, 1);

        USD_RUB_label = new QLabel(Rates);
        USD_RUB_label->setObjectName("USD_RUB_label");
        USD_RUB_label->setFont(font);
        USD_RUB_label->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_2->addWidget(USD_RUB_label, 16, 1, 1, 1);

        label = new QLabel(Rates);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_26 = new QLabel(Rates);
        label_26->setObjectName("label_26");

        gridLayout_2->addWidget(label_26, 13, 0, 1, 1);

        label_16 = new QLabel(Rates);
        label_16->setObjectName("label_16");

        gridLayout_2->addWidget(label_16, 9, 0, 1, 1);

        label_9 = new QLabel(Rates);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 5, 0, 1, 2);


        horizontalLayout_2->addWidget(Rates);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_2->setHorizontalSpacing(10);
        formLayout_2->setVerticalSpacing(0);
        Currency_1 = new QComboBox(layoutWidget);
        Currency_1->addItem(QString());
        Currency_1->addItem(QString());
        Currency_1->addItem(QString());
        Currency_1->addItem(QString());
        Currency_1->addItem(QString());
        Currency_1->setObjectName("Currency_1");
        Currency_1->setAutoFillBackground(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, Currency_1);

        line1 = new QTextEdit(layoutWidget);
        line1->setObjectName("line1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(line1->sizePolicy().hasHeightForWidth());
        line1->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, line1);

        Currency_2 = new QComboBox(layoutWidget);
        Currency_2->addItem(QString());
        Currency_2->addItem(QString());
        Currency_2->addItem(QString());
        Currency_2->addItem(QString());
        Currency_2->addItem(QString());
        Currency_2->setObjectName("Currency_2");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, Currency_2);

        line2 = new QTextEdit(layoutWidget);
        line2->setObjectName("line2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(line2->sizePolicy().hasHeightForWidth());
        line2->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, line2);

        Currency_3 = new QComboBox(layoutWidget);
        Currency_3->addItem(QString());
        Currency_3->addItem(QString());
        Currency_3->addItem(QString());
        Currency_3->addItem(QString());
        Currency_3->addItem(QString());
        Currency_3->setObjectName("Currency_3");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, Currency_3);

        line3 = new QTextEdit(layoutWidget);
        line3->setObjectName("line3");
        sizePolicy.setHeightForWidth(line3->sizePolicy().hasHeightForWidth());
        line3->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, line3);


        horizontalLayout_2->addLayout(formLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 517, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(Personalization);
        menu->addAction(About);
        menu->addAction(Exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Personalization->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        About->setText(QCoreApplication::translate("MainWindow", "\320\236 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\265", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        Exchange_rate->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214 \320\272\321\203\321\200\321\201 \320\262\320\260\320\273\321\216\321\202", nullptr));
        Upload->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        Download->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        Rates->setTitle(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201\321\213 \320\262\320\260\320\273\321\216\321\202", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h4 style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:medium; font-weight:700; color:#aa55ff;\">BYN</span></h4></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">BYN/USD</span></p></body></html>", nullptr));
        RUB_BYN_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0367</span></p></body></html>", nullptr));
        EUR_BYN_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.449</span></p></body></html>", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">USD/RUB</span></p></body></html>", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">USD/KZT</span></p></body></html>", nullptr));
        EUR_KZT_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0068</span></p></body></html>", nullptr));
        RUB_USD_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0367</span></p></body></html>", nullptr));
        USD_EUR_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.185</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">KZT/USD</span></p></body></html>", nullptr));
        RUB_EUR_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0367</span></p></body></html>", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">BYN/KZT</span></p></body></html>", nullptr));
        EUR_RUB_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.449</span></p></body></html>", nullptr));
        BYN_RUB_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0367</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">USD/EUR</span></p></body></html>", nullptr));
        RUB_KZT_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0367</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">KZT/BYN</span></p></body></html>", nullptr));
        BYN_KZT_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.449</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">EUR/RUB</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa00ff;\">USD</span></p></body></html>", nullptr));
        KZT_EUR_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0068</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">BYN/RUB</span></p></body></html>", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">RUB/KZT</span></p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">KZT/RUB</span></p></body></html>", nullptr));
        KZT_USD_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0068</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">BYN/EUR</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">EUR/USD</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">RUB/BYN</span></p></body></html>", nullptr));
        KZT_RUB_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0068</span></p></body></html>", nullptr));
        BYN_EUR_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.449</span></p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa00ff;\">RUB</span></p></body></html>", nullptr));
        USD_BYN_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.185</span></p></body></html>", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa00ff;\">KZT</span></p></body></html>", nullptr));
        BYN_USD_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.185</span></p></body></html>", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">EUR/KZT</span></p></body></html>", nullptr));
        EUR_USD_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.449</span></p></body></html>", nullptr));
        KZT_BYN_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">0.0068</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">EUR/BYN</span></p></body></html>", nullptr));
        USD_KZT_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.185</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">RUB/EUR</span></p></body></html>", nullptr));
        USD_RUB_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">3.185</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">USD/BYN</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">RUB/USD</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">KZT/EUR</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa00ff;\">EUR</span></p></body></html>", nullptr));
        Currency_1->setItemText(0, QCoreApplication::translate("MainWindow", "USD", nullptr));
        Currency_1->setItemText(1, QCoreApplication::translate("MainWindow", "EUR", nullptr));
        Currency_1->setItemText(2, QCoreApplication::translate("MainWindow", "BYN", nullptr));
        Currency_1->setItemText(3, QCoreApplication::translate("MainWindow", "RUB", nullptr));
        Currency_1->setItemText(4, QCoreApplication::translate("MainWindow", "KZT", nullptr));

        line1->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        Currency_2->setItemText(0, QCoreApplication::translate("MainWindow", "BYN", nullptr));
        Currency_2->setItemText(1, QCoreApplication::translate("MainWindow", "EUR", nullptr));
        Currency_2->setItemText(2, QCoreApplication::translate("MainWindow", "USD", nullptr));
        Currency_2->setItemText(3, QCoreApplication::translate("MainWindow", "RUB", nullptr));
        Currency_2->setItemText(4, QCoreApplication::translate("MainWindow", "KZT", nullptr));

        line2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        Currency_3->setItemText(0, QCoreApplication::translate("MainWindow", "EUR", nullptr));
        Currency_3->setItemText(1, QCoreApplication::translate("MainWindow", "USD", nullptr));
        Currency_3->setItemText(2, QCoreApplication::translate("MainWindow", "BYN", nullptr));
        Currency_3->setItemText(3, QCoreApplication::translate("MainWindow", "RUB", nullptr));
        Currency_3->setItemText(4, QCoreApplication::translate("MainWindow", "KZT", nullptr));

        line3->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
