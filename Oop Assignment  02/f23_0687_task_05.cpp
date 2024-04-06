//#include <iostream>
//#include <fstream>
//using namespace std;
//// function that takes file address and create dynamic 2D array...
//int **InputMatrix(ifstream &fin, int &rows, int &cols)
//{
//	fin >> rows;
//	fin >> cols;
//	fin.close();
//	int **mat;
//	mat = new int *[rows];
//	for (int i = 0; i < rows; i++)
//		mat[i] = new int[cols];
//	return mat;
//}
//// function that simpilly outputs the values of the array...
//void OutputMatrix(int **matrix, const int &rows, const int &cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << *(*(matrix + i) + j) << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//// function to input the array on console...
//void InputTaking(int **matrix, const int rows, const int cols)
//{
//	for (int i = 0; i < rows; i++){
//		for (int j = 0; j < cols; j++){
//			cout << "Enter Values of row :" << i + 1 << ": ";
//			cin >> *(*(matrix + i) + j);
//		}
//	}
//}
//// function to add the matrixs by their indexes...
//int **AddMatrix(int **matA, int **matB, const int &rows, const int &cols)
//{
//	int **matR;
//	matR = new int *[rows];
//	for (int i = 0; i < rows; i++)
//		matR[i] = new int[cols];
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			*(*(matR + i) + j) = *(*(matA + i) + j) + *(*(matB + i) + j);
//		}
//	}
//	return matR;
//}
//// function to take transpose...
//int **Transpose(int **matrix, const int rows, const int cols)
//{
//	int **newMat;
//	newMat = new int *[rows];
//	for (int i = 0; i < cols; i++)
//		newMat[i] = new int[cols];
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			*(*(newMat + i) + j) = *(*(matrix + j) + i);
//		}
//	}
//	return newMat;
//}
//// function that check that the matrix is symetric or not...
//bool IsSymmetric(int **matrix, const int &rows, const int &cols)
//{
//	int **trnspose;
//	trnspose = Transpose(matrix, rows, cols);
//	bool x = true;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (*(*(trnspose + i) + j) != *(*(matrix + i) + j))
//			{
//				x = false;
//				break;
//			}
//		}
//	}
//	return x;
//}
//// function to inter change the rows ...
//void InterChangeRows(int **matrix, const int &rows, const int &cols)
//{
//	int *ptr;
//	int Change_into;
//	int Change_with ;
//	ptr = new int[cols];
//	bool x = true;
//	bool y = true;
//	cout << "Enter row you want to change into which : ";
//	cin >> Change_into;
//	cout << "Enter row you want to change with  : ";
//	cin >> Change_with;
//	// Store first row values...
//	for (int i = 0; i < cols; i++)
//		ptr[i] = *(*(matrix + Change_into-1) + i);
//	// Exchange values of rows with 2nd rows...
//	for (int i = 0; i < cols; i++)
//		*(*(matrix + Change_into-1) + i) = *(*(matrix + Change_with-1) + i);
//	// Intialize the second row with stored value...
//	for (int i = 0; i < cols; i++)
//		*(*(matrix + Change_with-1) + i) = ptr[i];
//}
//int main()
//{
//	int row, col;
//	int **matrix_A, **matrix_B, **matrix_R, **transpose_Matrix;// double pointer matrixes..
//	ifstream read;
//	read.open("size.txt");
//	matrix_A = InputMatrix(read, row, col);
//	matrix_B = InputMatrix(read, row, col);
//	const int rows = row;// seperate because we do not get the rows to direct constant value...
//	const int cols = col;
//	bool check;
//	cout << "Enter the Matrix A : " << endl;
//	InputTaking(matrix_A, rows, cols);
//	cout << "Enter the Matrix B : " << endl;
//	InputTaking(matrix_B, rows, cols);
//	matrix_R = AddMatrix(matrix_A, matrix_B, rows, cols);
//	// output call functions...
//	OutputMatrix(matrix_A, rows, cols);
//	OutputMatrix(matrix_B, rows, cols);
//	OutputMatrix(matrix_R, rows, cols);
//
//	transpose_Matrix = Transpose(matrix_A, rows, cols);
//	OutputMatrix(transpose_Matrix, rows, cols);
//	check = IsSymmetric(matrix_A, rows, cols);
//	if (check == true)
//		cout << "Symmetric Matrix " << endl;
//	else
//		cout << "Not Symmetric Matrix " << endl;
//	InterChangeRows(matrix_A, rows, cols);
//	OutputMatrix(matrix_A, rows, cols);
//
//	system("pause");
//	return 0;
//}
