#include <QApplication>
#include <QGraphicsScene>
#include "player.h"
#include <QGraphicsView>
#include "gameobject.h"
#include <QGraphicsPixmapItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,1000);

    GameObject * object = new GameObject("thing.png");
    scene->addItem(object);

    //works
    //QPixmap pixmap("thing.png");
    //QGraphicsPixmapItem object(pixmap);
    //scene->addItem(&object);

    Player item;
    //scene->addItem(&item);
    item.setRect(450,450, 100, 100);
    item.setPos(100,-450);

    QGraphicsView *view = new QGraphicsView(scene);
    view->setFixedSize(800,600);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    QPointF point = object->pos();
    view->centerOn(point);

    item.setFlag(QGraphicsItem::ItemIsFocusable);

    item.setFocus();

    //scene->removeItem(object);

    return a.exec();
}
