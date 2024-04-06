//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//#include<Windows.h>
//using namespace std;
//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_LEFT 75
//#define KEY_RIGHT 77
//
//char RandomEasyFill(char fill) {
//	int generate = rand() % 5 + 1;
//	if (generate == 1)
//		fill = '@';
//	else if (generate == 2)
//		fill = '#';
//	else if (generate == 3)
//		fill = '$';
//	else if (generate == 4)
//		fill = '%';
//	else
//		fill = '&';
//	return fill;
//}
//int main()
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(NULL));
//	const int num = 8;
//	char fill = ' ';
//	char arr[num][num];                             //   Main Array where every function is to be performed.
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < num; j++) {
//			arr[i][j] = RandomEasyFill(fill);         //  Putting the random values in the main array. 
//		}
//	}
//	for (int i = 0; i < num; i++) {                  //   if already existion combination is present the remove it and anter the new random generated values.
//		for (int j = 0; j < num; j++) {
//			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 2][j + 1] && arr[i][j] == arr[i + 2][j + 2]) { // for L shape/
//				arr[i][j] = ' ';
//				arr[i + 1][j] = ' ';
//				arr[i + 2][j] = ' ';
//				arr[i + 2][j + 1] = ' ';
//				arr[i + 2][j + 2] = ' ';
//			}
//			else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) {  // for verticle shape
//				arr[i][j] = ' ';
//				arr[i + 1][j] = ' ';
//				arr[i + 2][j] = ' ';
//			}
//			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]) {  // for horizontal shape
//				arr[i][j] = ' ';
//				arr[i][j + 1] = ' ';
//				arr[i][j + 2] = ' ';
//			}
//			else if (arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 2][j + 2]) {   //  for forward diagonal
//				arr[i][j] = ' ';
//				arr[i + 1][j + 1] = ' ';
//				arr[i + 2][j + 2] = ' ';
//			}
//			else if (arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 2][j - 2]) {   // for backword diagonal 
//				arr[i][j] = ' ';
//				arr[i + 1][j - 1] = ' ';
//				arr[i + 2][j - 2] = ' ';
//			}
//		}
//	}
//	for (int i = 0; i < num; i++) {                // for refilling candies that make combination in without attempt.
//		for (int j = 0; j < num; j++) {
//			if(arr[i][j]==' ')
//				arr[i][j] = RandomEasyFill(fill);
//		}
//	}
//	cout << "    ";
//	for (int i = 0; i < num; i++) {
//		cout << "  " << i + 1 << "  " <<"|";
//	}
//	cout << "\n   -------------------------------------------------\n";
//	for (int i = 0; i < num; i++) {
//		cout << i + 1<<"  ";
//		for (int j = 0; j < num; j++) {
//			cout << "|" << "  ";
//			if (arr[i][j] == '@')                                       // Giving colors to different candies.
//				SetConsoleTextAttribute(h, 10);                  
//			else if (arr[i][j] == '#')
//				SetConsoleTextAttribute(h, 11);
//			else if (arr[i][j] == '$')
//				SetConsoleTextAttribute(h, 12);
//			else if (arr[i][j] == '%')
//				SetConsoleTextAttribute(h, 13);
//			else if (arr[i][j] == '&')
//				SetConsoleTextAttribute(h, 14);
//			cout << arr[i][j] << "  ";
//			 SetConsoleTextAttribute(h, 15);
//			if (j == num-1) {
//				cout << "|\n";
//			}
//		}
//		if (i == num - 1) 
//			cout << "   -------------------------------------------------\n";
//		else
//		cout << endl;
//	}
//	int i, j;
//	cout << "Enter the value of row. :";
//	cin >> i;
//	cout << "\nEnter the value of column. :";
//	cin >> j;
//	cout << "You have choose " << arr[i - 1][j - 1] << " candy."<<endl;
//	cout << "Enter on the arrow where you want to swap."<<endl;
//	
//	system("pause");
//	return 0;
//}