#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <QMouseEvent>
#include "level.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    Ui::MainWindow *ui;
    QLabel *window;
    QLabel *trap;
    Level *currentFly;
    QTimer *moveTimer;
    int currentLevel;
    int movementPattern;

    void moveFly();
    bool isCaught();
    void nextLevel();
};

#endif // MAINWINDOW_H
