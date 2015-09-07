/********************************************************************************
** Form generated from reading ui file 'progressbar.ui'
**
** Created: Sun 4. Jan 12:23:43 2009
**      by: Qt User Interface Compiler version 4.4.4-temple
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PROGRESSBAR_H
#define UI_PROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_progressbarClass
{
public:

    void setupUi(QWidget *progressbarClass)
    {
    if (progressbarClass->objectName().isEmpty())
        progressbarClass->setObjectName(QString::fromUtf8("progressbarClass"));
    progressbarClass->resize(400, 300);

    retranslateUi(progressbarClass);

    QMetaObject::connectSlotsByName(progressbarClass);
    } // setupUi

    void retranslateUi(QWidget *progressbarClass)
    {
    progressbarClass->setWindowTitle(QApplication::translate("progressbarClass", "progressbar", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(progressbarClass);
    } // retranslateUi

};

namespace Ui {
    class progressbarClass: public Ui_progressbarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSBAR_H
