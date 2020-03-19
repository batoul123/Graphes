#ifndef COUT_H
#define COUT_H

#include <QtGui>
#include <QGraphicsTextItem>

#include "graphe.h"
#include "grapheOV.h"
#include "grapheNOV.h"
#include "grapheONV.h"
#include "grapheNONV.h"

class WGraphe;

//cout d'un arc
class couts : public QGraphicsTextItem
{
public:
	//affichage du cout c entre les sommet s1 et s2
	couts(WGraphe *parent, int c, int s1, int s2);
	virtual ~couts();

	void mousePressEvent(QGraphicsSceneMouseEvent *e);

private:
	int d_cout;
	WGraphe *d_parent;
	//sommet de départ et d'arrivé de l'arc de ce cout
	int sdep, sarr;
};
#endif