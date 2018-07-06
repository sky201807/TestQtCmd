#include "alarm02.h"

Alarm02::Alarm02(QObject *parent)
    : QObject(parent),LayerNotifyInterface(parent)
{

}

Alarm02::~Alarm02()
{

}

#include <QDebug>
void Alarm02::notify(QObject *event_msg)
{
    qDebug()<<"Alarm02 notify";
    LayerNotifyInterface::notify(event_msg);
}