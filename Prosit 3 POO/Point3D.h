//
// Created by Leandro De Barros Barbosa on 08/11/2022.
//

#ifndef PROSIT_3_POO_POINT3D_H
#define PROSIT_3_POO_POINT3D_H
#include "Point.h"

class Point3D : public Point{
private:
    int z;
public:
    Point3D();
    Point3D(int x,int y,int z);
    int getZ();
    string afficheCoordonnee();
    float calculDistance(Point* B);
};


#endif //PROSIT_3_POO_POINT3D_H
