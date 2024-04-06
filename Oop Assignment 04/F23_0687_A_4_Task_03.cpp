//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class CustomerData
//{
//	int CustomerNumber;
//	bool MailingList;
//
//public:
//
//	// setter functions...
//	void set_CustomerNumber(int C_n) { CustomerNumber = C_n; }
//	void set_MailingList(bool M_l) { MailingList = M_l; }
//
//	// getter functions...
//	int get_CustomerNumber() { return CustomerNumber; }
//	int get_MailingList() { return MailingList; }
//
//};
//
//class PreferredCustomer : public CustomerData
//{
//	double purchasesAmount;
//	double discountLevel;
//
//public:
//
//	// setter functions...
//	void set_purchasesAmount(double P_a) { purchasesAmount = P_a; }
//	void set_discountLevel(double discount) { discountLevel = discount; }
//
//	// getter functions...
//	int get_purchasesAmount() { return purchasesAmount; }
//	int get_discountLevel() { return discountLevel; }
//
//};
//
//int main()
//{
//	PreferredCustomer P;
//	int c_number;
//	char inp;
//	cout << "Enter the customer Number : ";
//	cin >> c_number;
//	P.set_CustomerNumber(c_number);
//	cout << "Enter for Mailing List x(true) y(false): ";
//	cin >> inp;
//	if (inp == 'x') P.set_MailingList(1);
//	else  P.set_MailingList(0);
//	char start=' ';
//	double amount, total_amount = 0;
//	while (start != 'q')
//	{
//		cout << "1. Enter Amount to add product price : " << endl;
//		cout << "2. Check Discounted result : " << endl;
//		cout << "q. Quit :" << endl;
//		cin >> start;
//		if (start == '1')
//		{
//			cout << "Enter amount : $";
//			cin >> amount;
//			total_amount += amount;
//			P.set_purchasesAmount(total_amount);
//			if (total_amount >= 2000)P.set_discountLevel(10);
//			else if (total_amount >= 1500)P.set_discountLevel(7);
//			else if (total_amount >= 1000)P.set_discountLevel(6);
//			else if (total_amount >= 500)P.set_discountLevel(5);
//		}
//		else if (start == '2')
//		{
//			double total = (P.get_purchasesAmount() / 100)*P.get_discountLevel();
//			cout << "Total amount : $" << P.get_purchasesAmount() << endl;
//			cout << "Total discount : $" << P.get_discountLevel() << endl;
//			cout << "Discounted amount : $" << P.get_purchasesAmount() - total << endl;
//		}
//		else if (start == 'q') break;
//		
//	}
//	system("pause");
//	return 0;
//}