#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>

#include "pole.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene* scene=new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    Pole* x=new Pole();

    scene->addItem(x);
    QGraphicsView* view=new QGraphicsView(scene);
    view->show();

    return a.exec();
}
