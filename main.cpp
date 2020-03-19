#include "projetgraphe.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ProjetGraphe w;
	w.show();
	return a.exec();
}
