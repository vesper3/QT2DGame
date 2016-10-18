#include "player.h"

#include <QDebug>

void Player::keyPressEvent(QKeyEvent * event)
{
    if(event->key() == Qt::Key_Left)
    {
        qDebug() << "You pressed a key";
        setPos(x() - 10, y());
    }
    if(event->key() == Qt::Key_Right)
    {
        qDebug() << "You pressed a key";
        setPos(x() + 10, y());
    }
    if(event->key() == Qt::Key_Up)
    {
        qDebug() << "You pressed a key";
        setPos(x(), y() - 10);
    }
    if(event->key() == Qt::Key_Down)
    {
        qDebug() << "You pressed a key";
        setPos(x(), y() + 10);
    }
}
