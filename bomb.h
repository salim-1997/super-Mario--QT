/*
 * Author: equati0n
 * Date: December 2016
*/

#ifndef BOMB_H
#define BOMB_H
#include <QGraphicsItem>
#include <QPixmap>
#include "objecttype.h"
#include <QObject>

class MyScene;
class CoinCounter;

class Bomb :public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    enum { Type = UserType + bombType };
    Bomb(QRectF platformRect, int direction,QGraphicsItem *parent = 0);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int type() const;
public slots:
    void nextFrame();
signals:
    void marioSizeStatus(int);
private:

    int mCurrentFrame;
    QPixmap mPixmap;
    QRectF mPlatform;
    int mDirection;
};
#endif // BOMB_H
