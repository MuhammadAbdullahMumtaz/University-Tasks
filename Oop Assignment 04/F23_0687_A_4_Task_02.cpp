//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Persondata {
//protected:
//	string FirstName;
//	string LastName;
//	string Address;
//	string City;
//	string State;
//	string Zip;
//	string Phone;
//
//	//setter Functions..
//	void setF_Name(string name1) { FirstName = name1; }
//	void setL_Name(string name2) { LastName = name2; }
//	void setAddress(string add) { Address = add; }
//	void set_City(string city) { City = city; }
//	void set_State(string state) { State = state; }
//	void set_Zip(string zip) { Zip = zip; }
//	void set_Phone(string phone) { Phone = phone; }
//
//	//Getter Functions
//	string getF_Name() { return FirstName; }
//	string getL_Name() { return LastName; }
//	string getAddress() { return Address; }
//	string get_City() { return City; }
//	string get_State() { return State; }
//	string get_Zip() { return Zip; }
//	string get_Phone() { return Phone; }
//
//};
//
//class CustomerData :private Persondata
//{
//	int CustomerNumber;
//	bool MailingList;
//
//public:
//
//	void InputCustomerData()
//	{
//		string temp;
//		char inp;
//		cout << "Enter the First Name of the person : ";
//		getline(cin, temp);
//		setF_Name(temp);
//		cout << "Enter the Last Name of the person : ";
//		getline(cin, temp);
//		setL_Name(temp);
//		cout << "Enter the Address of the person : ";
//		getline(cin, temp);
//		setAddress(temp);
//		cout << "Enter the City of the person : ";
//		getline(cin, temp);
//		set_City(temp);
//		cout << "Enter the State of the person : ";
//		getline(cin, temp);
//		set_State(temp);
//		cout << "Enter the Zip of the person : ";
//		getline(cin, temp);
//		set_Zip(temp);
//		cout << "Enter the Phone number of the person : ";
//		getline(cin, temp);
//		set_Phone(temp);
//		cout << "Enter the customer Number : ";
//		cin >> CustomerNumber;
//		cout << "Enter for Mailing List x(true) y(false): ";
//		cin >> inp;
//		if (inp == 'x') MailingList = 1;
//		else  MailingList = 0;
//
//	}
//
//	void DisplayCustomerdata()
//	{
//		cout << endl << "First name : " << getF_Name() << endl;
//		cout << "Last Name : " << getL_Name() << endl;
//		cout << "Address : " << getAddress() << endl;
//		cout << "City name : " << get_City() << endl;
//		cout << "State Name : " << get_State() << endl;
//		cout << "Zip : " << get_Zip() << endl;
//		cout << "Phone Number : " << get_Phone() << endl;
//		cout << "Customer Number : " << CustomerNumber << endl; 
//
//		if (MailingList) cout << "Mailing list found soon ..." << endl;
//
//		else cout << "No need for mailing list..." << endl;
//	}
//
//};
//
//int main()
//{
//	CustomerData obj;
//	obj.InputCustomerData();
//	obj.DisplayCustomerdata();
//
//	system("pause");
//	return 0;
//}
//
