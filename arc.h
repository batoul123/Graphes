#ifndef ARC_H
#define ARC_H

#include <QGraphicsLineItem>

class sommet;

//arête du graphe
class arc : public QGraphicsLineItem
{
	friend class WGraphe;

public:
	//afficher l'arc 
	arc(sommet *s1, sommet *s2, bool oriente, QGraphicsScene* parent);

private:
	QGraphicsScene *d_parent;
	//taille de la fleche
	static const int TAILLE = 10, BLANC = 20;
	//numéro du sommet de départ et d'arrivé de l'arc
	int sdep, sarr;
};

#endif