/********************************************************************************
** Form generated from reading UI file 'DebugWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWINDOW_H
#define UI_DEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Calamares {

class Ui_DebugWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *globalStorageTab;
    QVBoxLayout *verticalLayout_2;
    QTreeView *globalStorageView;
    QWidget *jobQueueTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *jobQueueText;
    QWidget *modulesTab;
    QHBoxLayout *horizontalLayout;
    QListView *modulesListView;
    QVBoxLayout *modulesVerticalLayout;
    QFormLayout *formLayout;
    QLabel *typeLabel;
    QLabel *moduleTypeLabel;
    QLabel *interfaceLabel;
    QLabel *moduleInterfaceLabel;
    QTreeView *moduleConfigView;
    QWidget *toolsTab;
    QVBoxLayout *verticalLayout_4;
    QPushButton *crashButton;
    QPushButton *reloadStylesheetButton;
    QPushButton *widgetTreeButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Calamares__DebugWindow)
    {
        if (Calamares__DebugWindow->objectName().isEmpty())
            Calamares__DebugWindow->setObjectName(QString::fromUtf8("Calamares__DebugWindow"));
        Calamares__DebugWindow->resize(962, 651);
        verticalLayout = new QVBoxLayout(Calamares__DebugWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Calamares__DebugWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        globalStorageTab = new QWidget();
        globalStorageTab->setObjectName(QString::fromUtf8("globalStorageTab"));
        verticalLayout_2 = new QVBoxLayout(globalStorageTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        globalStorageView = new QTreeView(globalStorageTab);
        globalStorageView->setObjectName(QString::fromUtf8("globalStorageView"));

        verticalLayout_2->addWidget(globalStorageView);

        tabWidget->addTab(globalStorageTab, QString());
        jobQueueTab = new QWidget();
        jobQueueTab->setObjectName(QString::fromUtf8("jobQueueTab"));
        verticalLayout_3 = new QVBoxLayout(jobQueueTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        jobQueueText = new QTextEdit(jobQueueTab);
        jobQueueText->setObjectName(QString::fromUtf8("jobQueueText"));

        verticalLayout_3->addWidget(jobQueueText);

        tabWidget->addTab(jobQueueTab, QString());
        modulesTab = new QWidget();
        modulesTab->setObjectName(QString::fromUtf8("modulesTab"));
        horizontalLayout = new QHBoxLayout(modulesTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modulesListView = new QListView(modulesTab);
        modulesListView->setObjectName(QString::fromUtf8("modulesListView"));

        horizontalLayout->addWidget(modulesListView);

        modulesVerticalLayout = new QVBoxLayout();
        modulesVerticalLayout->setObjectName(QString::fromUtf8("modulesVerticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        typeLabel = new QLabel(modulesTab);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, typeLabel);

        moduleTypeLabel = new QLabel(modulesTab);
        moduleTypeLabel->setObjectName(QString::fromUtf8("moduleTypeLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, moduleTypeLabel);

        interfaceLabel = new QLabel(modulesTab);
        interfaceLabel->setObjectName(QString::fromUtf8("interfaceLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, interfaceLabel);

        moduleInterfaceLabel = new QLabel(modulesTab);
        moduleInterfaceLabel->setObjectName(QString::fromUtf8("moduleInterfaceLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, moduleInterfaceLabel);


        modulesVerticalLayout->addLayout(formLayout);

        moduleConfigView = new QTreeView(modulesTab);
        moduleConfigView->setObjectName(QString::fromUtf8("moduleConfigView"));

        modulesVerticalLayout->addWidget(moduleConfigView);


        horizontalLayout->addLayout(modulesVerticalLayout);

        tabWidget->addTab(modulesTab, QString());
        toolsTab = new QWidget();
        toolsTab->setObjectName(QString::fromUtf8("toolsTab"));
        verticalLayout_4 = new QVBoxLayout(toolsTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        crashButton = new QPushButton(toolsTab);
        crashButton->setObjectName(QString::fromUtf8("crashButton"));
        crashButton->setText(QString::fromUtf8("Crash now"));

        verticalLayout_4->addWidget(crashButton);

        reloadStylesheetButton = new QPushButton(toolsTab);
        reloadStylesheetButton->setObjectName(QString::fromUtf8("reloadStylesheetButton"));

        verticalLayout_4->addWidget(reloadStylesheetButton);

        widgetTreeButton = new QPushButton(toolsTab);
        widgetTreeButton->setObjectName(QString::fromUtf8("widgetTreeButton"));

        verticalLayout_4->addWidget(widgetTreeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(toolsTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Calamares__DebugWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Calamares__DebugWindow);
    } // setupUi

    void retranslateUi(QWidget *Calamares__DebugWindow)
    {
        Calamares__DebugWindow->setWindowTitle(QCoreApplication::translate("Calamares::DebugWindow", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(globalStorageTab), QCoreApplication::translate("Calamares::DebugWindow", "GlobalStorage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(jobQueueTab), QCoreApplication::translate("Calamares::DebugWindow", "JobQueue", nullptr));
        typeLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "Type:", nullptr));
        moduleTypeLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "none", nullptr));
        interfaceLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "Interface:", nullptr));
        moduleInterfaceLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "none", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(modulesTab), QCoreApplication::translate("Calamares::DebugWindow", "Modules", nullptr));
        reloadStylesheetButton->setText(QCoreApplication::translate("Calamares::DebugWindow", "Reload Stylesheet", nullptr));
        widgetTreeButton->setText(QCoreApplication::translate("Calamares::DebugWindow", "Widget Tree", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(toolsTab), QCoreApplication::translate("Calamares::DebugWindow", "Tools", nullptr));
    } // retranslateUi

};

} // namespace Calamares

namespace Calamares {
namespace Ui {
    class DebugWindow: public Ui_DebugWindow {};
} // namespace Ui
} // namespace Calamares

#endif // UI_DEBUGWINDOW_H
