#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QCursor>
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), currentLevel(1), currentFrog(nullptr), secondFly(nullptr) {
    ui->setupUi(this);
    setFixedSize(800, 600);

    QLabel *background = new QLabel(this);
    background->setGeometry(0, 0, 800, 600);
    QPixmap roomPixmap("D:/Стас/Универ/OOP/OOP_Lab6/Task1/room.jpg");
    background->setPixmap(roomPixmap.scaled(800, 600, Qt::IgnoreAspectRatio));
    background->lower();

    trap = new QLabel(this);
    trap->setGeometry(650, 400, 120, 80);
    trap->setAlignment(Qt::AlignCenter);
    QPixmap trapPixmap("D:/Стас/Универ/OOP/OOP_Lab6/Task1/trap.jfif");
    trapPixmap = trapPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    trap->setPixmap(trapPixmap);

    window = new QLabel(this);
    window->setGeometry(650, 150, 120, 80);
    window->setAlignment(Qt::AlignCenter);
    QPixmap windowPixmap("D:/Стас/Универ/OOP/OOP_Lab6/Task1/window.jpg");
    windowPixmap = windowPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    window->setPixmap(windowPixmap);

    moveTimer = new QTimer(this);
    connect(moveTimer, &QTimer::timeout, this, &MainWindow::moveFly);
    moveTimer->start(90);

    secondMoveTimer = new QTimer(this);
    connect(secondMoveTimer, &QTimer::timeout, this, &MainWindow::moveFly2);

    setMouseTracking(true);

    currentFly = new Level(this, "D:/Стас/Универ/OOP/OOP_Lab6/Task1/fly.png", currentLevel);
    currentFly->setGeometry(100, 100, 80, 80);
    currentFly->show();

    if (currentLevel == 2) {
        secondFly = new Level(this, "D:/Стас/Универ/OOP/OOP_Lab6/Task1/fly2.jpg", currentLevel);
        secondFly->setGeometry(200, 100, 80, 80);
        secondFly->show();

        secondMoveTimer->start(90);
    }
}

MainWindow::~MainWindow() {
    delete ui;
    delete trap;
    delete window;
    delete currentFly;
    delete currentFrog;
    delete secondFly;
    delete moveTimer;
    delete secondMoveTimer;
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    QMainWindow::mouseMoveEvent(event);
}

void MainWindow::moveFly() {
    if (currentFly) {
        currentFly->moveFly();
    }

    if (currentFrog) {
        currentFrog->moveFrog(currentFly->pos());
    }

    if (currentFly && currentFly->geometry().intersects(window->geometry())) {
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

    if (currentFrog && currentFrog->geometry().intersects(currentFly->geometry())) {
        moveTimer->stop();
        QMessageBox::information(this, "Гра завершена", "Жаба спіймала муху!");
        window->hide();
        trap->hide();
        close();
    }
}

void MainWindow::moveFly2() {
    if (secondFly) {
        QPoint cursorPos = QCursor::pos();
        int dx = (secondFly->x() > cursorPos.x()) ? -10 : 10;
        int dy = (secondFly->y() > cursorPos.y()) ? -10 : 10;

        int x = std::clamp(secondFly->x() + dx, 0, width() - secondFly->width());
        int y = std::clamp(secondFly->y() + dy, 0, height() - secondFly->height());

        secondFly->move(x, y);

        if (secondFly->geometry().intersects(window->geometry())) {
            secondMoveTimer->stop();
            QMessageBox::information(this, "Гра завершена", "Друга муха вилетіла в вікно!");
            close();
            return;
        }

        if (secondFly->geometry().intersects(trap->geometry())) {
            secondMoveTimer->stop();
            QMessageBox::information(this, "Гра завершена", "Друга муха потрапила в пастку!");
            nextLevel();
            return;
        }
    }
}

bool MainWindow::isCaught() {
    return currentFly && currentFly->geometry().intersects(trap->geometry());
}

void MainWindow::nextLevel() {
    delete currentFly;
    delete currentFrog;
    delete secondFly;

    currentFrog = nullptr;
    secondFly = nullptr;

    currentLevel++;

    if (currentLevel > 5) {
        QMessageBox::information(this, "Гра завершена", "Всі рівні пройдено!");
        close();
        return;
    }

    if (currentLevel == 3) {
        currentFrog = new Frog(this, "D:/Стас/Универ/OOP/OOP_Lab6/Task1/frog.jpg");
        if (currentFrog) {
            currentFrog->setGeometry(650, 300, 80, 80);
            currentFrog->show();
        } else {
            qDebug() << "Failed to create frog object.";
        }
    }

    QString flyImage = QString("D:/Стас/Универ/OOP/OOP_Lab6/Task1/fly%1.jpg").arg(currentLevel);
    currentFly = new Level(this, flyImage, currentLevel);
    currentFly->setGeometry(100, 100, 80, 80);
    currentFly->show();

    if (currentLevel == 2) {
        secondFly = new Level(this, "D:/Стас/Универ/OOP/OOP_Lab6/Task1/fly2.jpg", currentLevel);
        secondFly->setGeometry(200, 100, 80, 80);
        secondFly->show();

        secondMoveTimer->start(90);
    }

    moveTimer->start(90);
}
