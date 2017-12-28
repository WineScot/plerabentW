#include "pole.h"

Pole::Pole(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    setPos(100,100);
    //setPixmap(QPixmap("/home/maxization/Projekt/res/platform.png"));
    setPixmap(QPixmap(":Sprites/platform.png"));
}
