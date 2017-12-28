#include "game.h"
#include "pole.h"
Game::Game(QWidget* parent)
{
    scene=new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);




    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);



    Pole* x=new Pole();

    scene->addItem(x);


    show();
}
