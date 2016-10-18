#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class GameObject : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    GameObject(QString fileName);

private:
    bool visible;
};

#endif // GAMEOBJECT_H
