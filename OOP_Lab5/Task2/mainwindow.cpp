#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), currentLevel(1), movementPattern(1) {
    ui->setupUi(this);
    setFixedSize(800, 600);

    // пастка
    trap = new QLabel(this);
    trap->setGeometry(650, 400, 120, 80);
    trap->setAlignment(Qt::AlignCenter);
    QPixmap trapPixmap("D:/Стас/Универ/OOP/OOP_Lab5/Task2/trap.jfif");
    trapPixmap = trapPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    trap->setPixmap(trapPixmap);

    // окно
    window = new QLabel(this);
    window->setGeometry(650, 150, 120, 80);
    window->setAlignment(Qt::AlignCenter);
    QPixmap windowPixmap("D:/Стас/Универ/OOP/OOP_Lab5/Task2/window.jpg");
    windowPixmap = windowPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    window->setPixmap(windowPixmap);

    moveTimer = new QTimer(this);
    connect(moveTimer, &QTimer::timeout, this, &MainWindow::moveFly);
    moveTimer->start(90);

    setMouseTracking(true);


    currentFly = new Level(this, "D:/Стас/Универ/OOP/OOP_Lab5/Task2/fly.png", currentLevel);
    currentFly->setGeometry(100, 100, 80, 80);
    currentFly->show();
}

MainWindow::~MainWindow() {
    delete ui;
    delete trap;
    delete window;
    delete currentFly;
    delete moveTimer;
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    QMainWindow::mouseMoveEvent(event);
}

void MainWindow::moveFly() {
    currentFly->moveFly();

    if (currentFly->geometry().intersects(window->geometry())) {
        moveTimer->stop();
        QMessageBox::information(this, "Гра завершена", "Ви програли! Муха вилетіла в вікно.");
        close();
        return;
    }

    if (isCaught()) {
        moveTimer->stop();
        QMessageBox::information(this, "Гра завершена", "Ви піймали муху!");
        nextLevel();
    }
}

bool MainWindow::isCaught() {
    return currentFly->geometry().intersects(trap->geometry());
}

void MainWindow::nextLevel() {
    delete currentFly;
    currentLevel++;

    if (currentLevel > 5) {
        QMessageBox::information(this, "Гра завершена", "Всі рівні пройдено!");
        close();
        return;
    }


    QString flyImage = QString("D:/Стас/Универ/OOP/OOP_Lab5/Task2/fly%1.jpg").arg(currentLevel);

    currentFly = new Level(this, flyImage, currentLevel);
    currentFly->setGeometry(100, 100, 80, 80);
    currentFly->show();

    moveTimer->start(90);
}
