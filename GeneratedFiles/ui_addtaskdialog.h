/********************************************************************************
** Form generated from reading UI file 'addtaskdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKDIALOG_H
#define UI_ADDTASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddTaskDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *taskLabel;
    QComboBox *taskBox;
    QLabel *fullScoreLabel;
    QLineEdit *fullScore;
    QLabel *timeLimitLabel;
    QLineEdit *timeLimit;
    QLabel *msLabel;
    QLabel *memoryLimitLabel;
    QLineEdit *memoryLimit;
    QLabel *mbLabel;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddTaskDialog)
    {
        if (AddTaskDialog->objectName().isEmpty())
            AddTaskDialog->setObjectName(QStringLiteral("AddTaskDialog"));
        AddTaskDialog->resize(261, 177);
        AddTaskDialog->setMinimumSize(QSize(197, 164));
        gridLayout = new QGridLayout(AddTaskDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(10);
        taskLabel = new QLabel(AddTaskDialog);
        taskLabel->setObjectName(QStringLiteral("taskLabel"));
        taskLabel->setStyleSheet(QStringLiteral("font-size:10pt;font-weight:bold;"));

        gridLayout->addWidget(taskLabel, 0, 0, 1, 1);

        taskBox = new QComboBox(AddTaskDialog);
        taskBox->setObjectName(QStringLiteral("taskBox"));
        taskBox->setStyleSheet(QStringLiteral("font-size:9pt;"));

        gridLayout->addWidget(taskBox, 0, 1, 1, 2);

        fullScoreLabel = new QLabel(AddTaskDialog);
        fullScoreLabel->setObjectName(QStringLiteral("fullScoreLabel"));
        fullScoreLabel->setStyleSheet(QStringLiteral("font-size:10pt;font-weight:bold;"));

        gridLayout->addWidget(fullScoreLabel, 1, 0, 1, 1);

        fullScore = new QLineEdit(AddTaskDialog);
        fullScore->setObjectName(QStringLiteral("fullScore"));
        fullScore->setMaximumSize(QSize(75, 22));
        fullScore->setStyleSheet(QStringLiteral("font-size:9pt;"));

        gridLayout->addWidget(fullScore, 1, 1, 1, 1);

        timeLimitLabel = new QLabel(AddTaskDialog);
        timeLimitLabel->setObjectName(QStringLiteral("timeLimitLabel"));
        timeLimitLabel->setStyleSheet(QStringLiteral("font-size:10pt;font-weight:bold;"));

        gridLayout->addWidget(timeLimitLabel, 2, 0, 1, 1);

        timeLimit = new QLineEdit(AddTaskDialog);
        timeLimit->setObjectName(QStringLiteral("timeLimit"));
        timeLimit->setMaximumSize(QSize(75, 22));
        timeLimit->setStyleSheet(QStringLiteral("font-size:9pt;"));

        gridLayout->addWidget(timeLimit, 2, 1, 1, 1);

        msLabel = new QLabel(AddTaskDialog);
        msLabel->setObjectName(QStringLiteral("msLabel"));
        msLabel->setStyleSheet(QStringLiteral("font-size: 10pt;"));

        gridLayout->addWidget(msLabel, 2, 2, 1, 1);

        memoryLimitLabel = new QLabel(AddTaskDialog);
        memoryLimitLabel->setObjectName(QStringLiteral("memoryLimitLabel"));
        memoryLimitLabel->setStyleSheet(QStringLiteral("font-size:10pt;font-weight:bold;"));

        gridLayout->addWidget(memoryLimitLabel, 3, 0, 1, 1);

        memoryLimit = new QLineEdit(AddTaskDialog);
        memoryLimit->setObjectName(QStringLiteral("memoryLimit"));
        memoryLimit->setMaximumSize(QSize(75, 22));
        memoryLimit->setStyleSheet(QStringLiteral("font-size:9pt;"));

        gridLayout->addWidget(memoryLimit, 3, 1, 1, 1);

        mbLabel = new QLabel(AddTaskDialog);
        mbLabel->setObjectName(QStringLiteral("mbLabel"));
        mbLabel->setStyleSheet(QStringLiteral("font-size: 10pt;"));

        gridLayout->addWidget(mbLabel, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(AddTaskDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral("font-size:9pt;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);


        retranslateUi(AddTaskDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddTaskDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddTaskDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTaskDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTaskDialog)
    {
        AddTaskDialog->setWindowTitle(QApplication::translate("AddTaskDialog", "Add Task", Q_NULLPTR));
        taskLabel->setText(QApplication::translate("AddTaskDialog", "Task", Q_NULLPTR));
        fullScoreLabel->setText(QApplication::translate("AddTaskDialog", "Full Score", Q_NULLPTR));
        timeLimitLabel->setText(QApplication::translate("AddTaskDialog", "Time Limit", Q_NULLPTR));
        msLabel->setText(QApplication::translate("AddTaskDialog", "ms", Q_NULLPTR));
        memoryLimitLabel->setText(QApplication::translate("AddTaskDialog", "Memory Limit", Q_NULLPTR));
        mbLabel->setText(QApplication::translate("AddTaskDialog", "MB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddTaskDialog: public Ui_AddTaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKDIALOG_H
