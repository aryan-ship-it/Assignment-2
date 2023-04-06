#include "Shape.h"
#include <string>
#include <iostream>
using namespace std; 

//Shape class implementation
int Shape::getArea() {return Area;}
void Shape::setArea(int area) {	Area = area;}
string Shape::getName(){return ShapeName;}
void Shape::setName(string name){ShapeName = name;}
string Shape::getType() {return Type;}
void Shape::setType(string type) {Type = type;}

//TwoDimensional class implementation
TwoDimensional::TwoDimensional(int sides){
	setType("Two Dimensional");
	Sides = sides;
}
int TwoDimensional::getNoOfSides() {return Sides;}
void TwoDimensional::setNoOfSides(int side) {Sides = side;}


//Triangle class implementation
Triangle::Triangle(int breadth, int height):TwoDimensional(3){
	setName("Triangle");
	setBreadth(breadth);
	setHeight(height); 
	setTriangleArea(breadth, height);

}
void Triangle::setBreadth(int breadth) { Breadth = breadth; }
void Triangle::setHeight(int height) {Height = height;}
void Triangle::setTriangleArea(int breadth, int height) {
	int area;
	area = 0.5 * (breadth * height);
	setArea(area);
}
int Triangle::getHeight() {return Height;}
int Triangle::getBreadth() {return Breadth;}
int Triangle::getTriangleArea() { return AreaOfTriangle;}

//cicle class implementation

Circle::Circle(int radius) : TwoDimensional(-1) {
	setName("Circle");
	setRadius(radius);
	setAreaCircle(radius);
}

void Circle::setRadius(int radius) {Radius = radius;}
void Circle::setAreaCircle(int radius) {
	int area;
	area = 3.14 * (radius * radius);
	setArea(area);
}
int Circle::getRadius() {return Radius;}
int Circle::getCircleArea() {return AreaOfCircle;}

//Square class implementation
Square::Square(int length):TwoDimensional(4) {
	setName("Square");
	setLength(length);
	setAreaSquare(length);
	
}
void Square::setLength(int length) { Length = length;}
void Square::setAreaSquare(int length) {
	int area;
	area = length * length;
	setArea(area);
}
int Square::getLength() { return Length;}
int Square::getAreaSquare() { return AreaOfSquare;}


//Three Dimensional sub class implementation 

ThreeDimensional::ThreeDimensional(int sides) {
	setType("Three Dimensional");
	Sides = sides;
}
int ThreeDimensional::getNoOfSides() { return Sides; }
void ThreeDimensional::setNoOfSides(int side) { Sides = side;}

//Sphere class implementation
Sphere::Sphere(int radius) : ThreeDimensional(-1) {
	setName("Sphere");
	setRadius(radius);
	setSphereArea(radius);
}
void Sphere::setRadius(int radius) { Radius = radius;}
void Sphere::setSphereArea(int radius) {
	int area;
	area = 4 * 3.14 * (radius * radius);
	setArea(area);
}
int Sphere::getRadius() { return Radius;}
int Sphere::getSphereArea() {return SphereArea;}

//Cube class implementation
Cube::Cube(int length) : ThreeDimensional(6) {
	setName("Cube");
	setLength(length);
	setCubeArea(length);
}
void Cube::setLength(int length) { Length = length;}
void Cube::setCubeArea(int length) {
	int area;
	area = 6 * (length * length);
	setArea(area);
}

int Cube::getLength() {return Length; }
int Cube::getCubeArea() {return CubeArea;}

//Tetrahedron sub class implementation

Tetrahedron::Tetrahedron(int edge):ThreeDimensional(4) {
	setName("Tetrahedron");
	setEdge(edge);
	setTetraArea(edge);
	
}

void Tetrahedron::setEdge(int edge) { Edge = edge; }
void Tetrahedron::setTetraArea(int edge) {
	int area;
	area = 1.732 * (edge * edge);
	setArea(area);
}

int Tetrahedron::getEdge() { return Edge; }
int Tetrahedron::getTetraArea() { return AreaTetra;}




void Moveable::setX(int x) { X = x; }
void Moveable::setY(int y) { Y = y; }

int Moveable::getX() {return X;}
int Moveable::getY() {return Y;}



MoveableShape::MoveableShape(int x,int y){
	X = x;
	Y = y;	
}


void MoveableShape::draw() {
	cout << "Drawing and Moving shape from: " << X << " To " << Y;
}

void MoveableShape:: setDrawable(bool drawable) {Drawable = drawable;}


bool MoveableShape::isDrawable() {return Drawable;}
