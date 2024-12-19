#include <QApplication>
#include "include/mainscene.h"


int main(int argc, char *argv[]) {
    QApplication::addLibraryPath(R"(D:\Qt\6.6.3\mingw_64\plugins)");
    QApplication a(argc, argv);
    MainScene w;
    w.show();
    return a.exec();
}
