#include "custom-style.h"

#include <QApplication>
#include <QLineEdit>
#include <QWidget>


int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    QWidget* w = new QWidget();

    QLineEdit* line = new QLineEdit(w);
    line->setText("asdadad");

    auto style = new CustomStyle(nullptr, w);
    w->setStyle(style);

    w->show();

    return a.exec();
}
