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
#include"WorkingFunctions.hpp"
using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	int out = 0;
	while (out == 0) {
	GameMenu();
	int gameStart, GameMode;
	string UserName;
	cin >> gameStart;
	system("CLS");
		if (gameStart == 1) {
			EnterName();
			cin >> UserName;
			EnterMode();
			cin >> GameMode;
			system("CLS");
			if (GameMode == 1) {
				const int num = 8;
				char arr[num][num];   //   Main Array where every function is to be performed.
				int count = 0;       // to control filling of random candies in table only for once
				int score = 0;
				int turn = 15;
				int stoptimer = 60;
				if (count == 0) {
					FillCandies(arr);
					count++;
				}
				while (stoptimer >= 0 && turn > 0) {
					SetConsoleTextAttribute(h, 13);
					cout << "\tTIMER : " << stoptimer << endl;
					cout << "\tTurns :" << turn << endl;
					cout << "\tScore :" << score << endl;
					stoptimer--;
					cout << "    ";
					SetConsoleTextAttribute(h, 15);
					for (int i = 0; i < num; i++) {
						cout << "  " << i + 1 << "  " << "|";
					}
					cout << "\n   -------------------------------------------------\n";
					for (int i = 0; i < num; i++) {
						cout << i + 1 << "  ";
						for (int j = 0; j < num; j++) {
							cout << "|" << "  ";
							if (arr[i][j] == '@')                                       // Giving colors to different candies.
								SetConsoleTextAttribute(h, 10);
							else if (arr[i][j] == '#')
								SetConsoleTextAttribute(h, 11);
							else if (arr[i][j] == '$')
								SetConsoleTextAttribute(h, 12);
							else if (arr[i][j] == '%')
								SetConsoleTextAttribute(h, 13);
							else if (arr[i][j] == '&')
								SetConsoleTextAttribute(h, 14);
							cout << arr[i][j] << "  ";
							SetConsoleTextAttribute(h, 15);
							if (j == num - 1) {
								cout << "|\n";
							}
						}
						if (i == num - 1)
							cout << "   -------------------------------------------------\n";
						else
							cout << endl;
					}
					cout << "Press Rigth Shift To select Candy..." << endl;
					SetConsoleTextAttribute(h, 7);
					if (GetAsyncKeyState(VK_RSHIFT))// this function checks when user enters right shift .. otherwise ignore and control moves forward 
					{
						bool valid = 1, found = 1;
						int i, j;
						while (valid == 1) {
							cout << "Enter the value of row. :";
							cin >> i;
							cout << "\nEnter the value of column. :";
							cin >> j;
							if (i > 0 && i <= 8 && j > 0 && j <= 8)// input validation
								valid = 0;
							else
							{
								cout << "Invalid Input... Enter Between 1 and 8." << endl;
								valid = 1;
							}
						}
						cout << "You have choose " << arr[i - 1][j - 1] << " candy." << endl;
						cout << "Enter on the arrow where you want to swap." << endl;
						while (found == 1) {
							int c;
							switch (c = _getch())
							{
							case KEY_UP:
								if (i == 1) {
									cout << "Invalid Move. " << endl;
								}
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i - 2][j - 1];
									arr[i - 2][j - 1] = swap;
									turn--;
								}
								found = 0;
								break;
							case KEY_DOWN:
								if (i == 8)
									cout << "Invalid Move." << endl;
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i][j - 1];
									arr[i][j - 1] = swap;
									turn--;
								}
								found = 0;
								break;
							case KEY_LEFT:
								if (j == 1)
									cout << "Invalid Move. " << endl;
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i - 1][j - 2];
									arr[i - 1][j - 2] = swap;
									turn--;
								}
								found = 0;
								break;
							case KEY_RIGHT:
								if (j == 8)
									cout << "Invalid Move. " << endl;
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i - 1][j];
									arr[i - 1][j] = swap;
									turn--;
								}
								found = 0;
								break;
							}

						}
						int pick = 15;
						while (pick >= 0) {
							Matching(arr, num, score);
							SwapSpaceEasy(arr);
							Fill(arr);
							pick--;
						}
					}
					Sleep(1000);
					system("CLS");
				}
				if (stoptimer <= 0 || turn <= 0)
				{

					cout << UserName << " scored :" << score << endl;
					fstream file;/// ifstream  fin..../// ofstream out  ... fout ... fin.>> 
					file.open("ScoreBoard.txt", ios::app); // fin.open//ios::in.
					file << UserName << " " << score << endl;
					file.close();
				}
			}
			else if (GameMode == 2) {
				const int num = 10;
				char arr[num][num];   //   Main Array where every function is to be performed.
				int count = 0;       // to control filling of random candies in table only for once
				int score = 0;
				int turn = 10;
				int stoptimer = 40;
				if (count == 0) {
					FillCandiesHard(arr);
					count++;
				}
				while (stoptimer >= 0 && turn > 0) {
					SetConsoleTextAttribute(h, 13);
					cout << "\tTIMER : " << stoptimer << endl;
					cout << "\tTurns :" << turn << endl;
					cout << "\tScore :" << score << endl;
					stoptimer--;
					cout << "    ";
					SetConsoleTextAttribute(h, 15);
					for (int i = 0; i < num; i++) {
						cout << "  " << i + 1 << "  " << "|";
					}
					cout << "\n   --------------------------------------------------------------\n";
					for (int i = 0; i < num; i++) {
						cout << i + 1 << "  ";
						for (int j = 0; j < num; j++) {
							cout << "|" << "  ";
							if (arr[i][j] == '@')                                       // Giving colors to different candies.
								SetConsoleTextAttribute(h, 10);
							else if (arr[i][j] == '#')
								SetConsoleTextAttribute(h, 11);
							else if (arr[i][j] == '$')
								SetConsoleTextAttribute(h, 12);
							else if (arr[i][j] == '%')
								SetConsoleTextAttribute(h, 13);
							else if (arr[i][j] == '&')
								SetConsoleTextAttribute(h, 14);
							else if (arr[i][j] == '*')
								SetConsoleTextAttribute(h, 4);
							else if (arr[i][j] == '?')
								SetConsoleTextAttribute(h, 5);
							cout << arr[i][j] << "  ";
							SetConsoleTextAttribute(h, 15);
							if (j == num - 1) {
								cout << "|\n";
							}
						}
						if (i == num - 1)
							cout << "   --------------------------------------------------------------\n";
						else
							cout << endl;
					}
					cout << "Press Rigth Shift To select Candy..." << endl;
					SetConsoleTextAttribute(h, 7);
					if (GetAsyncKeyState(VK_RSHIFT))// this function checks when user enters right shift .. otherwise ignore and control moves forward 
					{
						bool valid = 1, found = 1;
						int i, j;
						while (valid == 1) {
							cout << "Enter the value of row. :";
							cin >> i;
							cout << "Enter the value of column. :";
							cin >> j;
							if (i > 0 && i <= 10 && j > 0 && j <= 10)// input validation
								valid = 0;
							else
							{
								cout << "Invalid Input... Enter Between 1 and 10." << endl;
								valid = 1;
							}
						}
						cout << "You have choose " << arr[i - 1][j - 1] << " candy." << endl;
						cout << "Enter on the arrow where you want to swap." << endl;
						while (found == 1) {
							int c;
							switch (c = _getch())
							{
							case KEY_UP:
								if (i == 1) {
									cout << "Invalid Move. " << endl;
								}
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i - 2][j - 1];
									arr[i - 2][j - 1] = swap;
									turn--;
								}
								found = 0;
								break;
							case KEY_DOWN:
								if (i == 10)
									cout << "Invalid Move." << endl;
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i][j - 1];
									arr[i][j - 1] = swap;
									turn--;
								}
								found = 0;
								break;
							case KEY_LEFT:
								if (j == 1)
									cout << "Invalid Move. " << endl;
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i - 1][j - 2];
									arr[i - 1][j - 2] = swap;
									turn--;
								}
								found = 0;
								break;
							case KEY_RIGHT:
								if (j == 10)
									cout << "Invalid Move. " << endl;
								else {
									char swap = arr[i - 1][j - 1];
									arr[i - 1][j - 1] = arr[i - 1][j];
									arr[i - 1][j] = swap;
									turn--;
								}
								found = 0;
								break;
							}

						}
						int pick = 10;
						while (pick >= 0) {
							MatchingHard(arr, num, score);
							SwapSpaceHard(arr);
							FillHard(arr);
							pick--;
						}
					}
					Sleep(1000);
					system("CLS");
				}
				if (stoptimer <= 0 || turn <= 0)
				{
					cout << UserName << " scored :" << score << endl;
					fstream file;
					file.open("ScoreBoard.txt", ios::app);
					file << UserName << " " << score << endl;
					file.close();
				}
			}
		}
		else if (gameStart == 2) {
			int escape = 0;
			system("CLS");
			while (escape == 0) {
				if (GetAsyncKeyState(VK_ESCAPE))
					escape = 1;
			        Credits();
			}
		}
		else if (gameStart == 3) {
			int escape = 0;
			system("CLS");
			while (escape == 0) {
				if (GetAsyncKeyState(VK_ESCAPE))
					escape = 1;
				    Instructions();
			}
		}
		else if (gameStart == 4) {
			SetConsoleTextAttribute(h, 6);
			system("CLS");
			int escape = 0;
			if (GetAsyncKeyState(VK_ESCAPE))
				escape = 1;
			int score;
			char ch = ' ';
			string record;
			string nam;
			fstream disp;
			disp.open("ScoreBoard.txt");
			while (!disp.eof())
			{
				getline(disp, record);
				cout << endl << record;
			}
			//system("CLS");
		}
		else if (gameStart == 5) {
			out = 1;
		}
		else {
			continue;
		}
	}
	system("pause");
	return 0;
}