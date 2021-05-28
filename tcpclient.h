#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class tcpclient; }
QT_END_NAMESPACE

class tcpclient : public QMainWindow
{
    Q_OBJECT

public:
    tcpclient(QWidget *parent = nullptr);
    ~tcpclient();

private:
    Ui::tcpclient *ui;
};
#endif // TCPCLIENT_H
