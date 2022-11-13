#include "senkuro.h"

senkuro::senkuro(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_senkuro)
{
    ui->setupUi(this);
}

senkuro::~senkuro()
{
    delete ui; 
}