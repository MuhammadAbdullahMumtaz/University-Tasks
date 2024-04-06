//#include<iostream>
//using namespace std;
//class Example {
//	int data;
//	static int count;
//public:
//	/* As the member function is not const so that 
//	it is also the correct way to initialize data member
//	and in body it is also possible... */
//	Example(int y=10):data(y){}
//
//	int getIncrementedData()const {
//		/* const data member functions should
//		not allow to manuplate with data members 
//		so that it shows an error statement to the 
//		data variable...*/
//		return ++data;
//	}
//	static int getCount() {
//		/* Limitations
//		static function are not allowed to access
//		non static data members and non static functions
//		int its body ...*/
//		cout << "Data is : " << data << endl;
//		return count;
//	}
//};