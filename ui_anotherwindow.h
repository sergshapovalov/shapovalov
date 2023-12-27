/********************************************************************************
** Form generated from reading UI file 'anotherwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERWINDOW_H
#define UI_ANOTHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_anotherwindow
{
public:
    QLineEdit *numbmedcard;
    QLineEdit *diagnoz;
    QLineEdit *recomendation;
    QTextEdit *privet;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *vvelidanye;
    QPushButton *otkrit;
    QPushButton *ochistit;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QSpinBox *lefteye;
    QSpinBox *righteye;
    QLabel *leye;
    QLabel *reye;
    QLineEdit *surname;
    QTextEdit *vvodsurname;
    QTextEdit *vvodeyes;
    QTextEdit *vvoddiagnoz;
    QTextEdit *vvodrec;
    QTextEdit *vvodmedcard;

    void setupUi(QWidget *anotherwindow)
    {
        if (anotherwindow->objectName().isEmpty())
            anotherwindow->setObjectName(QStringLiteral("anotherwindow"));
        anotherwindow->setEnabled(true);
        anotherwindow->resize(643, 412);
        anotherwindow->setMinimumSize(QSize(643, 404));
        anotherwindow->setMaximumSize(QSize(643, 412));
        anotherwindow->setStyleSheet(QStringLiteral("background-color:rgb(0, 170, 255)"));
        numbmedcard = new QLineEdit(anotherwindow);
        numbmedcard->setObjectName(QStringLiteral("numbmedcard"));
        numbmedcard->setGeometry(QRect(160, 140, 171, 22));
        numbmedcard->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        diagnoz = new QLineEdit(anotherwindow);
        diagnoz->setObjectName(QStringLiteral("diagnoz"));
        diagnoz->setGeometry(QRect(160, 220, 271, 51));
        diagnoz->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        recomendation = new QLineEdit(anotherwindow);
        recomendation->setObjectName(QStringLiteral("recomendation"));
        recomendation->setGeometry(QRect(160, 280, 137, 22));
        recomendation->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        privet = new QTextEdit(anotherwindow);
        privet->setObjectName(QStringLiteral("privet"));
        privet->setEnabled(true);
        privet->setGeometry(QRect(30, 10, 531, 51));
        privet->setAutoFillBackground(false);
        privet->setStyleSheet(QLatin1String("background-color:rgb(255, 255, 255)\n"
""));
        layoutWidget = new QWidget(anotherwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 310, 531, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        vvelidanye = new QPushButton(layoutWidget);
        vvelidanye->setObjectName(QStringLiteral("vvelidanye"));
        vvelidanye->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(vvelidanye);

        otkrit = new QPushButton(layoutWidget);
        otkrit->setObjectName(QStringLiteral("otkrit"));
        otkrit->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(otkrit);

        ochistit = new QPushButton(layoutWidget);
        ochistit->setObjectName(QStringLiteral("ochistit"));
        ochistit->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(ochistit);

        layoutWidget1 = new QWidget(anotherwindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(160, 170, 131, 51));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lefteye = new QSpinBox(layoutWidget1);
        lefteye->setObjectName(QStringLiteral("lefteye"));
        lefteye->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lefteye);

        righteye = new QSpinBox(layoutWidget1);
        righteye->setObjectName(QStringLiteral("righteye"));
        righteye->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        formLayout->setWidget(1, QFormLayout::FieldRole, righteye);

        leye = new QLabel(layoutWidget1);
        leye->setObjectName(QStringLiteral("leye"));
        leye->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        formLayout->setWidget(0, QFormLayout::LabelRole, leye);

        reye = new QLabel(layoutWidget1);
        reye->setObjectName(QStringLiteral("reye"));
        reye->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        formLayout->setWidget(1, QFormLayout::LabelRole, reye);

        surname = new QLineEdit(anotherwindow);
        surname->setObjectName(QStringLiteral("surname"));
        surname->setGeometry(QRect(160, 100, 171, 22));
        surname->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        vvodsurname = new QTextEdit(anotherwindow);
        vvodsurname->setObjectName(QStringLiteral("vvodsurname"));
        vvodsurname->setEnabled(true);
        vvodsurname->setGeometry(QRect(10, 90, 141, 31));
        vvodeyes = new QTextEdit(anotherwindow);
        vvodeyes->setObjectName(QStringLiteral("vvodeyes"));
        vvodeyes->setEnabled(true);
        vvodeyes->setGeometry(QRect(10, 170, 141, 51));
        vvoddiagnoz = new QTextEdit(anotherwindow);
        vvoddiagnoz->setObjectName(QStringLiteral("vvoddiagnoz"));
        vvoddiagnoz->setEnabled(true);
        vvoddiagnoz->setGeometry(QRect(10, 220, 141, 41));
        vvodrec = new QTextEdit(anotherwindow);
        vvodrec->setObjectName(QStringLiteral("vvodrec"));
        vvodrec->setEnabled(true);
        vvodrec->setGeometry(QRect(10, 260, 141, 51));
        vvodmedcard = new QTextEdit(anotherwindow);
        vvodmedcard->setObjectName(QStringLiteral("vvodmedcard"));
        vvodmedcard->setGeometry(QRect(10, 120, 141, 51));
        layoutWidget->raise();
        layoutWidget->raise();
        numbmedcard->raise();
        diagnoz->raise();
        recomendation->raise();
        surname->raise();
        privet->raise();
        vvodsurname->raise();
        vvodeyes->raise();
        vvoddiagnoz->raise();
        vvodrec->raise();
        vvodmedcard->raise();

        retranslateUi(anotherwindow);

        QMetaObject::connectSlotsByName(anotherwindow);
    } // setupUi

    void retranslateUi(QWidget *anotherwindow)
    {
        anotherwindow->setWindowTitle(QApplication::translate("anotherwindow", "\320\227\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\276\321\204\321\202\320\260\320\273\321\214\320\274\320\276\320\273\320\276\320\263\320\260", Q_NULLPTR));
        numbmedcard->setText(QString());
        diagnoz->setText(QString());
        recomendation->setText(QString());
        privet->setHtml(QApplication::translate("anotherwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\320\227\320\220\320\232\320\233\320\256\320\247\320\225\320\235\320\230\320\225 \320\236\320\244\320\242\320\220\320\233\320\254\320\234\320\236\320\233\320\236\320\223\320\220</span></p></body></html>", Q_NULLPTR));
        vvelidanye->setText(QApplication::translate("anotherwindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        otkrit->setText(QApplication::translate("anotherwindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        ochistit->setText(QApplication::translate("anotherwindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
        leye->setText(QApplication::translate("anotherwindow", "\320\233\320\265\320\262\321\213\320\271 \320\263\320\273\320\260\320\267:", Q_NULLPTR));
        reye->setText(QApplication::translate("anotherwindow", "\320\237\321\200\320\260\320\262\321\213\320\271 \320\263\320\273\320\260\320\267:", Q_NULLPTR));
        surname->setText(QString());
        vvodsurname->setHtml(QApplication::translate("anotherwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216:</p></body></html>", Q_NULLPTR));
        vvodeyes->setHtml(QApplication::translate("anotherwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\320\270 \320\275\320\260 \320\263\320\273\320\260\320\267\320\260\321\205:</span></p></body></html>", Q_NULLPTR));
        vvoddiagnoz->setHtml(QApplication::translate("anotherwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\270\320\260\320\263\320\275\320\276\320\267:</p></body></html>", Q_NULLPTR));
        vvodrec->setHtml(QApplication::translate("anotherwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270:</p></body></html>", Q_NULLPTR));
        vvodmedcard->setHtml(QApplication::translate("anotherwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\274\320\265\320\264.\320\272\320\260\321\200\321\202\321\213:</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class anotherwindow: public Ui_anotherwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERWINDOW_H
