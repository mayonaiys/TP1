#include <iostream>
#include <QApplication>
#include <QPushButton>
int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    QPushButton button;
    button.setText("Ouais le smic");
    button.setToolTip("Le text");
    button.setFont()
    button.show();
    return app.exec();
}

