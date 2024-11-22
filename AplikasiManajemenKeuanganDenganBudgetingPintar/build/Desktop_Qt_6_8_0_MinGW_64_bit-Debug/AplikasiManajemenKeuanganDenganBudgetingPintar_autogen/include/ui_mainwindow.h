/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *saldoLabel;
    QListWidget *transaksiListWidget;
    QPushButton *saranBudgetButton;
    QPushButton *rekomendasiMakananButton;
    QDateEdit *tanggalInput;
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *kategoriComboBox;
    QComboBox *subKategoriComboBox;
    QLineEdit *kategoriLineEdit;
    QPushButton *resetKategoriButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *nextButton;
    QWidget *tab_2;
    QLineEdit *jumlahInputPemasukan;
    QPushButton *tambahPengeluaranBtn;
    QLineEdit *jumlahInputPengeluaran;
    QPushButton *tambahPemasukanBtn;
    QPushButton *resetPemasukanAtauPengeluaran;
    QPushButton *backButton;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QMenu *menuAmankan_Bentar;
    QMenu *menu_Aplikasi_Manajemen_Keuangan_dengan_Budgeting_Pintar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(797, 600);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(218, 173, 67, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 224, 150, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(236, 198, 108, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(109, 87, 33, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(145, 115, 45, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(255, 229, 151, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush8(QColor(236, 214, 161, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(0, 0, 0, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(181, 134, 16, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Accent, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(109, 87, 33, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        MainWindow->setPalette(palette);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        MainWindow->setDockNestingEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QPalette palette1;
        QBrush brush13(QColor(255, 237, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        centralwidget->setPalette(palette1);
        saldoLabel = new QLabel(centralwidget);
        saldoLabel->setObjectName("saldoLabel");
        saldoLabel->setGeometry(QRect(455, 110, 151, 16));
        transaksiListWidget = new QListWidget(centralwidget);
        transaksiListWidget->setObjectName("transaksiListWidget");
        transaksiListWidget->setGeometry(QRect(450, 130, 291, 231));
        transaksiListWidget->setStyleSheet(QString::fromUtf8("border: 2px solid #B2842B;\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background-color: white;\n"
"color: black;\n"
""));
        saranBudgetButton = new QPushButton(centralwidget);
        saranBudgetButton->setObjectName("saranBudgetButton");
        saranBudgetButton->setGeometry(QRect(461, 380, 101, 31));
        QPalette palette2;
        QBrush brush14(QColor(255, 197, 85, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        QBrush brush15(QColor(255, 255, 255, 135));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        saranBudgetButton->setPalette(palette2);
        saranBudgetButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        rekomendasiMakananButton = new QPushButton(centralwidget);
        rekomendasiMakananButton->setObjectName("rekomendasiMakananButton");
        rekomendasiMakananButton->setGeometry(QRect(590, 380, 141, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        rekomendasiMakananButton->setPalette(palette3);
        rekomendasiMakananButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        tanggalInput = new QDateEdit(centralwidget);
        tanggalInput->setObjectName("tanggalInput");
        tanggalInput->setGeometry(QRect(70, 240, 121, 31));
        tanggalInput->setCurrentSection(QDateTimeEdit::Section::DaySection);
        tanggalInput->setCurrentSectionIndex(0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(50, 100, 351, 311));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush16(QColor(255, 215, 135, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush16);
        QBrush brush17(QColor(232, 199, 100, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush18(QColor(255, 211, 107, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush18);
        tabWidget->setPalette(palette4);
        tab = new QWidget();
        tab->setObjectName("tab");
        QPalette palette5;
        QBrush brush19(QColor(255, 224, 151, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush19);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        tab->setPalette(palette5);
        kategoriComboBox = new QComboBox(tab);
        kategoriComboBox->addItem(QString());
        kategoriComboBox->setObjectName("kategoriComboBox");
        kategoriComboBox->setGeometry(QRect(70, 40, 211, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush20(QColor(127, 127, 127, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(170, 170, 170, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush22(QColor(127, 127, 127, 127));
        brush22.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        kategoriComboBox->setPalette(palette6);
        kategoriComboBox->setEditable(true);
        subKategoriComboBox = new QComboBox(tab);
        subKategoriComboBox->setObjectName("subKategoriComboBox");
        subKategoriComboBox->setGeometry(QRect(70, 100, 211, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        subKategoriComboBox->setPalette(palette7);
        subKategoriComboBox->setEditable(true);
        kategoriLineEdit = new QLineEdit(tab);
        kategoriLineEdit->setObjectName("kategoriLineEdit");
        kategoriLineEdit->setGeometry(QRect(70, 160, 211, 24));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        kategoriLineEdit->setPalette(palette8);
        resetKategoriButton = new QPushButton(tab);
        resetKategoriButton->setObjectName("resetKategoriButton");
        resetKategoriButton->setGeometry(QRect(190, 210, 75, 24));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush14);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush23);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        resetKategoriButton->setPalette(palette9);
        resetKategoriButton->setStyleSheet(QString::fromUtf8("border: 2px solid #B2842B;\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background-color: #FFC555;\n"
"color: black;\n"
""));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 49, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 80, 71, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 140, 171, 16));
        nextButton = new QPushButton(tab);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(80, 210, 75, 24));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush23);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        nextButton->setPalette(palette10);
        nextButton->setStyleSheet(QString::fromUtf8("border: 2px solid #B2842B;\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background-color: #FFC555;\n"
"color: black;\n"
""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Window, brush19);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        tab_2->setPalette(palette11);
        jumlahInputPemasukan = new QLineEdit(tab_2);
        jumlahInputPemasukan->setObjectName("jumlahInputPemasukan");
        jumlahInputPemasukan->setGeometry(QRect(40, 70, 121, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette12.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        jumlahInputPemasukan->setPalette(palette12);
        tambahPengeluaranBtn = new QPushButton(tab_2);
        tambahPengeluaranBtn->setObjectName("tambahPengeluaranBtn");
        tambahPengeluaranBtn->setGeometry(QRect(190, 120, 121, 31));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        tambahPengeluaranBtn->setPalette(palette13);
        tambahPengeluaranBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        jumlahInputPengeluaran = new QLineEdit(tab_2);
        jumlahInputPengeluaran->setObjectName("jumlahInputPengeluaran");
        jumlahInputPengeluaran->setGeometry(QRect(192, 70, 121, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette14.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        jumlahInputPengeluaran->setPalette(palette14);
        tambahPemasukanBtn = new QPushButton(tab_2);
        tambahPemasukanBtn->setObjectName("tambahPemasukanBtn");
        tambahPemasukanBtn->setGeometry(QRect(40, 120, 121, 31));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        tambahPemasukanBtn->setPalette(palette15);
        tambahPemasukanBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        resetPemasukanAtauPengeluaran = new QPushButton(tab_2);
        resetPemasukanAtauPengeluaran->setObjectName("resetPemasukanAtauPengeluaran");
        resetPemasukanAtauPengeluaran->setGeometry(QRect(210, 190, 75, 24));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        resetPemasukanAtauPengeluaran->setPalette(palette16);
        backButton = new QPushButton(tab_2);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(60, 190, 75, 24));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        backButton->setPalette(palette17);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 50, 61, 16));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 50, 71, 16));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 797, 47));
        menubar->setStyleSheet(QString::fromUtf8("border: 2px solid #B2842B;\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background-color: #FFC555;\n"
"color: black;\n"
""));
        menuAmankan_Bentar = new QMenu(menubar);
        menuAmankan_Bentar->setObjectName("menuAmankan_Bentar");
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush14);
        QBrush brush24(QColor(255, 229, 132, 0));
        brush24.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush24);
        QBrush brush25(QColor(255, 215, 68, 0));
        brush25.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush25);
        QBrush brush26(QColor(127, 100, 2, 0));
        brush26.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush26);
        QBrush brush27(QColor(170, 134, 3, 0));
        brush27.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush27);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush14);
        QBrush brush28(QColor(0, 0, 0, 0));
        brush28.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush28);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush29(QColor(255, 228, 130, 127));
        brush29.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush29);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette18.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush24);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush25);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush26);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush27);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush28);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush29);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush26);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush24);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush25);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush26);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush27);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush26);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush26);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush30(QColor(255, 201, 5, 0));
        brush30.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush30);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        QBrush brush31(QColor(255, 218, 81, 0));
        brush31.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Disabled, QPalette::Accent, brush31);
        menuAmankan_Bentar->setPalette(palette18);
        menu_Aplikasi_Manajemen_Keuangan_dengan_Budgeting_Pintar = new QMenu(menubar);
        menu_Aplikasi_Manajemen_Keuangan_dengan_Budgeting_Pintar->setObjectName("menu_Aplikasi_Manajemen_Keuangan_dengan_Budgeting_Pintar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAmankan_Bentar->menuAction());
        menubar->addAction(menu_Aplikasi_Manajemen_Keuangan_dengan_Budgeting_Pintar->menuAction());
        menu_Aplikasi_Manajemen_Keuangan_dengan_Budgeting_Pintar->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        saldoLabel->setText(QCoreApplication::translate("MainWindow", "Saldo : ", nullptr));
        saranBudgetButton->setText(QCoreApplication::translate("MainWindow", "Saran Budget", nullptr));
        rekomendasiMakananButton->setText(QCoreApplication::translate("MainWindow", "Rekomendasi Makanan", nullptr));
        tanggalInput->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        kategoriComboBox->setItemText(0, QString());

        kategoriComboBox->setCurrentText(QString());
        subKategoriComboBox->setCurrentText(QString());
        resetKategoriButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Kategori", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Subkategori", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Nama pemasukan/pengeluaran", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Pilih Kategori", nullptr));
        jumlahInputPemasukan->setText(QString());
        tambahPengeluaranBtn->setText(QCoreApplication::translate("MainWindow", "Tambah Pengeluaran", nullptr));
        tambahPemasukanBtn->setText(QCoreApplication::translate("MainWindow", "Tambah Pemasukan", nullptr));
        resetPemasukanAtauPengeluaran->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Pemasukan", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Pengeluaran", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Jumlah Pemasukan/Pengeluaran", nullptr));
        menuAmankan_Bentar->setTitle(QCoreApplication::translate("MainWindow", "Amankan Bentar", nullptr));
        menu_Aplikasi_Manajemen_Keuangan_dengan_Budgeting_Pintar->setTitle(QCoreApplication::translate("MainWindow", "( Aplikasi Manajemen Keuangan dengan Budgeting Pintar )", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
