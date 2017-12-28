#include <iostream>
#include<fstream>
#include"Point3d.h"
#include"Pentagone.h"

using namespace std;

int main()
{
    Point3d  P1(1,2,3);
    Point3d  P2(6,2,3);
    Pentagone Penta1 (P1,P2);
    Pentagone Penta2 (Penta1.get_points(0),Penta1.get_points(4));

    ofstream outfile;
    outfile.open("my_3dpoints.ply");

    /*// .pcd file format output
    outfile<<     "# .PCD v.7 - Point Cloud Data file format" <<endl;
    outfile<<     "VERSION .7" <<endl;
    outfile<<     "FIELDS x y z " <<endl;
    outfile<<     "SIZE 4 4 4" <<endl;
    outfile<<     "TYPE F F F " <<endl;
    outfile<<     "COUNT 1 1 1  " <<endl;
    outfile<<     "WIDTH 10  " <<endl;
    outfile<<     "HEIGHT 1  " <<endl;
    outfile<<     "POINTS 10  " <<endl;
    outfile<<     "VIEWPOINT 0 0 0 1 0 0 0  " <<endl;
    outfile<<     "DATA ascii  " <<endl;
    for (int i=0;i<5;i++)
    {
        outfile<< Penta1.get_points(i).get_x()<<" "<<Penta1.get_points(i).get_y()<<" "<<Penta1.get_points(i).get_z()<<endl;
    }

        for (int i=0;i<5;i++)
    {
        outfile<< Penta2.get_points(i).get_x()<<" "<<Penta2.get_points(i).get_y()<<" "<<Penta2.get_points(i).get_z()<<endl;
    }
    outfile.close();
    //-------------------- */

    // .ply file format
    outfile<<     "ply" <<endl;
    outfile<<     "format ascii 1.0" <<endl;
    outfile<<     "element vertex 10" <<endl;
    outfile<<     "property float x" <<endl;
    outfile<<     "property float y" <<endl;
    outfile<<     "property float z" <<endl;
    outfile<<     "element face 2" <<endl;
    outfile<<     "property list uchar int vertex_index" <<endl;
    outfile<<     "end_header" <<endl;
    for (int i=0;i<5;i++)
        {
        outfile<< Penta1.get_points(i).get_x()<<" "<<Penta1.get_points(i).get_y()<<" "<<Penta1.get_points(i).get_z()<<endl;
        }
    for (int i=0;i<5;i++)
        {
        outfile<< Penta2.get_points(i).get_x()<<" "<<Penta2.get_points(i).get_y()<<" "<<Penta2.get_points(i).get_z()<<endl;
        }
    outfile<<     "0 1 2 3 4" <<endl;
    outfile<<     "5 6 7 8 9" <<endl;
    // ------------- */

    return 0;
}
