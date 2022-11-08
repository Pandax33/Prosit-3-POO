//
// Created by Leandro De Barros Barbosa on 08/11/2022.
//

#include "Parcours3D.h"
Parcours3D::Parcours3D() {
    this->nbPoint=10;
    this->etat=0;
    this->liste= new Point* [this->nbPoint];
}

Parcours3D::Parcours3D(int x) {
    this->nbPoint=x;
    this->etat=0;
    this->liste= new Point* [this->nbPoint];
}

float Parcours3D::calculParcours() {
    float resultat = 0;
    for (int i=0;this->etat-1 > i;i++){
        resultat = resultat + this->liste[i]->calculDistance(this->liste[i+1]);
    }
    return resultat;
}



