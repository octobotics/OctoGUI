#ifndef GSTSTREAM_H
#define GSTSTREAM_H

#include <QObject>

class gstStream : public QObject
{
    Q_OBJECT


public:
    explicit gstStream(QObject *parent = nullptr);

signals:

public slots:
    void gstRecord();
    void gstStop();


};

#endif // GSTSTREAM_H
