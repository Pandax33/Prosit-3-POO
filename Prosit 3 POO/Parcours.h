//
// Created by Leandro De Barros Barbosa on 08/11/2022.
//
#include "Point3D.h"
#ifndef PROSIT_3_POO_PARCOURS_H
#define PROSIT_3_POO_PARCOURS_H


class Parcours2D {
protected:
    int nbPoint;
    int etat;
    Point** liste;
public:
    Parcours2D();
    Parcours2D(int);
    void afficherInfo();
    void ajouter(Point*);
    virtual float calculParcours();


};


#endif //PROSIT_3_POO_PARCOURS_H
