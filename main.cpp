#include "ui_main.h"


int main(int argc, char *argv[]){

  QApplication app(argc, argv);
  QMainWindow *window = new QMainWindow;
  Ui::MainWindow ui;
  ui.setupUi(window);

  
  window->show();
  
  return app.exec();

}
