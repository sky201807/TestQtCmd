#ifndef ALARM02_H
#define ALARM02_H

#include <QObject>
#include "layernotifyinterface.h"

class Alarm02 : public QObject,public LayerNotifyInterface
{
    Q_OBJECT

public:
    Alarm02(QObject *parent);
    ~Alarm02();
protected:
    virtual void notify(QObject *event_msg);
private:
    
};

#endif // ALARM02_H
