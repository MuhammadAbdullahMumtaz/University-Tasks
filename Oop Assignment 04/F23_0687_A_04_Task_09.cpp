#include<iostream>
#include<string>

using namespace std;

class Shapes
{
	int length, width;

public:

	// Constructor...
	Shapes()
	{
		length = width = 0;
	}

	// Setter functions...
	void set_len(int l) { length = l; }
	void set_wid(int w) { width = w; }

	// Getter functions
	int get_len() { return length; }
	int get_wid() { return width; }

	// Area Function
	int Area()
	{
		int area = length *width;
		return area;
	}
};

 class Shape_2D : public Shapes
 {
 public:
	 // Area Function
	 int Area(int l,int w)
	 {
		 int area = l *w;
		 return area;
	 }
 };

 class Shape_3D : public Shapes
 {
 public:
	 // Area Function
	 int Area(int l, int w)
	 {
		 int area = l *w;
		 return area;
	 }

	 // Volume function
	 int Volume(int l, int w, int h)
	 {
		 int vol = l*w*h;
		 return vol;
	 }
 };

 class Circle :public Shape_2D
 {
	 int radius;
	 string color;
	 
 public:

	 // Setter functions...
	 void set_radius(int r) { radius = r; }
	 void set_color(string c) { color = c; }

	 // Getter functions
	 int get_radius() { return radius; }
	 string get_color() { return color; }


	 int area(int r)
	 {
		 int a = 2 * 3.14*r;
		 return a;
	 }
 };

 class Square :public Shape_2D
 {
	 int side;
	 string color;

 public:

	 // Setter functions...
	 void set_side(int s) { side = s; }
	 void set_color(string c) { color = c; }

	 // Getter functions
	 int get_side() { return side; }
	 string get_color() { return color; }

	 int area(int s)
	 {
		 int a = s*s;
		 return a;
	 }
 };
 class Cube :public Shape_3D
 {
	 int height;
	 int length, width;

 public:

	 // Setter functions...
	 void set_lenC(int l) { length = l; }
	 void set_widC(int w) { width = w; }
	 void set_height(int h) { height = h; }

	 // Getter functions
	 int get_lenC() { return length; }
	 int get_widC() { return width; }
	 int get_height() { return height; }

	 // Area Function
	 int Area(int l, int w)
	 {
		 int area = l *w;
		 return area;
	 }
	 // Volume function
	 int Volume(int l, int w, int h)
	 {
		 int vol = l*w*h;
		 return vol;
	 }
 };
 class Pyramid :public Shape_3D
 {
	 int height;
	 int base;

 public:

	 // Setter functions...
	 void set_base(int b) { base = b; }
	 void set_height(int h) { height = h; }

	 // Getter functions...
	 int get_base() { return base; }
	 int get_height() { return height; }

	 // Area Function...
	 int Area(int l, int w)
	 {
		 int area = l *w;
		 return area;
	 }
	 // Volume function...
	 int Volume(int l, int w, int h)
	 {
		 int vol = l*w*h;
		 return vol;
	 }
 };