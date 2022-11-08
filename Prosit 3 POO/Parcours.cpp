//
// Created by Leandro De Barros Barbosa on 08/11/2022.
//

#include "Parcours.h"

Parcours2D::Parcours2D() {
    this->nbPoint=10;
    this->etat=0;
    this->liste= new Point* [this->nbPoint];
}

Parcours2D::Parcours2D(int x) {
    this->nbPoint=x;
    this->etat=0;
    this->liste= new Point* [this->nbPoint];
}

void Parcours2D::ajouter(Point* objet) {
    if(this->etat <= this->nbPoint){
        this->liste[this->etat] = objet;
        this->etat=this->etat+1;
    }
    else{
        cout<<"Plus de place dans le tableau" << endl;
    }
}

void Parcours2D::afficherInfo() {
    for(int i=0;this->etat > i;i++){
        string message=this->liste[i]->afficheCoordonnee();
        cout<<"Les informations du "<< i<< "eme point sont "<< message <<endl;
    }
}

float Parcours2D::calculParcours() {
    float resultat = 0;
    for (int i=0;this->etat-1 > i;i++){
        resultat = resultat + this->liste[i]->calculDistance(this->liste[i+1]);
    }
    return resultat;
}