//#include<iostream>
//using namespace std;
//class Jagged {// contain row for number of row and column for jagged array...
//	int row, **column, *arr;
//
//public:
//	// CONSTRUCTOR
//	Jagged() {
//		row = 0;
//		cout << "Enter the number of row for Jagged array : ";
//		cin >> row;
//		arr = new int[row];
//		for (int i = 0; i < row; i++) {
//			cout << "Enter number of columns for row " << i + 1 << " : ";
//			cin >> arr[i];
//		}
//		column = new int*[row];
//		for (int i = 0; i < row; i++) {
//			column[i] = new int[arr[i]];
//		}
//	}
//	// INPUT PUBLIC FUNCTION...
//	Jagged& Input() {
//		for (int i = 0; i < row; i++) {
//			for (int j = 0; j < arr[i]; j++) {
//				cout << "Enter value of column " << i + 1 << " : ";
//				cin >> column[i][j];
//			}
//		}
//		return *this;
//	}
//	//DISPLAY publlic function...
//	void Display(Jagged &j1) {
//		for (int i = 0; i < j1.row; i++) {
//			for (int j = 0; j < j1.arr[i]; j++) {
//				cout << "| " << j1.column[i][j] << " |";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	// DESTRUCTOR...
//	~Jagged() {
//		for (int i = 0; i < row; i++)
//			delete [] column[i];
//		delete[] column;
//		delete [] arr;
//	}
//};
//int main()
//{
//	Jagged array;
//	array.Display(array.Input());
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Jagged
//{
//	int row, *col, **arr;
//public:
//	Jagged() : row(0), col(nullptr), arr(nullptr){}
//
//	Jagged &input()
//	{
//		cin >> row;
//		arr = new int*[row];
//		col = new int[row];
//		for (int i = 0; i < row; i++)
//		{
//			cout << "Columns for " << i + 1 << ": ";
//			cin >> col[i];
//			arr[i] = new int[col[i]];
//			for (int j = 0; j < col[i]; j++)
//			{
//				cout << "Enter element [" << i << "][" << j << "]: ";
//				cin >> arr[i][j];
//			}
//		}
//		return *this;
//	}
//
//	void display(Jagged &j)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col[i]; j++)
//			{
//				cout << arr[i][j] << "| ";
//
//			}
//			cout << endl;
//			for (int j = 0; j < col[i]; j++)
//			{
//				cout << "--";
//			}
//			cout << endl;
//		}
//	}
//	~Jagged()
//	{
//		for (int i = 0; i < row; i++)
//		{
//			delete[] arr[i];
//		}
//		delete[] arr;
//		delete[] col;
//	}
//};
//
//int main()
//{
//	Jagged JaggedArray;
//	JaggedArray.input();
//	JaggedArray.display(JaggedArray);
//	system("pause");
//	return 0;
//}