//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Vehical
//{
//	int no_of_tires;
//	int no_of_seats;
//
//public:
//
//	// Constructor...
//	Vehical()
//	{
//		no_of_tires = no_of_seats = 0;
//	}
//
//	// Destructor...
//	~Vehical(){}
//		
//	// Setter functions...
//	void set_tires(int t) { no_of_tires = t; }
//	void set_seats(int s) { no_of_seats = s; }
//
//	// Getter functions...
//	int get_tires() { return no_of_tires; }
//	int get_seats() { return no_of_seats; }
//
//	// Print function...
//	void Print()
//	{
//		cout << "The number of tires is : " << no_of_tires << endl;
//		cout << "The number of seats is : " << no_of_seats << endl;
//	}
//};
//class Car : public Vehical
//{
//	int no_of_Doors;
//	string color;
//
//public:
//
//	// Constructor...
//	Car()
//	{
//		no_of_Doors = 0;
//		color = "";
//	}
//	// Destructor...
//	~Car(){}
//
//	// Setter functions...
//	void set_doors(int d) { no_of_Doors = d; }
//	void set_color(string c) { color = c; }
//
//	// Getter functions...
//	int get_doors() { return no_of_Doors; }
//	string get_color() { return color; }
//
//	// Print function...
//	void Print()
//	{
//		cout << "The number of doors is : " << no_of_Doors << endl;
//		cout << "Thecolor of car is : " << color << endl;
//	}
//
//};
//
//class Vitz : public Car
//{
//	string size;
//	string modal;
//	string no_plate;
//
//public:
//
//	// Constructor...
//	Vitz()
//	{
//		size = modal = no_plate = "";
//	}
//	// Destructor...
//	~Vitz(){}
//
//	// Setter functions...
//	void set_size(string s) { size = s; }
//	void set_modal(string m) { modal = m; }
//	void set_plate_no(string p) { no_plate = p; }
//
//	// Getter functions...
//	string get_size() { return size; }
//	string get_modal() { return modal; }
//	string get_plate_no() { return no_plate; }
//
//	// Print function...
//	void Print()
//	{
//		Vehical::Print();
//		Car::Print();
//		cout << "The size of car is : " << size << endl;
//		cout << "The modal number of car is : " << modal << endl;
//		cout << "The number plate of car is : " << no_plate << endl;
//	}
//
//};
//int main()
//{
//	Vitz v;
//	int num_passing;
//	string str_passing;
//	cout << "Enter the no. of tires : ";
//	cin >> num_passing;
//	v.set_tires(num_passing);
//	cout << "Enter the size of car : ";
//	cin.ignore();
//	getline(cin, str_passing);
//	v.set_size(str_passing);
//	cout << "Enter the no. of seats : ";
//	cin >> num_passing;
//	v.set_seats(num_passing);
//	cout << "Enter the color of car : ";
//	cin.ignore();
//	getline(cin, str_passing);
//	v.set_color(str_passing);
//	cout << "Enter the modal of car : ";
//	getline(cin, str_passing);
//	v.set_modal(str_passing);
//	cout << "Enter the plate number of car : ";
//	getline(cin, str_passing);
//	v.set_plate_no(str_passing);
//	v.Print();
//	system("pause");
//	return 0;
//}