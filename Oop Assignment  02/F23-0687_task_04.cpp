//#include<iostream>
//using namespace std;
//// function to add the arrays to another array...
//float* addarrays(float*a1, float*a2, float*a3,int size) {
//	for (int i = 0; i < size; i++) 
//		*(a3 + i) = *(a1 + i) + *(a2 + i);
//	return a3;
//}
//int main()
//{
//	const int size = 4;
//	float arr1[size] = { 2.4,6.5,7.9,56.0 };
//	float arr2[size] = { 3.4,2.4,1.9,12.0 };
//	float arr3[size];
//	float *returning_array = addarrays(arr1, arr2, arr3, size);// value storing in the pointer...
//	for (int i = 0; i < size; i++)//showing values..
//		cout << *(returning_array + i) << "   ";
//	cout << endl;
//	system("pause");
//	return 0;
//}