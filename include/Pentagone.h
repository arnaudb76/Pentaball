#ifndef PENTAGONE_H
#define PENTAGONE_H
#include "Point3d.h"
#include <iostream>
#include<math.h>

class Pentagone
{
    public:
        Pentagone();
        Pentagone(float l,Point3d P);
        virtual ~Pentagone();
        void print_penta();
        Point3d get_points(int i);
        float deg2rad(int deg);                 // a mettre dans une classe utilitaires
        Pentagone(Point3d Pa, Point3d Pb);      // Define a pentagone on xy plane from P1 and P2


    protected:

    private:
        float m_l  ;
        Point3d m_points[5];
};

#endif // PENTAGONE_H
