#include "Pentagone.h"


Pentagone::Pentagone()
{
    m_l = 0;
    for (int i=0;i<5;i++){m_points[i].set_point(0,0,0);}

}

Pentagone::Pentagone(float l, Point3d P) //define a pentagone on the xy plane of point P avec orientation normale a x
{
    m_l = l;
    m_points[0]= P;
    int angles[4] = {108, 36, -36,-108};
    for (int i=1;i<5;i++)
    {
    m_points[i].set_x(m_points[i-1].get_x()+(l*cos(deg2rad(angles[i-1]))) );
    m_points[i].set_y(m_points[i-1].get_y()+(l*sin(deg2rad(angles[i-1]))) );
    m_points[i].set_z(m_points[i-1].get_z());
    }
}

Pentagone::Pentagone(Point3d P1, Point3d P2)
{
    m_points[0]=P1;
    m_points[1]=P2;

    for (int i=1;i<4;i++)
    {
    // changement de referentiel. origine sur i
    float nx = m_points[i-1].get_x()-m_points[i].get_x();
    float ny = m_points[i-1].get_y()-m_points[i].get_y();
    // appliation matrice ratation de P1 avec origine P2 pour creet P3
    m_points[i+1].set_point(nx * cos(deg2rad(-108))-ny*sin(deg2rad(-108))+m_points[i].get_x(), nx* sin(deg2rad(-108))+ny*cos(deg2rad(-108))+m_points[i].get_y(), m_points[0].get_z());

    }

}

Pentagone::~Pentagone()
{
    //dtor
}

void Pentagone::print_penta()
{
    std::cout<<"P1:"<<std::endl;
    for (int i=0;i<5;i++){this->m_points[i].print_Point();}
}

Point3d  Pentagone::get_points(int i)
{
    return this->m_points[i];
}


float Pentagone::deg2rad(int deg){ return deg*3.1415/180; }
