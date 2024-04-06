//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class My_Father
//{
//	string Name;
//	string Eye_color;
//	string Hair_color;
//
//public:
//
//	// Constructor...
//	My_Father()
//	{
//		Name = Eye_color = Hair_color = "";
//	}
//	// Destructor...
//	~My_Father(){}
//
//	// Setter functions...
//	void set_Name(string name) { Name = name; }
//	void set_Eye_color(string eye) { Eye_color = eye; }
//	void set_Hair_color(string hair) { Hair_color = hair; }
//
//	// Getter funcions...
//	string get_name() { return Name; }
//	string get_Eye_color() { return Eye_color; }
//	string get_Hair_color() { return Hair_color; }
//
//	// Print function for father...
//	void Print()
//	{
//		cout << "The name of father is : " << Name << endl;
//		cout << "The eye color of father is : " << Eye_color << endl;
//		cout << "The hair color of father is : " << Hair_color << endl;
//	}
//};
//class My_Mother
//{
//	string Name;
//	string Eye_color;
//	string Hair_color;
//
//public:
//
//	// Constructor...
//	My_Mother()
//	{
//		Name = Eye_color = Hair_color = "";
//	}
//	// Destructor...
//	~My_Mother() {}
//
//	// Setter functions...
//	void set_NameM(string name) { Name = name; }
//	void set_Eye_colorM(string eye) { Eye_color = eye; }
//	void set_Hair_colorM(string hair) { Hair_color = hair; }
//
//	// Getter funcions...
//	string get_nameM() { return Name; }
//	string get_Eye_colorM() { return Eye_color; }
//	string get_Hair_colorM() { return Hair_color; }
//
//	// Print function for mother...
//	void Print()
//	{
//		cout << "The name of mother is : " << Name << endl;
//		cout << "The eye color of mother is : " << Eye_color << endl;
//		cout << "The hair color of mother is : " << Hair_color << endl;
//	}
//};
//class My_Sister : public My_Father, public My_Mother
//{
//	string Education;
//	int age;
//
//public:
//
//	// constructor...
//	My_Sister()
//	{
//		Education = "";
//		age = 0;
//	}
//	// Destructor...
//	~My_Sister(){}
//
//	// Setter functions...
//	void set_Education(string edu) { Education = edu; }
//	void set_Age(int a) { age = a; }
//
//	// Getter funcions...
//	string get_Education() { return Education; }
//	int get_Age() { return age; }
//
//	// Print function for sister...
//	void Print()
//	{
//		cout << "The education of sister is : " << Education << endl;
//		cout << "The age of sister is : " << age << endl;
//	}
//};
//class My_Self : public My_Father
//{
//	string Education;
//	int age;
//
//public:
//
//	My_Self()
//	{
//		Education = "";
//		age = 0;
//	}
//	// Destructor...
//	~My_Self() {}
//
//	// Setter functions...
//	void set_Education(string edu) { Education = edu; }
//	void set_Age(int a) { age = a; }
//
//	// Getter funcions...
//	string get_Education() { return Education; }
//	int get_Age() { return age; }
//
//	// Print function for sister...
//	void Print()
//	{
//		cout << "The education of myself is : " << Education << endl;
//		cout << "The age of myself is : " << age << endl;
//	}
//};
//
//int main()
//{
//	My_Sister sis;
//	My_Self self;
//	string str_data;
//	cout << "Enter the name of Mother : ";
//	getline(cin, str_data);
//	sis.set_NameM(str_data);
//
//	cout << "Enter the name of Father : ";
//	getline(cin, str_data);
//	sis.set_Name(str_data);
//	self.set_Name(str_data);
//
//	cout << "Enter the eye color of Mother : ";
//	getline(cin, str_data);
//	sis.set_Eye_colorM(str_data);
//
//	cout << "Enter the eye color of Father : ";
//	getline(cin, str_data);
//	sis.set_Eye_color(str_data);
//	self.set_Eye_color(str_data);
//
//	cout << "Enter the hair color of Mother : ";
//	getline(cin, str_data);
//	sis.set_Hair_colorM(str_data);
//
//	cout << "Enter the hair color of Father : ";
//	getline(cin, str_data);
//	sis.set_Hair_color(str_data);
//	self.set_Hair_color(str_data);
//
//	cout << "Enter the education of sister : ";
//	getline(cin, str_data);
//	sis.set_Education(str_data);
//    
//	int ag;
//	cout << "Enter the age of sister : ";
//	cin >> ag;
//	sis.set_Age(ag);
//
//	cout << endl << "The Results..." << endl;
//	sis.My_Father::Print();
//	sis.My_Mother::Print();
//	sis.Print();
//
//
//	cout << "Enter the education of myself : ";
//	cin.ignore();
//	getline(cin, str_data);
//	self.set_Education(str_data);
//
//	cout << "Enter the age of myself : ";
//	cin >> ag;
//	self.set_Age(ag);
//
//	cout << endl << "The Results..." << endl;
//	self.My_Father::Print();
//	self.Print();
//
//	system("pause");
//	return 0;
//}