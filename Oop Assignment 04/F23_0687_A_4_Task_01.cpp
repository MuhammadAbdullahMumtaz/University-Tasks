//#include<iostream>
//
//using namespace std;
//
//class Base 
//{
//private:
//	int x;
//protected:
//	int y;
//public:
//	int z;
//
//	// when it inherited Default constructor requires only one that is below...
//	 /*  Base()
//	   {
//		   x = y = z = 0;
//	   }*/
//
//    // Parametrized Constructor...
//	   Base(int X=1, int Y=2, int Z=3)
//	   {
//		   x = X;
//		   y = Y;
//		   z = Z;
//	   }
//
//	// Display to show the values set in base class...
//	   void Display()
//	   {
//		   cout << "Value of x in base class : " << x << endl;
//		   cout << "Value of y in base class : " << y << endl;
//		   cout << "Value of z in base class : " << z << endl << endl;
//	   }
//};
//
//class Intermediate : public Base
//{
//	int X;
//protected:
//	int Y;
//public:
//	int Z;
//
//	// when it inherited Default constructor requires only one that is below...
//	/*Intermediate()
//	{
//		X = Y = Z = 0;
//	}*/
//
//	// Parametrized Constructor...
//	Intermediate(int Xb, int Yb, int Zb,int x, int y, int z):Base(Xb,Yb,Zb)
//	{
//		X = x;
//		Y = y;
//		Z = z;
//	}
//
//	// Display to show the values set in Intermediate class...
//	void Display()
//	{
//		cout << "Value of x of base class in inaccessable : " << endl;
//		cout << "Value of y from base class : " << y << endl;
//		cout << "Value of z from base class : " << z << endl << endl;
//		cout << "Value of x in Intermediate class : " << X << endl;
//		cout << "Value of y in Intermediate class : " << Y << endl;
//		cout << "Value of z in Intermediate class : " << Z << endl << endl;
//	}
//
//	// Display All the values through calling function in a sequence...
//	void Display_All()
//	{
//		Base::Display();
//		cout << "Value of x in Intermediate class : " << X << endl;
//		cout << "Value of y in Intermediate class : " << Y << endl;
//		cout << "Value of z in Intermediate class : " << Z << endl << endl;
//	}
//};
//
//class Derived : public Intermediate
//{
//	int Xx;
//protected:
//	int Yy;
//public:
//	int Zz;
//
//	// when it inherited Default constructor requires only one that is below...
//	//Derived()
//	//{
//	//	Xx = Yy = Zz = 0;
//	//}
//
//	// Parametrized Constructor...
//	Derived(int X = 1, int Y = 2, int Z = 3,int x = 4, int y = 5, int z = 6,int xx=7,int yy=8,int zz =9) :Intermediate(X,Y,Z,x,y,z)
//	{
//		Xx = xx;
//		Yy = yy;
//		Zz = zz;
//	}
//
//	// Display to show the values set in Intermediate class...
//	void Display()
//	{
//		cout << "Value of x of base class is inaccessable in derived : " << endl;
//		cout << "Value of y from base class : " << y << endl;
//		cout << "Value of z from base class : " << z << endl << endl;
//		cout << "Value of x of Intermediate class in inaccessable in derived : " << endl;
//		cout << "Value of y in Intermediate class : " << Y << endl;
//		cout << "Value of z in Intermediate class : " << Z << endl << endl;
//		cout << "Value of x in derived class : " << Xx << endl;
//		cout << "Value of y in derived class : " << Yy << endl;
//		cout << "Value of z in derived class : " << Zz << endl << endl;
//	}
//
//	// Display All the values through calling function in a sequence...
//	void Display_All()
//	{
//		Intermediate::Display_All();
//		cout << "Value of x in derived class : " << Xx << endl;
//		cout << "Value of y in derived class : " << Yy << endl;
//		cout << "Value of z in derived class : " << Zz << endl << endl;
//	}
//};
//
//int main()
//{
//	Derived D;
//	D.Display();
//	cout << "Getting Values through functions...." << endl;
//	D.Display_All();
//	system("pause");
//}