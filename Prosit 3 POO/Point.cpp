//
// Created by Leandro De Barros Barbosa on 08/11/2022.
//

#include "Point.h"
#include <math.h>
Point::Point() {
    this->x=1;
    this->y=1;
}

Point::Point(int x,int y) {
    this->x=x;
    this->y=y;
}

int Point::getX() {
    return this->x;
}

int Point::getY() {
    return this->y;
}

float Point::calculDistance(Point* B) {
    float Distance = sqrt( (B->getX()-this->getX())*(B->getX()-this->getX())+(B->getY()-this->getY())*(B->getY()-this->getY()));
    return Distance;
}

string Point::afficheCoordonnee() {
    string message;
    message= "Les coordonnées du points sont : x="+ to_string(this->getX());
    message += " / y="+ to_string(this->getY());
    return message;
}


int Point::getZ() {
    return 0;
}
