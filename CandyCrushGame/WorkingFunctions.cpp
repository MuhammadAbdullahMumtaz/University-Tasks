#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<Windows.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<cassert>
#include"coutFunctions.hpp"
char RandomEasyFill(char fill) {   // Generate the random candies to fill the 8*8 easy mode of game.
	int generate = rand() % 5 + 1;
	if (generate == 1)
		fill = '@';
	else if (generate == 2)
		fill = '#';
	else if (generate == 3)
		fill = '$';
	else if (generate == 4)
		fill = '%';
	else
		fill = '&';
	return fill;
}
char RandomHardFill(char fill) {   // Generate the random candies to fill the 8*8 easy mode of game.
	int generate = rand() % 7 + 1;
	if (generate == 1)
		fill = '@';
	else if (generate == 2)
		fill = '#';
	else if (generate == 3)
		fill = '$';
	else if (generate == 4)
		fill = '%';
	else if (generate == 5)
		fill = '&';
	else if (generate == 6)
		fill = '*';
	else
		fill = '?';
	return fill;
}
void Fill(char arr[8][8]) {  // to check if the generated candies are not making sequence and used after the ok move.
	char fill = ' ';
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[i][j] == ' ') {
				arr[i][j] = RandomEasyFill(fill);
				if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] ||//column wise horizontal
					arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] || // row wise vertical
					arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] || //forward diagonal
					arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])  //backward diagonal
				{
					char c = ' ';
					arr[i][j] = RandomEasyFill(c);
				}
			}
		}
	}
}
void FillHard(char arr[10][10]) {  // to check if the generated candies are not making sequence and used after the ok move.
	char fill = ' ';
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == ' ') {
				arr[i][j] = RandomHardFill(fill);
				if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] ||//column wise horizontal
					arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] || // row wise vertical
					arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] || //forward diagonal
					arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])  //backward diagonal
				{
					char c = ' ';
					arr[i][j] = RandomHardFill(c);
				}
			}
		}
	}
}
void FillCandies(char arr[8][8]) { // for the first time filling candies in the table. 
	char c = ' ';
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			arr[i][j] = RandomEasyFill(c);
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] ||//column wise horizontal
						arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] || // row wise vertical
						arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] || //forward diagonal
						arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])  //backward diagonal
					{
						char ch = ' ';
						arr[i][j] = RandomEasyFill(ch);
					}
				}
			}
		}
	}
}
void FillCandiesHard(char arr[10][10]) { // for the first time filling candies in the table. 
	char c = ' ';
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = RandomHardFill(c);
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] ||//column wise horizontal
						arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] || // row wise vertical
						arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] || //forward diagonal
						arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])  //backward diagonal
					{
						char ch = ' ';
						arr[i][j] = RandomHardFill(ch);
					}
				}
			}
		}
	}
}
void SwapSpaceEasy(char arr[8][8]) {
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i][j] == ' ')
			{
				int l = i, m = j;
				while (l > 0)
				{
					arr[l][m] = arr[l - 1][m];
					l--;
				}
			}
		}
	}
}
void SwapSpaceHard(char arr[10][10]) {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == ' ')
			{
				int l = i, m = j;
				while (l > 0)
				{
					arr[l][m] = arr[l - 1][m];
					l--;
				}
			}
		}
	}
}
void Matching(char arr[8][8], int num, int& score) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 2][j + 1] && arr[i][j] == arr[i + 2][j + 2]) { // for L shape/
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				arr[i + 2][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score += 25;
				/*Lshape();*/
				Sleep(300);
			}
			else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) {  // for verticle shape
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				score += 10;
				//Vertical();
				Sleep(300);
			}
			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]) {  // for horizontal shape
				arr[i][j] = ' ';
				arr[i][j + 1] = ' ';
				arr[i][j + 2] = ' ';
				score += 10;
				Sleep(300);
			}
			else if (arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 2][j + 2]) {   //  for forward diagonal
				arr[i][j] = ' ';
				arr[i + 1][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score += 15;
				/*ForwardDaigonal();*/
				Sleep(300);
			}
			else if (arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 2][j - 2]) {   // for backword diagonal 
				arr[i][j] = ' ';
				arr[i + 1][j - 1] = ' ';
				arr[i + 2][j - 2] = ' ';
				score += 15;
				/*BackwardDaigonal();*/
				Sleep(300);
			}
		}
	}
}
void MatchingHard(char arr[10][10], int num, int& score) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 2][j + 1] && arr[i][j] == arr[i + 2][j + 2]) { // for L shape/
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				arr[i + 2][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score += 25;
				Lshape();
			}
			else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) {  // for verticle shape
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				score += 10;
				Vertical();
			}
			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]) {  // for horizontal shape
				arr[i][j] = ' ';
				arr[i][j + 1] = ' ';
				arr[i][j + 2] = ' ';
				score += 10;
			}
			else if (arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 2][j + 2]) {   //  for forward diagonal
				arr[i][j] = ' ';
				arr[i + 1][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score += 15;
				ForwardDaigonal();
			}
			else if (arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 2][j - 2]) {   // for backword diagonal 
				arr[i][j] = ' ';
				arr[i + 1][j - 1] = ' ';
				arr[i + 2][j - 2] = ' ';
				score += 15;
				BackwardDaigonal();
			}
		}
	}
}