#include<iostream>
using namespace std;
class TestScore {
	int *ptr;
	int  num;
	float avg;
public:

		TestScore() {
			cout << "Enter the the number of test scores you want to add : ";
			cin >> num;
			ptr = new int[num];
	}
		float& Average() {
			for (int i = 0; i < num; i++) {
				avg += ptr[i];
			}
			avg /= num;
			return  avg;
	}
		void Input() {
			for (int i = 0; i < num; i++) {
				cout << "Enter score " << i + 1 << " : ";
				cin >> ptr[i];
			}
	}
		void Display() {
			for (int i = 0; i < num; i++) {
				cout << "Score " << i + 1 << " is : " << ptr[i] << endl;
			}
	}
		~TestScore() {
			delete[] ptr;
			cout << "Destructor called.." << endl;
	}
};
int main()
{
	TestScore t1;// creating object...
	t1.Input();
	t1.Display();
	cout << "the average of the test scores is : " << t1.Average() << endl;
	TestScore t2(t1);// copy constructor..
	t2.Input();
	t2.Display();
	cout << "the average of the test scores is : " << t2.Average() << endl;
	t2.~TestScore();// calling destructor...
	system("pause");
	return 0;
}