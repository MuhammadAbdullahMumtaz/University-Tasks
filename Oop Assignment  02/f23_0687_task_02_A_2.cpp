//#include<iostream>
//using namespace std;
//// This function simply convert the string to encoded form...
//void GenerateCode(int* P1, int* P2, char* line) {
//	if (*line >= 'A' && *line <= 'Z') {
//		*line += *P1;
//		if (*line > 'Z')
//			*line -= 26;
//	}
//	if (*line >= 'a' && *line <= 'z') {
//		*line += *P2;
//		if (*line > 'z')
//			*line -= 26;
//	}
//	cout << *line;
//}
//// This function simply convert the encoded  to decoded form...
//void GenerateDeCode(int* P1, int* P2, char* line) {
//	if (*line >= 'A' && *line <= 'Z') {
//		*line -= *P1;
//		if (*line < 'A')
//			*line += 26;
//	}
//	if (*line >= 'a' && *line <= 'z') {
//		*line -= *P2;
//		if (*line < 'a')
//			*line += 26;
//	}
//	cout << *line;
//}
//int main()
//{
//	char Roll_no[10];
//	char str[60];
//	char *ptrStr;
//	int *ptrCapital, *ptrSmall;
//	ptrStr = str;
//	cout << "Enter your Roll no. here as 23F_WXYZ  : ";
//	cin.ignore();// for not taking the previous garbage values in the character array..
//	cin.get(Roll_no, 10);
//	cout << "Enter the String to encode  : " << endl;;
//	cin.ignore();
//	cin.get(str, 60);
//	int capital_passing,small_passing;
//	for (int i = 0; i < 10; i++)
//		if (Roll_no[i] == '-' || Roll_no[i] == '_') {
//			capital_passing = ((Roll_no[i + 1] - 48) + (Roll_no[i + 2] - 48) + 1);
//			small_passing = ((Roll_no[i + 3] - 48) + (Roll_no[i + 4] - 48) + 1);
//		}
//	ptrCapital = &capital_passing;
//	ptrSmall = &small_passing;
//	cout << "Encoded string :" << endl;
//	for (int i = 0; i < strlen(str); i++)// calling the loop to send 1 by 1 character...
//		GenerateCode(ptrCapital, ptrSmall, &ptrStr[i]);
//	cout << endl;
//	cout << "Decoded string :" << endl;
//	for (int i = 0; i < strlen(str); i++)// calling the loop to send 1 by 1 character...
//		GenerateDeCode(ptrCapital, ptrSmall, &ptrStr[i]);
//	cout << endl;
//	system("pause");
//	return 0;
//}