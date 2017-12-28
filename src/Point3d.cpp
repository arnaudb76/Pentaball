#include "Point3d.h"

Point3d::Point3d(){    m_x =0;    m_y =0;    m_z =0;}
Point3d::Point3d(float x, float y, float z){ m_x=x;m_y=y;m_z=z;}

Point3d::~Point3d()
{
    //dtor
}

void Point3d::set_x(float a) {    m_x = a;}
void Point3d::set_y(float a) {    m_y = a;}
void Point3d::set_z(float a) {    m_z = a;}
void Point3d::set_point(float x,float y,float z){ m_x=x; m_y=y; m_z=z;}
float Point3d::get_x()  {return m_x;}
float Point3d::get_y()  {return m_y;}
float Point3d::get_z()  {return m_z;}
Point3d Point3d::operator= (const Point3d& P)
{
    this->m_x = P.m_x;
    this->m_y = P.m_y;
    this->m_z = P.m_z;

}
void Point3d::print_Point()
{
    std::cout<<this->get_x()<<", "<<this->get_y()<<", "<<this->get_z()<<std::endl;
}

float Point3d::distancetoP(Point3d P)
{
    return (sqrt(  pow(this->get_x()-P.get_x(),2)+pow(this->get_y()-P.get_y(),2)+pow(this->get_z()-P.get_z(),2)));
}
