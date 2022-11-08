#include <iostream>
#include "Point3D.h"
#include "Parcours3D.h"
int main() {
    Point* p1;
    Point* p2;
    Point* p3;
    Parcours2D* parcours;
    Parcours3D* parcours1;
    p1 = new Point(0,0);
    p2 = new Point(1,1);
    p3 = new Point(2,2);
    parcours = new Parcours2D(3);

    parcours->ajouter(p1);
    parcours->ajouter(p2);
    parcours->ajouter(p3);
    cout << parcours->calculParcours() <<endl;
    parcours->afficherInfo();

    p1 = new Point3D(0,0,0);
    p2 = new Point3D(1,1,1);
    p3 = new Point3D(2,2,2);
    parcours = new Parcours3D(3);

    parcours->ajouter(p1);
    parcours->ajouter(p2);
    parcours->ajouter(p3);
    cout << parcours->calculParcours() <<endl;

    int x;
    cin>>x;
    int y;
    cin>>y;
    int z;
    cin>>z;
    p1= new Point3D(x,y,z);

    parcours->afficherInfo();



}
