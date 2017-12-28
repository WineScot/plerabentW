#ifndef POLE_H
#define POLE_H
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class Pole:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    Q_PROPERTY(QPointF pos READ pos WRITE setPos)
public:
    Pole(QGraphicsItem* parent=0);
};

#endif // POLE_H
