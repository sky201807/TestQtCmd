
#include <QtCore/QCoreApplication>

#include "alarm01.h"
#include "alarm02.h"

#include <QList>
#include <QSet>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Alarm01 t01(0);

    Alarm02 t02(0);
    t02.AddEventLayerFrom(&t01);
    
    t01.test();

    QList<QSet<int> > lst_tst;
    QSet<int> lst_set;
    lst_set.insert(1);
    lst_set.insert(2);
    lst_tst.append(lst_set);
    qDebug()<<lst_tst;

    return a.exec();
}
