/********************************************************************************
** Form generated from reading UI file 'frmnettool.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMNETTOOL_H
#define UI_FRMNETTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmNetTool
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabTcpServer;
    QGridLayout *gridLayout_2;
    QHBoxLayout *layTcpServer;
    QComboBox *cboxSendTcpServer;
    QPushButton *btnSendTcpServer;
    QPushButton *btnSendUpdate;
    QProgressBar *pbarSendData;
    QLineEdit *txtSendFile;
    QPushButton *btnSelect;
    QFrame *frmTcpServer;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *ckHexReceiveTcpServer;
    QCheckBox *ckHexSendTcpServer;
    QCheckBox *ckDebugTcpServer;
    QCheckBox *ckAutoSendTcpServer;
    QComboBox *cboxIntervalTcpServer;
    QLabel *labTcpListenPort;
    QLineEdit *txtTcpListenPort;
    QPushButton *btnTcpListen;
    QPushButton *btnClearTcpServer;
    QLabel *labTcpClientCount;
    QListWidget *listTcpClient;
    QCheckBox *ckAllTcpServer;
    QTextEdit *txtDataTcpServer;
    QTextEdit *txtDataLog;
    QTableView *tableViewNode;
    QWidget *tabTcpClient;
    QGridLayout *gridLayout;
    QTextEdit *txtDataTcpClient;
    QHBoxLayout *layTcpClient;
    QComboBox *cboxSendTcpClient;
    QPushButton *btnSendTcpClient;
    QFrame *frmTcpClient;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *ckHexReceiveTcpClient;
    QCheckBox *ckHexSendTcpClient;
    QCheckBox *ckDebugTcpClient;
    QCheckBox *ckAutoSendTcpClient;
    QComboBox *cboxIntervalTcpClient;
    QLabel *labTcpServerIP;
    QLineEdit *txtTcpServerIP;
    QLabel *labTcpServerPort;
    QLineEdit *txtTcpServerPort;
    QPushButton *btnTcpConnect;
    QPushButton *btnClearTcpClient;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabUdpServer;
    QGridLayout *gridLayout_3;
    QTextEdit *txtDataUdpServer;
    QFrame *frmUdpServer;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *ckHexReceiveUdpServer;
    QCheckBox *ckHexSendUdpServer;
    QCheckBox *ckDebugUdpServer;
    QCheckBox *ckAutoSendUdpServer;
    QComboBox *cboxIntervalUdpServer;
    QLabel *labUdpClientIP;
    QLineEdit *txtUdpClientIP;
    QLabel *labUdpClientPort;
    QLineEdit *txtUdpClientPort;
    QLabel *labUdpListenPort;
    QLineEdit *txtUdpListenPort;
    QPushButton *btnUdpListen;
    QPushButton *btnClearUdpServer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *layUdpServer;
    QComboBox *cboxSendUdpServer;
    QPushButton *btnSendUdpServer;

    void setupUi(QWidget *frmNetTool)
    {
        if (frmNetTool->objectName().isEmpty())
            frmNetTool->setObjectName(QStringLiteral("frmNetTool"));
        frmNetTool->resize(978, 722);
        verticalLayout = new QVBoxLayout(frmNetTool);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(frmNetTool);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabTcpServer = new QWidget();
        tabTcpServer->setObjectName(QStringLiteral("tabTcpServer"));
        gridLayout_2 = new QGridLayout(tabTcpServer);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        layTcpServer = new QHBoxLayout();
        layTcpServer->setObjectName(QStringLiteral("layTcpServer"));
        cboxSendTcpServer = new QComboBox(tabTcpServer);
        cboxSendTcpServer->setObjectName(QStringLiteral("cboxSendTcpServer"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboxSendTcpServer->sizePolicy().hasHeightForWidth());
        cboxSendTcpServer->setSizePolicy(sizePolicy);
        cboxSendTcpServer->setEditable(true);

        layTcpServer->addWidget(cboxSendTcpServer);

        btnSendTcpServer = new QPushButton(tabTcpServer);
        btnSendTcpServer->setObjectName(QStringLiteral("btnSendTcpServer"));
        btnSendTcpServer->setMinimumSize(QSize(80, 0));

        layTcpServer->addWidget(btnSendTcpServer);


        gridLayout_2->addLayout(layTcpServer, 6, 0, 1, 1);

        btnSendUpdate = new QPushButton(tabTcpServer);
        btnSendUpdate->setObjectName(QStringLiteral("btnSendUpdate"));
        btnSendUpdate->setMinimumSize(QSize(80, 0));

        gridLayout_2->addWidget(btnSendUpdate, 6, 1, 1, 1);

        pbarSendData = new QProgressBar(tabTcpServer);
        pbarSendData->setObjectName(QStringLiteral("pbarSendData"));
        pbarSendData->setMaximumSize(QSize(16777215, 18));
        pbarSendData->setValue(0);

        gridLayout_2->addWidget(pbarSendData, 4, 0, 1, 2);

        txtSendFile = new QLineEdit(tabTcpServer);
        txtSendFile->setObjectName(QStringLiteral("txtSendFile"));
        txtSendFile->setReadOnly(false);

        gridLayout_2->addWidget(txtSendFile, 5, 0, 1, 1);

        btnSelect = new QPushButton(tabTcpServer);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        btnSelect->setMinimumSize(QSize(80, 0));

        gridLayout_2->addWidget(btnSelect, 5, 1, 1, 1);

        frmTcpServer = new QFrame(tabTcpServer);
        frmTcpServer->setObjectName(QStringLiteral("frmTcpServer"));
        frmTcpServer->setMinimumSize(QSize(170, 0));
        frmTcpServer->setMaximumSize(QSize(170, 16777215));
        frmTcpServer->setFrameShape(QFrame::Box);
        frmTcpServer->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frmTcpServer);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        ckHexReceiveTcpServer = new QCheckBox(frmTcpServer);
        ckHexReceiveTcpServer->setObjectName(QStringLiteral("ckHexReceiveTcpServer"));

        verticalLayout_3->addWidget(ckHexReceiveTcpServer);

        ckHexSendTcpServer = new QCheckBox(frmTcpServer);
        ckHexSendTcpServer->setObjectName(QStringLiteral("ckHexSendTcpServer"));

        verticalLayout_3->addWidget(ckHexSendTcpServer);

        ckDebugTcpServer = new QCheckBox(frmTcpServer);
        ckDebugTcpServer->setObjectName(QStringLiteral("ckDebugTcpServer"));

        verticalLayout_3->addWidget(ckDebugTcpServer);

        ckAutoSendTcpServer = new QCheckBox(frmTcpServer);
        ckAutoSendTcpServer->setObjectName(QStringLiteral("ckAutoSendTcpServer"));

        verticalLayout_3->addWidget(ckAutoSendTcpServer);

        cboxIntervalTcpServer = new QComboBox(frmTcpServer);
        cboxIntervalTcpServer->setObjectName(QStringLiteral("cboxIntervalTcpServer"));

        verticalLayout_3->addWidget(cboxIntervalTcpServer);

        labTcpListenPort = new QLabel(frmTcpServer);
        labTcpListenPort->setObjectName(QStringLiteral("labTcpListenPort"));

        verticalLayout_3->addWidget(labTcpListenPort);

        txtTcpListenPort = new QLineEdit(frmTcpServer);
        txtTcpListenPort->setObjectName(QStringLiteral("txtTcpListenPort"));

        verticalLayout_3->addWidget(txtTcpListenPort);

        btnTcpListen = new QPushButton(frmTcpServer);
        btnTcpListen->setObjectName(QStringLiteral("btnTcpListen"));

        verticalLayout_3->addWidget(btnTcpListen);

        btnClearTcpServer = new QPushButton(frmTcpServer);
        btnClearTcpServer->setObjectName(QStringLiteral("btnClearTcpServer"));

        verticalLayout_3->addWidget(btnClearTcpServer);

        labTcpClientCount = new QLabel(frmTcpServer);
        labTcpClientCount->setObjectName(QStringLiteral("labTcpClientCount"));

        verticalLayout_3->addWidget(labTcpClientCount);

        listTcpClient = new QListWidget(frmTcpServer);
        listTcpClient->setObjectName(QStringLiteral("listTcpClient"));

        verticalLayout_3->addWidget(listTcpClient);

        ckAllTcpServer = new QCheckBox(frmTcpServer);
        ckAllTcpServer->setObjectName(QStringLiteral("ckAllTcpServer"));

        verticalLayout_3->addWidget(ckAllTcpServer);


        gridLayout_2->addWidget(frmTcpServer, 0, 2, 7, 1);

        txtDataTcpServer = new QTextEdit(tabTcpServer);
        txtDataTcpServer->setObjectName(QStringLiteral("txtDataTcpServer"));

        gridLayout_2->addWidget(txtDataTcpServer, 0, 0, 1, 2);

        txtDataLog = new QTextEdit(tabTcpServer);
        txtDataLog->setObjectName(QStringLiteral("txtDataLog"));

        gridLayout_2->addWidget(txtDataLog, 2, 0, 1, 2);

        tableViewNode = new QTableView(tabTcpServer);
        tableViewNode->setObjectName(QStringLiteral("tableViewNode"));

        gridLayout_2->addWidget(tableViewNode, 3, 0, 1, 2);

        tabWidget->addTab(tabTcpServer, QString());
        tabTcpClient = new QWidget();
        tabTcpClient->setObjectName(QStringLiteral("tabTcpClient"));
        gridLayout = new QGridLayout(tabTcpClient);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtDataTcpClient = new QTextEdit(tabTcpClient);
        txtDataTcpClient->setObjectName(QStringLiteral("txtDataTcpClient"));

        gridLayout->addWidget(txtDataTcpClient, 0, 0, 1, 1);

        layTcpClient = new QHBoxLayout();
        layTcpClient->setObjectName(QStringLiteral("layTcpClient"));
        cboxSendTcpClient = new QComboBox(tabTcpClient);
        cboxSendTcpClient->setObjectName(QStringLiteral("cboxSendTcpClient"));
        sizePolicy.setHeightForWidth(cboxSendTcpClient->sizePolicy().hasHeightForWidth());
        cboxSendTcpClient->setSizePolicy(sizePolicy);
        cboxSendTcpClient->setEditable(true);

        layTcpClient->addWidget(cboxSendTcpClient);

        btnSendTcpClient = new QPushButton(tabTcpClient);
        btnSendTcpClient->setObjectName(QStringLiteral("btnSendTcpClient"));
        btnSendTcpClient->setMinimumSize(QSize(80, 0));

        layTcpClient->addWidget(btnSendTcpClient);


        gridLayout->addLayout(layTcpClient, 1, 0, 1, 1);

        frmTcpClient = new QFrame(tabTcpClient);
        frmTcpClient->setObjectName(QStringLiteral("frmTcpClient"));
        frmTcpClient->setMinimumSize(QSize(170, 0));
        frmTcpClient->setMaximumSize(QSize(170, 16777215));
        frmTcpClient->setFrameShape(QFrame::Box);
        frmTcpClient->setFrameShadow(QFrame::Sunken);
        verticalLayout_5 = new QVBoxLayout(frmTcpClient);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        ckHexReceiveTcpClient = new QCheckBox(frmTcpClient);
        ckHexReceiveTcpClient->setObjectName(QStringLiteral("ckHexReceiveTcpClient"));

        verticalLayout_5->addWidget(ckHexReceiveTcpClient);

        ckHexSendTcpClient = new QCheckBox(frmTcpClient);
        ckHexSendTcpClient->setObjectName(QStringLiteral("ckHexSendTcpClient"));

        verticalLayout_5->addWidget(ckHexSendTcpClient);

        ckDebugTcpClient = new QCheckBox(frmTcpClient);
        ckDebugTcpClient->setObjectName(QStringLiteral("ckDebugTcpClient"));

        verticalLayout_5->addWidget(ckDebugTcpClient);

        ckAutoSendTcpClient = new QCheckBox(frmTcpClient);
        ckAutoSendTcpClient->setObjectName(QStringLiteral("ckAutoSendTcpClient"));

        verticalLayout_5->addWidget(ckAutoSendTcpClient);

        cboxIntervalTcpClient = new QComboBox(frmTcpClient);
        cboxIntervalTcpClient->setObjectName(QStringLiteral("cboxIntervalTcpClient"));

        verticalLayout_5->addWidget(cboxIntervalTcpClient);

        labTcpServerIP = new QLabel(frmTcpClient);
        labTcpServerIP->setObjectName(QStringLiteral("labTcpServerIP"));

        verticalLayout_5->addWidget(labTcpServerIP);

        txtTcpServerIP = new QLineEdit(frmTcpClient);
        txtTcpServerIP->setObjectName(QStringLiteral("txtTcpServerIP"));

        verticalLayout_5->addWidget(txtTcpServerIP);

        labTcpServerPort = new QLabel(frmTcpClient);
        labTcpServerPort->setObjectName(QStringLiteral("labTcpServerPort"));

        verticalLayout_5->addWidget(labTcpServerPort);

        txtTcpServerPort = new QLineEdit(frmTcpClient);
        txtTcpServerPort->setObjectName(QStringLiteral("txtTcpServerPort"));

        verticalLayout_5->addWidget(txtTcpServerPort);

        btnTcpConnect = new QPushButton(frmTcpClient);
        btnTcpConnect->setObjectName(QStringLiteral("btnTcpConnect"));

        verticalLayout_5->addWidget(btnTcpConnect);

        btnClearTcpClient = new QPushButton(frmTcpClient);
        btnClearTcpClient->setObjectName(QStringLiteral("btnClearTcpClient"));

        verticalLayout_5->addWidget(btnClearTcpClient);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        gridLayout->addWidget(frmTcpClient, 0, 1, 2, 1);

        tabWidget->addTab(tabTcpClient, QString());
        tabUdpServer = new QWidget();
        tabUdpServer->setObjectName(QStringLiteral("tabUdpServer"));
        gridLayout_3 = new QGridLayout(tabUdpServer);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        txtDataUdpServer = new QTextEdit(tabUdpServer);
        txtDataUdpServer->setObjectName(QStringLiteral("txtDataUdpServer"));

        gridLayout_3->addWidget(txtDataUdpServer, 0, 0, 1, 1);

        frmUdpServer = new QFrame(tabUdpServer);
        frmUdpServer->setObjectName(QStringLiteral("frmUdpServer"));
        frmUdpServer->setMinimumSize(QSize(170, 0));
        frmUdpServer->setMaximumSize(QSize(170, 16777215));
        frmUdpServer->setFrameShape(QFrame::Box);
        frmUdpServer->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frmUdpServer);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ckHexReceiveUdpServer = new QCheckBox(frmUdpServer);
        ckHexReceiveUdpServer->setObjectName(QStringLiteral("ckHexReceiveUdpServer"));

        verticalLayout_2->addWidget(ckHexReceiveUdpServer);

        ckHexSendUdpServer = new QCheckBox(frmUdpServer);
        ckHexSendUdpServer->setObjectName(QStringLiteral("ckHexSendUdpServer"));

        verticalLayout_2->addWidget(ckHexSendUdpServer);

        ckDebugUdpServer = new QCheckBox(frmUdpServer);
        ckDebugUdpServer->setObjectName(QStringLiteral("ckDebugUdpServer"));

        verticalLayout_2->addWidget(ckDebugUdpServer);

        ckAutoSendUdpServer = new QCheckBox(frmUdpServer);
        ckAutoSendUdpServer->setObjectName(QStringLiteral("ckAutoSendUdpServer"));

        verticalLayout_2->addWidget(ckAutoSendUdpServer);

        cboxIntervalUdpServer = new QComboBox(frmUdpServer);
        cboxIntervalUdpServer->setObjectName(QStringLiteral("cboxIntervalUdpServer"));

        verticalLayout_2->addWidget(cboxIntervalUdpServer);

        labUdpClientIP = new QLabel(frmUdpServer);
        labUdpClientIP->setObjectName(QStringLiteral("labUdpClientIP"));

        verticalLayout_2->addWidget(labUdpClientIP);

        txtUdpClientIP = new QLineEdit(frmUdpServer);
        txtUdpClientIP->setObjectName(QStringLiteral("txtUdpClientIP"));

        verticalLayout_2->addWidget(txtUdpClientIP);

        labUdpClientPort = new QLabel(frmUdpServer);
        labUdpClientPort->setObjectName(QStringLiteral("labUdpClientPort"));

        verticalLayout_2->addWidget(labUdpClientPort);

        txtUdpClientPort = new QLineEdit(frmUdpServer);
        txtUdpClientPort->setObjectName(QStringLiteral("txtUdpClientPort"));

        verticalLayout_2->addWidget(txtUdpClientPort);

        labUdpListenPort = new QLabel(frmUdpServer);
        labUdpListenPort->setObjectName(QStringLiteral("labUdpListenPort"));

        verticalLayout_2->addWidget(labUdpListenPort);

        txtUdpListenPort = new QLineEdit(frmUdpServer);
        txtUdpListenPort->setObjectName(QStringLiteral("txtUdpListenPort"));

        verticalLayout_2->addWidget(txtUdpListenPort);

        btnUdpListen = new QPushButton(frmUdpServer);
        btnUdpListen->setObjectName(QStringLiteral("btnUdpListen"));

        verticalLayout_2->addWidget(btnUdpListen);

        btnClearUdpServer = new QPushButton(frmUdpServer);
        btnClearUdpServer->setObjectName(QStringLiteral("btnClearUdpServer"));

        verticalLayout_2->addWidget(btnClearUdpServer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_3->addWidget(frmUdpServer, 0, 1, 2, 1);

        layUdpServer = new QHBoxLayout();
        layUdpServer->setObjectName(QStringLiteral("layUdpServer"));
        cboxSendUdpServer = new QComboBox(tabUdpServer);
        cboxSendUdpServer->setObjectName(QStringLiteral("cboxSendUdpServer"));
        sizePolicy.setHeightForWidth(cboxSendUdpServer->sizePolicy().hasHeightForWidth());
        cboxSendUdpServer->setSizePolicy(sizePolicy);
        cboxSendUdpServer->setEditable(true);

        layUdpServer->addWidget(cboxSendUdpServer);

        btnSendUdpServer = new QPushButton(tabUdpServer);
        btnSendUdpServer->setObjectName(QStringLiteral("btnSendUdpServer"));
        btnSendUdpServer->setMinimumSize(QSize(80, 0));

        layUdpServer->addWidget(btnSendUdpServer);


        gridLayout_3->addLayout(layUdpServer, 1, 0, 1, 1);

        tabWidget->addTab(tabUdpServer, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(frmNetTool);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(frmNetTool);
    } // setupUi

    void retranslateUi(QWidget *frmNetTool)
    {
        frmNetTool->setWindowTitle(QApplication::translate("frmNetTool", "Form", 0));
        btnSendTcpServer->setText(QApplication::translate("frmNetTool", "\345\217\221\351\200\201", 0));
        btnSendUpdate->setText(QApplication::translate("frmNetTool", "\345\215\207\347\272\247", 0));
        btnSelect->setText(QApplication::translate("frmNetTool", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        ckHexReceiveTcpServer->setText(QApplication::translate("frmNetTool", "16\350\277\233\345\210\266\346\216\245\346\224\266", 0));
        ckHexSendTcpServer->setText(QApplication::translate("frmNetTool", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        ckDebugTcpServer->setText(QApplication::translate("frmNetTool", "\346\250\241\346\213\237\350\256\276\345\244\207", 0));
        ckAutoSendTcpServer->setText(QApplication::translate("frmNetTool", "\345\256\232\346\227\266\345\217\221\351\200\201", 0));
        labTcpListenPort->setText(QApplication::translate("frmNetTool", "\347\233\221\345\220\254\347\253\257\345\217\243", 0));
        btnTcpListen->setText(QApplication::translate("frmNetTool", "\347\233\221\345\220\254", 0));
        btnClearTcpServer->setText(QApplication::translate("frmNetTool", "\346\270\205\347\251\272", 0));
        labTcpClientCount->setText(QApplication::translate("frmNetTool", "\345\267\262\350\277\236\346\216\245\347\275\221\345\205\263\346\225\260\345\205\261 0 \344\270\252", 0));
        ckAllTcpServer->setText(QApplication::translate("frmNetTool", "\345\257\271\345\205\250\351\203\250\345\256\242\346\210\267\347\253\257\345\217\221\351\200\201", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabTcpServer), QApplication::translate("frmNetTool", "TCP\346\234\215\345\212\241\345\231\250", 0));
        btnSendTcpClient->setText(QApplication::translate("frmNetTool", "\345\217\221\351\200\201", 0));
        ckHexReceiveTcpClient->setText(QApplication::translate("frmNetTool", "16\350\277\233\345\210\266\346\216\245\346\224\266", 0));
        ckHexSendTcpClient->setText(QApplication::translate("frmNetTool", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        ckDebugTcpClient->setText(QApplication::translate("frmNetTool", "\346\250\241\346\213\237\350\256\276\345\244\207", 0));
        ckAutoSendTcpClient->setText(QApplication::translate("frmNetTool", "\345\256\232\346\227\266\345\217\221\351\200\201", 0));
        labTcpServerIP->setText(QApplication::translate("frmNetTool", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200", 0));
        labTcpServerPort->setText(QApplication::translate("frmNetTool", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", 0));
        btnTcpConnect->setText(QApplication::translate("frmNetTool", "\350\277\236\346\216\245", 0));
        btnClearTcpClient->setText(QApplication::translate("frmNetTool", "\346\270\205\347\251\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabTcpClient), QApplication::translate("frmNetTool", "TCP\345\256\242\346\210\267\347\253\257", 0));
        ckHexReceiveUdpServer->setText(QApplication::translate("frmNetTool", "16\350\277\233\345\210\266\346\216\245\346\224\266", 0));
        ckHexSendUdpServer->setText(QApplication::translate("frmNetTool", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        ckDebugUdpServer->setText(QApplication::translate("frmNetTool", "\346\250\241\346\213\237\350\256\276\345\244\207", 0));
        ckAutoSendUdpServer->setText(QApplication::translate("frmNetTool", "\345\256\232\346\227\266\345\217\221\351\200\201", 0));
        labUdpClientIP->setText(QApplication::translate("frmNetTool", "\350\277\234\347\250\213IP\345\234\260\345\235\200", 0));
        labUdpClientPort->setText(QApplication::translate("frmNetTool", "\350\277\234\347\250\213\347\253\257\345\217\243", 0));
        labUdpListenPort->setText(QApplication::translate("frmNetTool", "\347\233\221\345\220\254\347\253\257\345\217\243", 0));
        btnUdpListen->setText(QApplication::translate("frmNetTool", "\347\233\221\345\220\254", 0));
        btnClearUdpServer->setText(QApplication::translate("frmNetTool", "\346\270\205\347\251\272", 0));
        btnSendUdpServer->setText(QApplication::translate("frmNetTool", "\345\217\221\351\200\201", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabUdpServer), QApplication::translate("frmNetTool", "UDP\346\234\215\345\212\241\345\231\250", 0));
    } // retranslateUi

};

namespace Ui {
    class frmNetTool: public Ui_frmNetTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNETTOOL_H
