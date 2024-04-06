//#include<iostream>
//#include<conio.h>
//#include<Windows.h>
//using namespace std;
//class tollBooth {// toll booth class contain some public and private variables...
//
//	unsigned int TotalCars;
//	double amount;
//public:
//	tollBooth(unsigned int ToCars, double a) {// constructor initialization..
//		TotalCars = ToCars;
//		amount = a;
//	}
//	void payingcars() {// functions to claculate the paying cars..
//		TotalCars++;
//		amount += 0.50;
//	}
//	void nopaycars() {// functions to claculate the non paying cars..
//		TotalCars++;
//	}
//	void Display(int pay, int nopay) {// functions to display the paying cars and non paying cars..
//		cout << " Total numbers of cars are : " << TotalCars << endl;
//		cout << " cars that pay : " << pay << endl;
//		cout << " cars that do not pay : " << nopay << endl;
//		cout << " Total amount of cars collected is : " << amount << endl;
//	}
//};
//int main()
//{
//	tollBooth t1(0, 0);
//	char car;
//	int pay = 0, nopay = 0;
//	while (true) {// menu driver function...
//
//		cout << " Enter 1 for paying car and 2 for non paying cars and esc for quit :";
//
//		car = _getch();
//		 
//		if (car == '1') {
//			cout << car << endl;
//			cout << " Car pass with pay " << endl;
//			t1.payingcars();
//			pay++;
//			Sleep(500);
//			system("CLS");
//		}
//		else if (car == '2') {
//			cout << car << endl;
//			cout << " Car pass with No pay " << endl;
//			t1.nopaycars();
//			nopay++;
//			Sleep(500);
//			system("CLS");
//		}
//		else if (car == 27) {
//			cout << endl;
//			t1.Display(pay, nopay);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}