#include "frog.h"
#include <QPixmap>

Frog::Frog(QWidget *parent, const QString &imagePath) : QLabel(parent) {
    setPixmap(QPixmap(imagePath).scaled(80, 80, Qt::KeepAspectRatio));
    setAlignment(Qt::AlignCenter);
}

Frog::~Frog() {}

void Frog::moveFrog(const QPoint &targetPosition) {
    int x = this->x();
    int y = this->y();

    int dx = (targetPosition.x() > x) ? 5 : -5;
    int dy = (targetPosition.y() > y) ? 5 : -5;

    x += dx;
    y += dy;

    this->move(x, y);
}
