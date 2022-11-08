//
// Created by Leandro De Barros Barbosa on 08/11/2022.
//
#include <iostream>
#ifndef PROSIT_3_POO_POINT_H
#define PROSIT_3_POO_POINT_H
using namespace std;

class Point {
protected:
    int x;
    int y;
public:
    Point();
    Point(int x,int y);
    int getX();
    int getY();
    virtual string afficheCoordonnee();
    virtual float calculDistance(Point* B);
    virtual int getZ();
};


#endif //PROSIT_3_POO_POINT_H
