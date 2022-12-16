#ifndef HELLOCPP_H
#define HELLOCPP_H

#include <QObject>

class HelloCpp : public QObject
{
Q_OBJECT

public:

    explicit HelloCpp(QObject *parent = 0);
    Q_INVOKABLE void gstRecord();
    Q_INVOKABLE void gstStop();
    Q_INVOKABLE void gstRecord2();
    Q_INVOKABLE void gstStop2();
signals:

public slots:

};

#endif // HELLOCPP_H
