#include "chatform.h"

#include <QApplication>
#include <QMetaType>

int main(int argc, char *argv[])
{
    qRegisterMetaType<Record>("Record");
    qRegisterMetaType<Friend>("Friend");
    qRegisterMetaType<User>("User");

#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
#endif
    QApplication a(argc, argv);

    ChatForm w;
    //w.show();

    return a.exec();
}
