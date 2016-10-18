#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class GameObject : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    GameObject();
    GameObject(QPoint pos);
    GameObject(bool vis);
    GameObject(QPoint pos, bool vis);

    QPixmap thing;

    void SetVisibility(bool vis) {visible = vis;}

private:
    QPoint position;
    bool visible;
};

#endif // GAMEOBJECT_H
