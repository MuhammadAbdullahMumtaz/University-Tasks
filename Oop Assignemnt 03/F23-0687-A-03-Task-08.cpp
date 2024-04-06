//#include<iostream>
//using namespace std;
//class Account {// class of home accounts that have some banking behaviors..
//	double balance;
//	double interestRate;
//	double interest;
//	int transections;
//	static int count;
//public:// some public function in the class to excess them out of class...
//	Account() {
//		balance = 0;
//		interestRate = 4.5;
//		interest = 0;
//		transections = 0;
//	}
//	void setInterestRate(double inter) {// setting the interest rate ...
//		interestRate = inter;
//	}
//	void makeDeposit(double add) {// make the deposit by setting the vales...
//		balance += add;
//	}
//	void addTransection() {// add transection in the class..
//		transections++;
//	}
//	void withDraw(double withdraw) {//error handel and make changes in the withdraw function of the class..
//		if (withdraw > balance)
//			cout << "Error : The entered amount is greater then stored amount." << endl;
//		else
//			balance -= withdraw;
//	}
//	void calcInterest() {// claculating the interest rate of account...
//		interest = (balance / 100)*interestRate;
//		balance += interest;
//	}
//	static int getCount() {// static counter tat return  the count for how many times it called...
//		return count;
//	}
//	void incCount() {// incrimenting the counter..
//		count++;
//	}
//	// some functions that are getting values using const for not to change them in the values...
//	double getIniterestRate() const {
//		return interestRate;
//	}
//	double getBalance() const {
//		return balance;
//	}
//	double getInterest() const {
//		return interest;
//	}
//	int getTransections() const {
//		return transections;
//	}
//};
//int Account::count = 0;// initializing the counter variable..
//int main()
//{
//	Account a1;
//	while (true)// menu driver program..
//	{
//		int choiceCount = 0;
//		char choice;
//		cout << "MENU" << endl;
//		cout << "-----------------------------------------------" << endl;
//		cout << "A) Display the Account Balance." << endl;
//		cout << "B) Display the number of transections." << endl;
//		cout << "C) Display interest Earned for this period." << endl;
//		cout << "D) Make a Deposit." << endl;
//		cout << "E) Make a Withdraw." << endl;
//		cout << "F) Add interest for this period." << endl;
//		cout << "G) Exit the program." << endl << endl;
//		cout << "Number of amount the program has taken choices : " << a1.getCount() << endl;
//		cout << "Enter your choice : ";
//		cin >> choice;
//		if (choice == 'A' || choice == 'a')
//		{
//			cout << "The current Balance is : $" << a1.getBalance() << endl;
//		}
//		else if (choice == 'B' || choice == 'b')
//		{
//			cout << "There have been " << a1.getTransections() << " Transections ." << endl;
//		}
//		else if (choice == 'C' || choice == 'c')
//		{
//			cout << "Intersted earned for the period is : " << a1.getInterest() << endl;
//		}
//		else if (choice == 'D' || choice == 'd')
//		{
//			cout << "Enter the amount of Deposit : ";
//			double deposit;
//			cin >> deposit;
//			a1.makeDeposit(deposit);
//			a1.addTransection();
//		}
//		else if (choice == 'E' || choice == 'e')
//		{
//			cout << "Enter the amount of Withdraw :";
//			double withdraw;
//			cin >> withdraw;
//			a1.withDraw(withdraw);
//			a1.addTransection();
//		}
//		else if (choice == 'F' || choice == 'f')
//		{
//			a1.calcInterest();
//			cout << "Interest added ." << endl;
//		}
//		else if (choice == 'G' || choice == 'g')
//		{
//			break;// ending the choice..
//		}
//		a1.incCount();
//	}
//	system("pause");
//	return 0;
//}
