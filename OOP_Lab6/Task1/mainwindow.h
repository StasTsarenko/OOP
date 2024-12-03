#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>
#include <QMouseEvent>
#include "level.h"
#include "frog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Level *currentFly;
    Level *secondFly;
    Frog *currentFrog;
    QTimer *moveTimer;
    QTimer *secondMoveTimer;

    QLabel *trap;
    QLabel *window;
    int currentLevel;


    void moveFly();
    void moveFly2();
    bool isCaught();
    void nextLevel();
protected:
    void mouseMoveEvent(QMouseEvent *event) override;
};

#endif // MAINWINDOW_H
