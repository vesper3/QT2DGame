#include "gameobject.h"

GameObject::GameObject()
{
    SetVisibility(false);
    thing.load(":\thing.bmp");
    this->setPixmap(thing);
}

GameObject::GameObject(QPoint pos)
{
    this->setPos(pos);
}

GameObject::GameObject(bool vis)
{
    SetVisibility(vis);
}

GameObject::GameObject(QPoint pos, bool vis)
{
    this->setPos(pos);
    SetVisibility(vis);
}
