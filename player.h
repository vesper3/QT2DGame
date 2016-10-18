#ifndef PLAYER_H
#define PLAYER_H

#include "gameobject.h"
#include <QKeyEvent>

class Player : public GameObject
{
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // PLAYER_H
