#include "alarm01.h"

Alarm01::Alarm01(QObject *parent)
    : QObject(parent),LayerNotifyInterface(parent)
{

}

Alarm01::~Alarm01()
{

}

#include <QDebug>

void Alarm01::notify(QObject *event_msg)
{
    qDebug()<<"Alarm01 notify";
    LayerNotifyInterface::notify(event_msg);
}

void Alarm01::test()
{
    notify(0);
}