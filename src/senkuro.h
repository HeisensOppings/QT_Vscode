#pragma once
#include "ui_senkuro.h"
#include <QMainWindow>

class senkuro : public QMainWindow {
    Q_OBJECT
    
public:
    senkuro(QWidget* parent = nullptr);
    ~senkuro();

private:
    Ui_senkuro* ui;
};