#include "game.h"
#include "pole.h"
#include<QPropertyAnimation>
#include<QParallelAnimationGroup>

#include <QTime>
#include <QCoreApplication>
Pole* pola[9];
Pole* pole_z;
QPropertyAnimation animation[9];

void delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

Game::Game(QWidget* parent)
{
    scene=new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);
    QParallelAnimationGroup *group = new QParallelAnimationGroup;
    for(int i=0;i<9;i++)
    {
        pola[i]=new Pole();
        pola[i]->setPos(i*100,300);
        scene->addItem(pola[i]);
        animation[i].setTargetObject(pola[i]);
        animation[i].setPropertyName("pos");
        animation[i].setDuration(3000);
        animation[i].setStartValue(QPoint(pola[i]->x(),pola[i]->y()));
        animation[i].setEndValue(QPoint(pola[i]->x()-100,pola[i]->y()));
        group->addAnimation(&animation[i]);
    }
    show();
    //animation.start();
    while(true)
    {
        group->start();
        delay(3050);
    }


}
