#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    setFixedSize(800, 600);


    fly = new QLabel(this);
    fly->setGeometry(100, 100, 80, 80);
    fly->setAlignment(Qt::AlignCenter);


    trap = new QLabel(this);
    trap->setGeometry(650, 250, 120, 80);
    trap->setAlignment(Qt::AlignCenter);


    moveTimer = new QTimer(this);
    connect(moveTimer, &QTimer::timeout, this, &MainWindow::moveFly);
    moveTimer->start(90);

    setMouseTracking(true);


    QPixmap flyPixmap("D:/Стас/Универ/OOP/OOP_Lab4/Task1/fly.png");
    QPixmap trapPixmap("D:/Стас/Универ/OOP/OOP_Lab4/Task1/trap.jfif");

    flyPixmap = flyPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    fly->setPixmap(flyPixmap);

    trapPixmap = trapPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    trap->setPixmap(trapPixmap);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    if (fly->geometry().contains(event->pos())) {
        moveFly();
    }
}

void MainWindow::moveFly() {

    static QPoint prevPos;

    QPoint cursorPos = mapFromGlobal(QCursor::pos());

    if (prevPos == cursorPos) {
        return;
    }

    prevPos = cursorPos;

    int x = fly->x();
    int y = fly->y();


    int dx = (x > cursorPos.x()) ? 10 : -10;
    int dy = (y > cursorPos.y()) ? 10 : -10;

    x += dx;
    y += dy;


    x = std::clamp(x, 0, width() - fly->width());
    y = std::clamp(y, 0, height() - fly->height());

    fly->move(x, y);


    if (isCaught()) {
        moveTimer->stop();
        QMessageBox::information(this, "Гра завершена", "Ви піймали муху!");
    }
}

bool MainWindow::isCaught() {
    return fly->geometry().intersects(trap->geometry());
}
