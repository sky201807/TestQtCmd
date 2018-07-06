#ifndef LAYERNOTIFYINTERFACE_H
#define LAYERNOTIFYINTERFACE_H

#include <QObject>
#include <QList>

class LayerNotifyInterface 
{

public:
    LayerNotifyInterface(QObject *parent);
    virtual ~LayerNotifyInterface();

    void AddEventLayerFrom(LayerNotifyInterface *);
     void AddEventLayerNext(LayerNotifyInterface *);
    void DelEventLayerFrom(LayerNotifyInterface *);
protected:
    virtual void notify(QObject *event_msg);
private:
    QList<LayerNotifyInterface *> m_nodes;
};

#endif // LAYERNOTIFYINTERFACE_H
