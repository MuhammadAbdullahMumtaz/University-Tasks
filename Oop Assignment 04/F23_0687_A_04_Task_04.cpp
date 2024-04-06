//#include<iostream>
//#include<string>
//#include<Windows.h>
//
//using namespace std;
//
//class Person
//{
//protected:
//	string Name;
//	int Age;
//	string CNIC;
//	string Contact_number;
//
//public:
//
//	// Default constrctor...
//	Person() {
//		Name = CNIC = Contact_number = " ";
//		Age = 0;
//	}
//
//	// Parametrized constructor...
//	Person(Person& obj) {
//		this->Age = obj.Age;
//		this->CNIC = obj.CNIC;
//		this->Contact_number = obj.Contact_number;
//		this->Name = obj.Name;
//	}
//
//	// set person values...
//	void set_Person() {
//		cout << "Enter name : ";
//		cin.ignore();
//		getline(cin, Name);
//		cout << "Enter CNIC  : ";
//		getline(cin, CNIC);
//		cout << "Enter age : ";
//		cin >> Age;
//		cout << "Enter Contact number : ";
//		cin.ignore();
//		getline(cin, Contact_number);
//	}
//
//	// displaying the values of the person...
//	void display_Person() {
//		cout << "Name : " << Name << endl;
//		cout << "CNIC : " << CNIC << endl;
//		cout << "Age : " << Age << endl;
//		cout << "Contact : " << Contact_number << endl;
//	}
//
//	// Getter functions...
//	string get_Name() { return Name; }
//	int get_Age() { return Age; }
//
//};
//class Teacher : public Person
//{
//	int Emp_ID;
//	string Course;
//	string Salary;
//
//public:
//
//	// Default constructor...
//	Teacher() : Person()
//	{
//		Course = Salary = "";
//		Emp_ID = 0;
//	}
//
//	// Parametrized constructor...
//	Teacher(Teacher& obj) :Person(obj) {
//		this->Emp_ID = obj.Emp_ID;
//		this->Salary = obj.Salary;
//		this->Course = obj.Course;
//	}
//
//	// Set_teacher
//	void set_Teacher() {
//		set_Person();
//		cout << "Enter EMID : ";
//		cin >> Emp_ID;
//		cout << "Enter your course : ";
//		cin.ignore();
//		getline(cin, Course);
//		cout << "Enter your Salary : ";
//		cin.ignore();
//		getline(cin, Salary);
//	}
//
//	// creating new student...
//	void create_teacher(Teacher* ptr, int index) {
//		ptr[index].set_Teacher();
//	}
//
//	// displaying values..
//	void display_teacher() {
//		display_Person();
//		cout << "EMPID  : " << Emp_ID << endl;
//		cout << "Course : " << Course << endl;
//		cout << "Salary : " << Salary << endl;
//	}
//
//};
//class Student : public Person
//{
//	float CGPA;
//	string Degree, Roll_no;
//
//public:
//
//	// Default constructor..
//	Student() :Person()
//	{
//		CGPA = 0.0;
//		Degree = Roll_no = "";
//	}
//
//	// Parametrized constructor...
//	Student(Student& obj) :Person(obj) 
//	{
//		this->CGPA = obj.CGPA;
//		this->Degree = obj.Degree;
//		this->Roll_no = obj.Roll_no;
//	}
//
//	// creating new student...
//	void create_student(Student* ptr, int index) {
//		ptr[index].set_Person();
//	}
//
//	// setter function...
//	void set_Student() {
//		set_Person();
//		cout << "Enter Degree : ";
//		cin.ignore();
//		getline(cin, Degree);
//		cout << "Enter your CGPA : ";
//		cin >> CGPA;
//		cout << "Enter your roll no : ";
//		cin.ignore();
//		getline(cin, Roll_no);
//	}
//
//	// Display student...
//	void display_student() {
//		display_Person();
//		cout << "Roll no : " << Roll_no << endl;
//		cout << "CGPA    : " << CGPA << endl;
//		cout << "Course  : " << Degree << endl;
//
//	}
//	// Getter functions...
//	float get_GPA() { return CGPA; }
//	string get_Rollno() { return Roll_no; }
//
//	// some other functions..
//	void searchname(Student* ptr, string nam, int siz)
//	{
//		bool x = false;
//		for (int i = 0; i < siz; i++) {
//			if (ptr[i].get_Name() == nam) {
//				cout << "Student detail" << endl;
//				ptr[i].display_student();
//				cout << endl;
//				x = true;
//				break;
//			}
//		}
//		if (x == false) {
//			cout << endl << "Student do not exist of this name " << endl;
//		}
//	}
//	void searchrollno(Student* ptr, string rol, int siz)
//	{
//		bool x = false;
//		for (int i = 0; i < siz; i++) {
//			if (ptr[i].get_Rollno() == rol) {
//				cout << "Student detail" << endl;
//				ptr[i].display_student();
//				cout << endl;
//				x = true;
//				break;
//			}
//		}
//		if (x == false) {
//			cout << endl <<  "Student do not exist of this Rollno " << endl;
//		}
//	}
//	void searchage(Student* ptr, int n, int siz)
//	{
//		bool x = false;
//		for (int i = 0; i < siz; i++) {
//			if (ptr[i].get_Age() == n) {
//				cout << "Student detail" << endl;
//				ptr[i].display_student();
//				cout << endl;
//				x = true;
//			}
//		}
//		if (x == false) {
//			cout << endl << "No age of this student exit " << endl;
//		}
//	}
//	void lesscgpa(Student* ptr, double n, int siz)
//	{
//		bool x = false;
//		for (int i = 0; i < siz; i++) {
//			if (ptr[i].get_GPA() < n) {
//				cout << "Student detail" << endl;
//				ptr[i].display_student();
//				cout << endl;
//				x = true;
//			}
//		}
//		if (x == false) {
//			cout << endl << "No studentlesser than this CGPA exit" << endl;
//		}
//	}
//	void greatercgpa(Student* ptr, double n, int siz)
//	{
//		bool x = false;
//		for (int i = 0; i <siz; i++) {
//			if (ptr[i].get_GPA() > n) {
//				cout << "Student detail" << endl;
//				ptr[i].display_student();
//				cout << endl;
//			}
//		}
//		if (x == false) {
//			cout << endl << "No student lesser than this CGPA exit" << endl;
//		}
//	}
//};
//struct Login
//{
//	int ID;
//	string Password;
//};
//int main()
//{
//	Login l;
//	l.ID = 123;
//	l.Password = "Admin";
//	int id=0;
//	bool start = false;
//	while (id != 123) {
//		cout << "Enter ID : ";
//		cin >> id;
//		if (id == l.ID)
//		{
//			string s;
//			cout << "Enter Password : ";
//			cin.ignore();
//			getline(cin, s);
//			if (s == l.Password) { start = true; break; }
//			else
//			{
//				id = 0;
//				cout << "Cradentials not correct!" << endl;
//			}
//		}
//		else cout << "Cradentials not correct!" << endl;
//	}
//
//	char choice;
//	int Teacher_Size, student_Size, index;
//	int Teacher_Counter = 0, student_Counter = 0;
//	string S_name;
//	double S_cgpa;
//	int S_age;
//	cout << "Enter the size of the database for teacher : ";
//	cin >> Teacher_Size;
//	cout << "Enter the size of database for student : ";
//	cin >> student_Size;
//	Student* ptr;
//	Teacher* arr;
//	ptr = new Student[student_Size];
//	arr = new Teacher[Teacher_Size];
//
//	while (start)
//	{
//		cout << "1. Add student : " << endl;
//		cout << "2. Add Teacher : " << endl;
//		cout << "3. Modify student : " << endl;
//		cout << "4. Modify teacher : " << endl;
//		cout << "5. Search with name : " << endl;
//		cout << "6. Search with Roll No. : " << endl;
//		cout << "7. Search all students with specified age : " << endl;
//		cout << "8. Search all students with less specified CGPA : " << endl;
//		cout << "9. Search all students with specified greater CGPA :" << endl;
//		cout << "10. E to exit " << endl << endl;
//		cout << "Enter choice : ";
//		cin >> choice;
//
//		if (choice == '1') 
//		{
//			cout << "Enter detail of Student " << student_Counter + 1 << " : " << endl;
//			ptr[student_Counter].set_Student();
//			student_Counter++;
//			/*Sleep(3000);
//			system("CLS");*/
//		}
//		else if (choice == '2') 
//		{
//			cout << "Enter detail of Teacher " << Teacher_Counter + 1 <<" : " << endl;
//			arr[Teacher_Counter].set_Teacher();
//			Teacher_Counter++;
//			/*Sleep(3000);
//			system("CLS");*/
//		}
//		else if (choice == '3')
//		{
//			cout << "Enter index of student in Data base which you want to Modify : ";
//			cin >> index;
//			if (index< 0 || index>(student_Counter + 1))
//			{
//				cout << "This student is not exist in the database  : " << endl;
//				/*Sleep(3000);
//				system("CLS");*/
//			}
//			else
//			{
//				cout << "Enter updated values of student : " << endl << endl;
//				ptr[index].set_Student();
//				/*Sleep(3000);
//				system("CLS");*/
//			}
//		}
//		else if (choice == '4')
//		{
//			cout << "Enter index of Teacher in data base you want to Modify : ";
//			cin >> index;
//			if (index< 0 || index>(Teacher_Counter + 1))
//			{
//				cout << "Teacher does not exist in Data base  : " << endl;
//				/*Sleep(3000);
//				system("CLS");*/
//			}
//			else
//			{
//				cout << "Enter updated valuse of Teacher : " << endl << endl;
//				arr[index].set_Teacher();
//				/*Sleep(3000);
//				system("CLS");*/
//			}
//		}
//		else if (choice == '5')
//		{
//			if (student_Counter == 0)
//			{
//				cout << "Add student in Database than -Serach it- " << endl;
//			}
//			else
//			{
//				cout << "Enter name : ";
//				cin.ignore();
//				getline(cin, S_name);
//				ptr[0].searchname(ptr, S_name, student_Counter);
//				cout << endl;
//				/*Sleep(3000);
//				system("CLS");*/
//			}
//		}
//		else if (choice == '6')
//		{
//			cout << "Enter Roll NO. : ";
//			cin.ignore();
//			getline(cin, S_name);
//			ptr[0].searchrollno(ptr, S_name, student_Counter);
//			cout << endl;
//			/*Sleep(3000);
//			system("CLS");*/
//		}
//		else if (choice == '7') 
//		{
//			cout << "Enter Specified age : ";
//			cin >> S_age;
//			ptr[0].searchage(ptr, S_age, student_Counter);
//			cout << endl;
//			/*Sleep(3000);
//			system("CLS");*/
//		}
//		else if (choice == '8')
//		{
//			cout << "Enter Specified CGPA : ";
//			cin >> S_cgpa;
//			ptr[0].lesscgpa(ptr, S_cgpa, student_Counter);
//			cout << endl;
//			/*Sleep(3000);
//			system("CLS");*/
//		}
//		else if (choice == '9')
//		{
//			cout << "Enter Specified CGPA : ";
//			cin >> S_cgpa;
//			ptr[0].greatercgpa(ptr, S_cgpa, student_Counter);
//			cout << endl;
//			/*Sleep(3000);
//			system("CLS");*/
//		}
//		else if (choice == 'E' || choice == 'e')
//		{
//			cout << endl << "              Thanks for using code " << endl;
//			break;
//		}
//		else
//		{
//			cout << "Wrong input" << endl << "Again  Enter !" << endl;
//			/*Sleep(3000);
//			system("CLS");*/
//		}
//	}
//
//	system("pause");
//	return 0;
//}