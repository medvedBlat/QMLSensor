#include "qmlinterface.h"
#include <QTimer>

QmlInterface::QmlInterface(QObject* parent) : QObject(parent)
{

}

int QmlInterface::speed_disk() const
{
    return m_speed_disk;
}

int QmlInterface::rashod_gaza() const
{
    return m_rashod_gaza;
}

int QmlInterface::davlenie_gaza() const
{
    return m_davlenie_gaza;
}

bool QmlInterface::on_off_disk() const
{
    return m_on_off_disk;
}

bool QmlInterface::argon_azot() const
{
    return m_argon_azot;
}

void QmlInterface::setSpeed_disk(int speed_disk)
{
    if(m_speed_disk == speed_disk)
        return;
    m_speed_disk = speed_disk;
    emit speed_diskChanged(m_speed_disk);
    qDebug() << m_speed_disk;
}

void QmlInterface::setRashod_gaza(int rashod_gaza)
{
    if(m_rashod_gaza == rashod_gaza)
        return;
    m_rashod_gaza = rashod_gaza;
    emit rashod_gazaChanged(m_rashod_gaza);
    qDebug() << m_rashod_gaza;
}

void QmlInterface::setDavlenie_gaza(int davlenie_gaza)
{
    if(m_davlenie_gaza == davlenie_gaza)
        return;
    m_davlenie_gaza = davlenie_gaza;
    emit davlenie_gazaChanged(m_davlenie_gaza);
    qDebug() << m_davlenie_gaza;
}

void QmlInterface::setOn_off_disk(bool on_off_disk)
{
    if(m_on_off_disk == on_off_disk)
        return;
    m_on_off_disk = on_off_disk;
    emit on_off_diskChanged(m_on_off_disk);
    qDebug() << m_on_off_disk;
}

void QmlInterface::setArgon_azot(bool argon_azot)
{
    if(m_argon_azot == argon_azot)
        return;
    m_argon_azot = argon_azot;
    emit argon_azotChanged(m_argon_azot);
    qDebug() << m_argon_azot;
}
