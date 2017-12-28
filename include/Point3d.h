#ifndef POINT3D_H
#define POINT3D_H
#include <iostream>
#include<math.h>

class Point3d
{
    public:
        Point3d();
        Point3d(float x, float y, float z);
        virtual ~Point3d();
        void set_x(float a);
        void set_y(float a);
        void set_z(float a);
        void set_point(float x,float y,float z);
        float get_x();
        float get_y();
        float get_z();
        Point3d operator= (const Point3d& P);
        void print_Point ();
        float distancetoP(Point3d P);

    protected:

    private:
        float m_x;
        float m_y;
        float m_z;
};

#endif // POINT3D_H
