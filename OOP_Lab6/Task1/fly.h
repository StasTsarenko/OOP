#ifndef FLY_H
#define FLY_H

#include <QLabel>
#include <QString>

class Fly : public QLabel {
    Q_OBJECT

public:
    explicit Fly(QWidget *parent = nullptr, const QString &imagePath = "");
    virtual ~Fly();

    virtual void moveFly() = 0;
};

#endif // FLY_H
