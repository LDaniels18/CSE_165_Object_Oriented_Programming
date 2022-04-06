//#include <QApplication>
//#include <QPushButton>

//int main(int argc, char **argv)
//{
// QApplication app (argc, argv);

// QPushButton button ("Hello world !"); //a word or line of text to be shown
// button.show(); //shows the button

// return app.exec();
//}


#include <QApplication>
#include <QPushButton>
#include <QIcon>
#include <QFont>
#include <QString>
#include <QColor>

int main(int argc, char **argv) //returns an int
{
    QApplication app (argc, argv);

    QPushButton button;
    button.setText("My name is LaFrance and this is my Button.... Hope you like :)!!!!");
    button.setToolTip("A Button with my message");


    QFont font ("Times" , 10, QFont::Bold); //taken from the QT WIKI:https://doc.qt.io/qt-5/qfont.html#
    button.setFont(font);

    QColor color (20,20,20, 255);
    //button.set);

//   QFont font1(const QString & Helvetica, int pointSize = 1, int weight = -1, bool italic = false);//static method
//   button.setFont(font1);

   // QIcon icon ("gear.png");
    //button.setIcon(icon);

    app.setWindowIcon(QIcon("icon.png"));

    //QIcon Qicon::fromTheme ( const QString &name, const QIcon &fallback = QIcon()); //static method for an Icon

    // button.setIcon(QIcon::fromTheme("face-smile"));

    button.show();

    return app.exec(); //end the function
}
