#include "about.h"
#include "globals.h"
#include "ui_about.h"

#include <QDesktopServices>
#include <QDate>
#include <QDebug>
#include <QUrl>
#include <QSslSocket>


About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    setWindowTitle("About Packet Sender");
}

About::~About()
{
    delete ui;
}

void About::gotoPacketSenderDotCom()
{
    //Open URL in browser
    QDesktopServices::openUrl(QUrl("https://packetsender.com/"));

}

void About::gotoDanNagleDotCom()
{

    //Open URL in browser
    QDesktopServices::openUrl(QUrl("https://dannagle.com/"));

}


void About::gotoDanNaglePayPal()
{

    //Open URL in browser
    QDesktopServices::openUrl(QUrl("http://dannagle.com/paypal"));

}

void About::gotoNagleCode()
{
    //Open URL in browser
    QDesktopServices::openUrl(QUrl("http://twitter.com/NagleCode"));

}
