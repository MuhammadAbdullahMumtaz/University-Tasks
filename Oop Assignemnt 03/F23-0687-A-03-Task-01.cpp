//#include<iostream>
//#include<string>
//#include<iomanip>
//
//using namespace std;
//// student class
//class Student {
//	string Name;
//	const string CNIC;
//	const char gender;
//	float CGPA;
//
//public:
//
//	Student() : CNIC("XXXXX-XXXXXXX-X"), gender('X') 
//	{
//		Name = "";
//		CGPA = 0;
//	}
//	// parametrized constructor for class
//	Student(string &name, string &cnic, char &gen, float &cgpa) : CNIC(cnic), gender(gen) 
//	{
//		Name = name;
//		CGPA = cgpa;
//	}
//	// setter functions
//	void setName(string name) { Name = name; }
//	void setCGPA(float cgp) { CGPA = cgp; }
//	// getters functions
//	string getName() const { return Name; }
//	string getCNIC() const { return CNIC; }
//	char getGender() const { return gender; }
//	float getCGPA()const { return CGPA; }
//
//};
//class Section {
//	string S_Name;
//	string ClassTeacher;
//	Student **studentarr;
//
//public:
//
//	int num;// public variable
//	// constructor...
//	Section()
//	{
//		S_Name = ClassTeacher = "";
//		studentarr = nullptr;
//		num = 0;
//	}
//
//	void EditSection(string SecName, string TeacherName) 
//	{
//		S_Name = SecName;
//		ClassTeacher = TeacherName;
//	}
//	void addStudent(string name, string CNIC, char gender, float number)
//	{
//		Student** newStu = new Student *[num + 1];
//		for (int i = 0; i < num; i++)
//			newStu[i] = studentarr[i];
//
//		newStu[num] = new Student(name, CNIC, gender, number);
//		num++;
//		// delete []student;
//		studentarr = newStu;
//	}
//	void UpdateStudent(string nName, float nCGPA, int count)
//	{
//		studentarr[count]->setName(nName);
//		studentarr[count]->setCGPA(nCGPA);
//	}
//	void printStudent()
//	{
//		cout << setw(25) << left << "Name" << setw(25) << "CNIC" << setw(25)
//			<< left << "CGPA" << setw(25) << "Gender" << endl;
//		for (int i = 0; i < num; i++)
//		{
//			cout << i + 1 << ". " << setw(25) << studentarr[i]->getName()
//				<< setw(25) << studentarr[i]->getCGPA()
//				<< setw(25) << studentarr[i]->getCNIC()
//				<< setw(25) << studentarr[i]->getGender() << endl;
//		}
//	}
//
//	string getS_Name() { return S_Name; }
//	string getT_Name() { return ClassTeacher; }
//};
//
//void SectionInp(string& str1, string& str2)
//{
//	cout << "Enter Name for section: ";
//	cin.ignore();
//	getline(cin, str1);
//	cout << "Enter Teacher name: ";
//	getline(cin, str2);
//}
//void StudentInp(string& str1, string& str2, float& CGPA, char& gender, int i)
//{
//	cout << "Enter Name for student " << i + 1 << ": ";
//	getline(cin, str1);
//	cout << "Enter CNIC for student " << i + 1 << ": ";
//	getline(cin, str2);
//	cout << "Enter CGPA for student " << i + 1 << ": ";
//	cin >> CGPA;
//	cout << "Enter Gender(M/F) of student " << i + 1 << ": ";
//	cin >> gender;
//	cin.ignore();
//}
//int main()
//{
//	int section;
//	string str1, str2;
//	int num = 0, count = 0;
//	float CGPA;
//	char gender;
//	cout << "Enter the number of sections you want to create : ";
//	cin >> section;
//	Section *ptr = new Section[section];
//	for (int i = 0; i < section; i++)
//	{
//		SectionInp(str1, str2);
//		ptr[i].EditSection(str1, str2);
//	}
//	while (true)
//	{
//		char input;
//		cout << "1. Edit Section Attributes : " << endl;
//		cout << "2. Add Student in a Section : " << endl;
//		cout << "3. Update Student of the Section : " << endl;
//		cout << "4. Print List of Student in a section : " << endl;
//		cout << "5. Print List of Sections : " << endl;
//		cout << "q. To Exit.." << endl << endl;
//		cin >> input;
//		if (input == '1') {
//			cout << "Enter the section number you want to edit : ";
//			cin >> num;
//			if (num > section)cout << "Error! enter again .." << endl;
//			else 
//			{
//			SectionInp(str1, str2);
//			ptr[num - 1].EditSection(str1, str2);			
//			}
//			cout << "Edited successfully!" << endl;
//		}
//		else if (input == '2') {
//			cout << "Enter the section number to add students : ";
//			cin >> num;
//			cout << "Enter the number to students to add in section " << num << " : ";
//			cin >> count;
//			for (int i = 0; i < count; i++) {
//				cout << "Enter Name of student " << i + 1 << ": ";
//				cin.ignore();
//				getline(cin, str1);
//				cout << "Enter CNIC of student " << i + 1 << ": ";
//				getline(cin, str2);
//				cout << "Enter Gender(M/F) of student " << i + 1 << ": ";
//				cin >> gender;
//				cout << "Enter CGPA of student " << i + 1 << ": ";
//				cin >> CGPA;
//				ptr[i].addStudent(str1, str2, gender, CGPA);
//			}
//				cout << "Data added !" << endl;
//		}
//		else if (input == '3') {
//			int temp;
//			cout << "Enter the section number in which you want to update student : ";
//			cin >> temp;
//			cout << setw(25) << "Name" << setw(25) << "Gender" << setw(25) << "CGPA" << setw(25) << "CNIC" << endl;
//			ptr[temp].printStudent();
//
//			if (ptr[temp].num <= 0)	cout << "No student in this Section to Update!";
//
//			cout << "Enter Number of Student to update: ";
//			cin >> num;
//
//			if (num > ptr[temp].num)cout << "There is no such student!" << endl;
//			
//			cin.ignore();
//			cout << "Enter new Name of student : ";
//			getline(cin, str1);
//			cout << "Enter CGPA for student: ";
//			cin >> CGPA;
//			ptr[temp].UpdateStudent(str1, CGPA, num - 1);
//			cout << "Data for student updated!" << endl;
//		}
//		else if (input == '4') {
//			cout << setw(25)<<left << "Section" << setw(25) << "Teacher Name" << endl;
//			for (int i = 0; i < section; i++)
//			{
//				cout << i + 1 << ". " << ptr[i].getS_Name() << setw(25) << right << ptr[i].getT_Name() << endl;
//			}
//			cout << endl << "Enter section number to see students of that section : ";
//			cin >> num;
//			ptr[num - 1].printStudent();
//			cout << endl;
//		}
//		else if (input == '5') {
//			cout << setw(25) << "Section" << setw(25) << "Teacher Name" << endl;
//			for (int i = 0; i < section; i++)
//			{
//				cout << i + 1 << ". " << ptr[i].getS_Name() << setw(25) << ptr[i].getT_Name() << endl;
//			}
//		}
//		else if (input == 'q')break;
//	}
//	system("pause");
//	return 0;
//}
