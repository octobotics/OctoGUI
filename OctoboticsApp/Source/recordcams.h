#ifndef RECORDCAMS_H
#define RECORDCAMS_H



#include <QObject>

class recordCams : public QObject
{
    Q_OBJECT

public:

    explicit recordCams(QObject *parent = 0);
    Q_INVOKABLE void gstRecord3();
    Q_INVOKABLE void gstStop3();
    Q_INVOKABLE void gstRecord4();
    Q_INVOKABLE void gstStop4();
signals:

public slots:

};

#endif // HELLOCPP_H
