#ifndef SOMMET_H
#define SOMMET_H

#include <QtGui>
#include "QGraphicsEllipseItem"
#include "WGraphe.h"

//sommet du graphe
class sommet : public QGraphicsEllipseItem
{
	friend class arc;
public:
	//création d'un sommet 
	sommet(QWidget *parent, int num, double x, double y);
	virtual ~sommet();

	void mousePressEvent(QGraphicsSceneMouseEvent *event);

	int getNum() const { return d_num; }
	QString info() const { return d_info; }
	void setInfo(QString info) { d_info = info; setToolTip(info); }

signals:
	void suppr(int);

private:
	//numéro du sommet
	int d_num;
	//pointeur sur WGraphe
	QWidget *d_parent;
	//information complexe associée au sommet
	QString d_info;
	//taille duQGraphicsEllispseItem
	static const int WIDTH = 20, HEIGHT = 20;
};

#endif