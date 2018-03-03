#include <QtGui/QGuiApplication>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QScopedPointer<QGuiApplication> app(new QGuiApplication(argc, argv));
    QQuickView *viewer = new QQuickView();
    viewer->setSource(QUrl("qrc:/main.qml"));
    viewer->show();
    return app->exec();
}
