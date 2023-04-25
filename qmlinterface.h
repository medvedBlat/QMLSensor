#ifndef QMLINTERFACE_H
#define QMLINTERFACE_H

#include <QObject>
#include <QQmlComponent>
#include <QQmlProperty>
#include <QQuickStyle>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QQuickView>

class QmlInterface : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(int speed_disk READ speed_disk WRITE setSpeed_disk NOTIFY speed_diskChanged)
    Q_PROPERTY(int rashod_gaza READ rashod_gaza WRITE setRashod_gaza NOTIFY rashod_gazaChanged)
    Q_PROPERTY(int davlenie_gaza READ davlenie_gaza WRITE setDavlenie_gaza NOTIFY davlenie_gazaChanged)
    Q_PROPERTY(bool on_off_disk READ on_off_disk WRITE setOn_off_disk NOTIFY on_off_diskChanged)
    Q_PROPERTY(bool argon_azot READ argon_azot WRITE setArgon_azot NOTIFY argon_azotChanged)

    QmlInterface(QObject* parent = nullptr);

    int speed_disk() const;
    int rashod_gaza() const;
    int davlenie_gaza() const;
    bool on_off_disk() const;
    bool argon_azot() const;

public slots:
    void setSpeed_disk(int speed_disk);
    void setRashod_gaza(int rashod_gaza);
    void setDavlenie_gaza(int davlenie_gaza);
    void setOn_off_disk(bool on_off_disk);
    void setArgon_azot(bool argon_azot);

signals:

    void speed_diskChanged(int speed_disk);
    void rashod_gazaChanged(int rashod_gaza);
    void davlenie_gazaChanged(int davlenie_gaza);
    void on_off_diskChanged(bool on_off_disk);
    void argon_azotChanged(bool argon_azot);

public:
    int m_speed_disk {0};
    int m_rashod_gaza {0};
    int m_davlenie_gaza {0};
    bool m_on_off_disk {true};
    bool m_argon_azot {true};
};

#endif // QMLINTERFACE_H
