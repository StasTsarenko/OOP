#include "fly.h"
#include <QPixmap>

Fly::Fly(QWidget *parent, const QString &imagePath) : QLabel(parent) {
    setPixmap(QPixmap(imagePath).scaled(80, 80, Qt::KeepAspectRatio));
    setAlignment(Qt::AlignCenter);
}

Fly::~Fly() {}

void Fly::moveFly() {

}
