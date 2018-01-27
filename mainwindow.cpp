#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hamlib/rig.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initialize()
{
    RIG *my_rig = rig_init(RIG_MODEL_TS590S);

    char *rig_file = "COM3";
    strncpy(my_rig->state.rigport.pathname, rig_file, FILPATHLEN - 1);
    my_rig->state.rigport.parm.serial.rate = 115200;
    int retcode = rig_open(my_rig);
    rig_set_freq(my_rig, RIG_VFO_CURR, 1000000.0);

}
