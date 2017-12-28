#ifndef MONSTER_H
#define MONSTER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Monster:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT //to tak na przyszlosc
private:
    int hp;
    QString name;
public:
    Monster(QGraphicsItem* parent=0);
public slots:
    void attack(); //moze to wkorzystamy

};

#endif // MONSTER_H
