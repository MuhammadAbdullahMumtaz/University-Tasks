//#include<iostream>
//using namespace std;
//int num = 60;// global decleration for the loops..
//// function to find the length of character array..
//int strLen(const char *s) {
//	int length=0;
//	for (int i = 0; i < num; i++) {
//		if (s[i] == '\0')
//			break;
//		else {
//			if (s[i] == ' ')
//				length++;
//			else
//				length++;
//		}
//	}
//	return length;
//}
//// function to compare the strings...
//int strcmp(const char *s1, const char *s2) {
//	for (int i = 0; i < num; i++) 
//		if (s1[i] != s2[i]) {
//			return i+1;
//			break;
//		}
//}
//// function to compare the strings at some extants...
//int strncmp(const char *s1, const char *s2, int n) {
//	for (int i = 0; i < n; i++)
//		if (s1[i] == s2[i]) {
//			if (i = n - 1)
//				return 0;
//			continue;
//		}
//		else if (s1[i] < s2[i])
//			return -1;
//		else if (s1[i] > s2[i])
//			return 1;
//}
//// function to copy the string to filled to an empty...
//char *strCpy(char * s1, const char *s2) {
//	for (int i = 0; i < num; i++) {
//		s1[i] = s2[i];
//		if (s2[i] == '\0')
//			break;
//	}
//		return s1;
//}
//// function to copy the strings at some extants...
//char * strnCpy(char * s1, const char *s2, int n) {
//	for (int i = 0; i < n; i++) {
//		s1[i] = s2[i];
//		if (i == n - 1)
//			s1[i + 1] = '\0';
//	}
//
//	return s1;
//}
//// function to join/ concate the strings...
//char *strCat(char * s1, const char * s2) {
//	int n = 0;
//	for (int i = 0; i < num; i++) {
//		if (s1[i] == '\0')
//			s1[i] = s2[n++];
//		if (s2[n] == '\0')
//			break;
//	}
//	return s1;
//}
//// function to join/ concate the strings to some extant...
//char *strnCat(char * s1, const char * s2, int n) {
//	int count = 0;
//	for (int i = 0; i < num; i++) {
//		if (s1[i] == '\0')
//			s1[i] = s2[count++];
//		if (count == n)
//			break;
//	}
//	return s1;
//}
//int main()
//{
//	char arr[60], str1[60], str2[60], cpy1[60], cpy2[] = "Muhammad Abdullah";
//	char cpy11[10], cpy21[] = "Muhammad Abdullah Mumtaz", concat1[60] = "Muhammad", concat2[60] = "Abdullah", concat11[60] = "Muhammad";
//	char concat21[60] = "Abdullah",cmp1[]="Muhammad",cmp2[]="muhammad";
//	cout << "Enter the string :";
//	cin.get(arr, 60);
//
//	cout << "using strlen function  :" << endl;
//	cout << strLen(arr) << endl;// using length function...    strlen
//
//	cout << "Enter string value 1 to compare :";
//	cin.ignore();
//	cin.get(str1, 60);
//	cout << "Enter string value 2 to compare :";
//	cin.ignore();
//	cin.get(str2, 60);
//	cout << "using strcmp function  :" << endl;
//	cout << strcmp(str1, str2) << endl;// using compare function...  strcmp
//
//	cout << "using strncmp function  :" << endl;
//	cout << strncmp(cmp1, cmp2, 5) <<"         this detacts that the string1 is smaller than string2"<< endl;// using compare funto some extant..   strncmp
//
//	cout << "using strcpy function  :" << endl;
//	cout << strCpy(cpy1, cpy2) << endl;// using copy function..    strcpy
//	cout << cpy1 << endl;
//
//	cout << "using strncpy function  :" << endl;
//	strnCpy(cpy11, cpy21, 5);// using copy function to some value..    strncpy
//	cout << cpy11 << endl;
//
//	cout << "using strcat function  :" << endl;
//	strCat(concat1, concat2);// using concate function ..    strcat
//	cout << concat1 << endl;
//
//	cout << "using strncat function  :" << endl;
//	strnCat(concat11, concat21,3);// using concate function to some extant..    strncat
//	cout << concat11 << endl;
//
//	system("pause");
//	return 0;
//}