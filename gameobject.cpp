#include "gameobject.h"

GameObject::GameObject(QString fileName) : QObject() , QGraphicsPixmapItem()
{
    setPixmap(QPixmap(fileName));
}
