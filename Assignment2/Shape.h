#pragma once
#include <string>
#include <iostream>
using namespace std;
class Shape
{
protected: 
	int Area;
	string ShapeName;
	string Type;
	
public:

	//getters
	int getArea();
	string getName();
	string getType();

	//setters 
	void setArea(int area);
	void setName(string name);
	void setType(string type);
};

class TwoDimensional : public Shape {
private: 
	int Sides; 
public:
	TwoDimensional(int sides);
	int getNoOfSides();
	void setNoOfSides(int side);

};

class ThreeDimensional : public Shape {
private:
	int Sides;
public:
	ThreeDimensional(int sides);
	int getNoOfSides();
	void setNoOfSides(int side);

};

class Triangle : public TwoDimensional {
private: 
	int Breadth;
	int Height;
	int AreaOfTriangle;
public: 
	Triangle(int breadth, int height) ;
	//setters
	void setBreadth(int breadth);
	void setHeight(int height);
	void setTriangleArea(int breadth, int height);

	//getters 
	int getBreadth();
	int getHeight();
	int getTriangleArea();

	
};

class Circle : public TwoDimensional {
private: 
	int Radius;
	int AreaOfCircle;
public:
	Circle(int radius);

	//setters
	void setRadius(int radius);
	void setAreaCircle(int radius);
	
	
	//getters
	int getRadius();
	int getCircleArea();
};


class Square:public TwoDimensional {
private:
	int Length;
	int AreaOfSquare;
public:
	Square(int length);
	//setters 
	void setLength(int length);
	void setAreaSquare(int length);

	//getters
	int getLength();
	int getAreaSquare();
	
	
};

class Sphere : public ThreeDimensional {
private:
	int Radius;
	int SphereArea;
public:
	Sphere(int radius);
	//setters 
	void setRadius(int radius);
	void setSphereArea(int radius);

	int getRadius();
	int getSphereArea();

};

class Cube : public ThreeDimensional {
private:
	int Length;
	int CubeArea;
public:
	Cube(int Length);
	//setters 
	void setLength(int radius);
	void setCubeArea(int radius);

	int getLength();
	int getCubeArea();

};


class Tetrahedron : public ThreeDimensional {
private:
	int Edge;
	int AreaTetra;
public: 
	Tetrahedron(int edge);
	void setEdge(int edge);
	void setTetraArea(int edge);

	int getEdge();
	int getTetraArea();
};

class Moveable{
protected:
	int X;
	int Y;
public:

	//setters
	void setX(int x);
	void setY(int y);

	//getters
	int getX();
	int getY();

};

class MoveableShape : public Shape, public Moveable {
protected:
	bool Drawable;
public:
	MoveableShape(int x, int y);
	void draw();
	void setDrawable(bool drawable);
	bool isDrawable();
};