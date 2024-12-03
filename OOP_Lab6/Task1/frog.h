#ifndef FROG_H
#define FROG_H

#include <QLabel>
#include <QString>

class Frog : public QLabel {
    Q_OBJECT

public:
    explicit Frog(QWidget *parent = nullptr, const QString &imagePath = "");
    virtual ~Frog();

    void moveFrog(const QPoint &targetPosition);
};

#endif // FROG_H
