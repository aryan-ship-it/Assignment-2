// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Shape.h"
#include <iostream>
using namespace std;

int main()
{
    //S.setArea(40);
    //S.setName("Diagonal");
    //S.setType("Three dimensional");

 

    Triangle t(24, 13);
    cout << "Name: " << t.getName() << endl;
    cout << "Type: " << t.getType() << endl;
    cout << "Area: " << t.getArea() << endl;
    cout << endl;

    Circle c(5);
    cout << "Name: " << c.getName() << endl;
    cout << "Area: " << c.getArea() << endl;    
    cout << "Type: " << c.getType() << endl;
    cout << endl;

    Square s(10);
    cout << "Name: " << s.getName() << endl;
    cout << "Area: " << s.getArea() << endl;
    cout << "Type: " << s.getType() << endl;
    cout << endl;

    Sphere Sp(15);
    cout << "Name: " << Sp.getName() << endl;
    cout << "Area: " << Sp.getArea() << endl;
    cout << "Type: " << Sp.getType() << endl;
    cout << endl;

    Cube C(20);
    cout << "Name: " << C.getName() << endl;
    cout << "Area: " << C.getArea() << endl;
    cout << "Type: " << C.getType() << endl;
    cout << endl;

    Tetrahedron T(17);
    cout << "Name: " << T.getName() << endl;
    cout << "Area: " << T.getArea() << endl;
    cout << "Type: " << T.getType() << endl;
    cout << endl;

    
    MoveableShape mvs(12, 22);
    mvs.draw();
    cout << endl;
   
    







}



