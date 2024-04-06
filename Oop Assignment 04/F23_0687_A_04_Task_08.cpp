//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//class Point 
//{
//	int *dimension;
//	int Size;
//	float Distance;
//
//public:
//
//	Point(int size)
//	{
//		Size = size;
//		dimension = new int[Size];
//		for (int i = 0; i < Size; i++) 
//		{
//			cout << "Dimension" << i + 1 << " : ";
//			cin >> dimension[i];
//		}
//	}
//	Point(int size, int x, int y)
//	{
//		Size = size;
//		dimension = new int[size];
//		dimension[0] = x;
//		dimension[1] = y;
//	}
//	Point(int size, int x, int y, int z)
//	{
//		Size = size;
//		dimension = new int[size];
//		dimension[0] = x;
//		dimension[1] = y;
//		dimension[2] = z;
//	}
//	Point(int size, int w, int x, int y, int z)
//	{
//		Size = size;
//		dimension = new int[size];
//		dimension[0] = w;
//		dimension[1] = x;
//		dimension[2] = y;
//		dimension[3] = z;
//	}
//	Point(int size, int v, int w, int x, int y, int z)
//	{
//		Size = size;
//		dimension = new int[size];
//		dimension[0] = v;
//		dimension[1] = w;
//		dimension[2] = x;
//		dimension[3] = y;
//		dimension[4] = z;
//	}
//	Point(Point &p) 
//	{
//		this->Size = p.Size;
//		this->dimension = p.dimension;
//	}
//	void computeDistance(Point &p)
//	{
//		if (this->Size == p.Size) {
//			for (int i = 0; i < this->Size; i++) {
//				this->Distance += (this->dimension[i] - p.dimension[i])*(this->dimension[i] - p.dimension[i]);
//			}
//			Distance = sqrt(Distance);
//			cout << "Distance is : " << this->Distance << endl;
//		}
//		else
//			cout << "Dimensions are not same So dimensions can not determined." << endl;
//	}
//	void get_Point() const 
//	{
//		for (int i = 0; i < Size; i++) {
//			cout << dimension[i] << "  ";
//		}
//		cout << endl;
//	}
//};
//
//Point func(int Size) {
//	if (Size == 1) {
//		cout << "Minimum dimensions are 2..." << endl;
//	}
//	else if (Size == 2) {
//		int x, y;
//		cout << "Enter x value : ";
//		cin >> x;
//		cout << "Enter y value : ";
//		cin >> y;
//		Point p(Size, x, y);
//		return p;
//	}
//	else if (Size == 3) {
//		int x, y, z;
//		cout << "Enter x value : ";
//		cin >> x;
//		cout << "Enter y value : ";
//		cin >> y;
//		cout << "Enter z value : ";
//		cin >> z;
//		Point p(Size, x, y, z);
//		return p;
//	}
//	else if (Size == 4) {
//		int w, x, y, z;
//		cout << "Enter w value : ";
//		cin >> w;
//		cout << "Enter x value : ";
//		cin >> x;
//		cout << "Enter y value : ";
//		cin >> y;
//		cout << "Enter z value : ";
//		cin >> z;
//		Point p(Size, w, x, y, z);
//		return p;
//	}
//	else if (Size == 5) {
//		int v, w, x, y, z;
//		cout << "Enter v value : ";
//		cin >> v;
//		cout << "Enter w value : ";
//		cin >> w;
//		cout << "Enter x value : ";
//		cin >> x;
//		cout << "Enter y value : ";
//		cin >> y;
//		cout << "Enter z value : ";
//		cin >> z;
//		Point p(Size, v, w, x, y, z);
//		return p;
//	}
//	else if (Size > 5) {
//		Point p(Size);
//		return p;
//	}
//}
//int main() {
//	Point func(int Size);
//	int s1, s2;
//	cout << "Enter Dimensions for point 1 : ";
//	cin >> s1;
//	Point P = func(s1);
//	cout << "Enter Dimensions for point 2 : ";
//	cin >> s2;
//	Point Q = func(s2);
//	cout << "Value for point 1 : ";
//	P.get_Point();
//	cout << "Value for point 2 : ";
//	Q.get_Point();
//	P.computeDistance(Q);
//	Point S(Q);
//	cout << "Value for point 3 using copy constructor : " << endl;
//	S.get_Point();
//
//	system("pause");
//	return 0;
//}
