#include "level.h"
#include <QCursor>

Level::Level(QWidget *parent, const QString &imagePath, int level)
    : Fly(parent, imagePath), currentLevel(level) {}

void Level::moveFly() {
    static QPoint prevPos;
    QPoint cursorPos = parentWidget()->mapFromGlobal(QCursor::pos());

    if (prevPos == cursorPos) {
        return;
    }

    prevPos = cursorPos;

    int x = this->x();
    int y = this->y();

    int dx = (x > cursorPos.x()) ? 10 : -10;
    int dy = (y > cursorPos.y()) ? 10 : -10;

    switch (currentLevel) {
    case 1:
        break; // Вправо-вниз
    case 2:
        dx = -dx;
        break; // Вліво-вниз
    case 3:
        dx = -dx;
        dy = -dy;
        break; // Вліво-вгору
    case 4:
        dy = -dy;
        break; // Вправо-вгору
    case 5:
        break;
    default:
        break;
    }

    x = std::clamp(x + dx, 0, parentWidget()->width() - this->width());
    y = std::clamp(y + dy, 0, parentWidget()->height() - this->height());

    this->move(x, y);
}
