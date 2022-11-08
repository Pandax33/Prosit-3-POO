//
// Created by Leandro De Barros Barbosa on 08/11/2022.
//

#include "Point3D.h"
#include "math.h"
Point3D::Point3D() : Point(){
    this->z=1;
}

Point3D::Point3D(int x, int y, int z) : Point(x,y){
    this->z=z;
}

int Point3D::getZ() {
    return this->z;
}

float Point3D::calculDistance(Point* B) {
    float resultat= sqrt((B->getX()-this->getX())*(B->getX()-this->getX())+(B->getY()-this->getY())*(B->getY()-this->getY())+(B->getZ()-this->getZ())*(B->getZ()-this->getZ()));
    return resultat;
}

string Point3D::afficheCoordonnee() {
    string message;
    message= "Les coordonnées du points sont : x="+ to_string(this->x);
    message += " / y="+ to_string(this->y);
    message += " / z="+ to_string(this->z);
    return message;
}