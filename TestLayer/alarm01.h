#ifndef ALARM01_H
#define ALARM01_H

#include <QObject>
#include "layernotifyinterface.h"

class Alarm01 : public QObject,public LayerNotifyInterface
{
    Q_OBJECT

public:
    Alarm01(QObject *parent);
    ~Alarm01();

    void test();
protected:
    virtual void notify(QObject *event_msg);
private:
    
};

#endif // ALARM01_H
