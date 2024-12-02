#ifndef LEVEL_H
#define LEVEL_H

#include "fly.h"

class Level : public Fly {
    Q_OBJECT

public:
    explicit Level(QWidget *parent = nullptr, const QString &imagePath = "", int level = 1);
    void moveFly() override;

private:
    int currentLevel;
};

#endif // LEVEL_H
