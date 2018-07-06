#include "layernotifyinterface.h"

LayerNotifyInterface::LayerNotifyInterface(QObject *parent)
{
    m_nodes.clear();
}

LayerNotifyInterface::~LayerNotifyInterface()
{
    m_nodes.clear();
}


void LayerNotifyInterface::AddEventLayerFrom(LayerNotifyInterface * nlayer)
{
    if(!nlayer->m_nodes.contains(this)){
         nlayer->AddEventLayerNext(this);
    }   
}

void LayerNotifyInterface::AddEventLayerNext(LayerNotifyInterface * nlayer)
{
    if(!m_nodes.contains(this)){
        m_nodes.append(nlayer);
    }
}


void LayerNotifyInterface::DelEventLayerFrom(LayerNotifyInterface * nlayer)
{
    m_nodes.removeAll(nlayer);
}


void LayerNotifyInterface::notify(QObject *event_msg)
{
   QListIterator<LayerNotifyInterface *> iEveryItem(m_nodes);
   while(iEveryItem.hasNext()){
        
       iEveryItem.next()->notify(event_msg);
   }
}