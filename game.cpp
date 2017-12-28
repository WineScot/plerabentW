#include "game.h"
#include "pole.h"
#include<QPropertyAnimation>

Pole* pola[8];
QPropertyAnimation animation;
Game::Game(QWidget* parent)
{
    scene=new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);


    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    for(int i=0;i<8;i++)
    {
        pola[i]=new Pole();
        pola[i]->setPos(i*100,300);
        scene->addItem(pola[i]);
    }
    animation.setTargetObject(pola[0]);
    animation.setPropertyName("pos");
    animation.setDuration(3000);
    animation.setStartValue(QPoint(0,0));
    animation.setEndValue(QPoint(200,200));
    show();
    animation.start();
}
