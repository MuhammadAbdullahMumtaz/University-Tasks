//#include<iostream>
//using namespace std;
//class Time {
//	int hour, minute, second;
//public:
//	Time() {
//		hour = minute = second = 0;
//	}
//	Time(int h,int m,int s) {
//		hour = h;
//		minute = m;
//		second = s;
//	}
//	void Display() {
//		if (hour >= 12)hour -= 12;
//
//		if (second >= 60) { 
//			++minute; 
//			second -= 60;
//		}
//		if (minute >= 60) {
//			++hour;
//			minute -= 60;
//		}
//		cout << hour << ":" << minute << ":" << second << endl;
//	}
//	Time& Add(Time t1, Time t2) {
//		hour = t1.hour + t2.hour;
//		minute = t1.minute + t2.minute;
//		second = t1.second + t2.second;
//		return *this;
//	}
//};
//int main() {
//	const Time t1(12, 51, 59), t2(1, 2, 25);
//	Time t3;
//	t3.Add(t1, t2);
//	t3.Display();
//
//	system("pause");
//	return 0;
//}