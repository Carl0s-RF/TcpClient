#include "tcpclient.h"
#include "ui_tcpclient.h"

tcpclient::tcpclient(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tcpclient)
{
    ui->setupUi(this);
}

tcpclient::~tcpclient()
{
    delete ui;
}

