#include<iostream>
#include<Windows.h>
using namespace std;
void GameMenu() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 5);
	cout << "\t\t\t\t |----------------------------------| \n";
	cout << "\t\t\t\t |_____________Game Menu____________| \n";
	cout << "\t\t\t\t |                                  | \n";
	cout << "\t\t\t\t |                                  | \n";
	cout << "\t\t\t\t |   1. Play Game                   | \n";
	cout << "\t\t\t\t |   2. Credits                     | \n";
	cout << "\t\t\t\t |   3. Instructions                | \n";
	cout << "\t\t\t\t |   4. Top Scorer                  | \n";
	cout << "\t\t\t\t |   5. Exit                        | \n";
	cout << "\t\t\t\t |                                  | \n";
	cout << "\t\t\t\t |----------------------------------| \n";
	SetConsoleTextAttribute(h, 14);
	cout << "\t\t\t\t Enter number to start :";
}
void EnterName() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 3);
	cout << "\t\t\t   Welcome to Candy Crush Game \n";
	SetConsoleTextAttribute(h, 11);
	cout << "\t\t\t   Enter Your Name Here _____. \n";
	cout << "\t\t\t   ";
}
void EnterMode() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	cout << "\t\t\t   Enter the mode do you want to play \n";
	SetConsoleTextAttribute(h, 6);
	cout << "\t\t\t   1. Easy Mode \n";
	SetConsoleTextAttribute(h, 4);
	cout << "\t\t\t   2. Hard Mode \n";
	SetConsoleTextAttribute(h, 11);
	cout << "\t\t\t   ";
}
void Lshape() {
	system("CLS");
	cout << "------------------------" << endl;
	cout << "|                      |" << endl;
	cout << "|         SWEET        |" << endl;
	cout << "|  lshape       loading|" << endl;
	cout << "------------------------" << endl;
	Sleep(500);
	system("CLS");
}
void Vertical() {
	system("CLS");
	cout << "------------------------" << endl;
	cout << "|                      |" << endl;
	cout << "|         SWEET        |" << endl;
	cout << "| vertical     loading |" << endl;
	cout << "------------------------" << endl;
	Sleep(500);
	system("CLS");
}
void Horizontal()
{
	system("CLS");
	cout << "------------------------" << endl;
	cout << "|                      |" << endl;
	cout << "|         SWEET        |" << endl;
	cout << "| horizontal   loading |" << endl;
	cout << "------------------------" << endl;
	Sleep(500);
	system("CLS");
}
void ForwardDaigonal()
{
	system("CLS");
	cout << "--------------------------" << endl;
	cout << "|                        |" << endl;
	cout << "|         SWEET          |" << endl;
	cout << "|                        |" << endl;
	cout << "|forward diagonal loading|" << endl;
	cout << "--------------------------" << endl;
	Sleep(500);
	system("CLS");
}
void BackwardDaigonal()
{
	system("CLS");
	cout << "--------------------------" << endl;
	cout << "|                         |" << endl;
	cout << "|         SWEET           |" << endl;
	cout << "|                         |" << endl;
	cout << "|backward diagonal loading|" << endl;
	cout << "--------------------------" << endl;
	Sleep(500);
	system("CLS");
}
void Credits()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 6);
	cout << "\t\t\t\t |----------CREDITS------------|" << endl;
	cout << "\t\t\t\t |                             |" << endl;
	cout << "\t\t\t\t | Muhammad Abdullah 23F-0687  |" << endl;
	cout << "\t\t\t\t |                             |" << endl;
	cout << "\t\t\t\t | Haseeb Ul Hasan   23F-0604  |" << endl;
	cout << "\t\t\t\t |                             |" << endl;
	cout << "\t\t\t\t |   Press ESC to go back.     |" << endl;
	cout << "\t\t\t\t |-----------------------------|" << endl;
	Sleep(1000);
	system("CLS");
	SetConsoleTextAttribute(h, 7);
}
void Instructions()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 6);
	cout << "\t\t\t\t |---------------------Instructions---------------------|" << endl;
	cout << "\t\t\t\t |                                                      |" << endl;
	cout << "\t\t\t\t | How to Play:                                         |" << endl;
	cout << "\t\t\t\t |                                                      |" << endl;
	cout << "\t\t\t\t |   1. Select Play Mode By pressing 1 or 2             |" << endl;
	cout << "\t\t\t\t |   2. Press Right Shift to Select Candy.              |" << endl;
	cout << "\t\t\t\t |   3. Give Candy address.                             |" << endl;
	cout << "\t\t\t\t |   3. Press Arrow Key To Swap with.                   |" << endl;
	cout << "\t\t\t\t |                                                      |" << endl;
	cout << "\t\t\t\t | GamePlay:                                            |" << endl;
	cout << "\t\t\t\t |                                                      |" << endl;
	cout << "\t\t\t\t |   1. When Player Swipe Candy and candy not crushes,  |" << endl;
	cout << "\t\t\t\t |  Turn will be lost and Candy will swipe.             |" << endl;
	cout << "\t\t\t\t |   2.If condition Matches Upper Candies Will move down|" << endl;
	cout << "\t\t\t\t |   and new Candies will be generated above.           |" << endl;
	cout << "\t\t\t\t |                                                      |" << endl;
	cout << "\t\t\t\t |    Press ESC for go back..                           |" << endl;
	cout << "\t\t\t\t |------------------------------------------------------|" << endl;
	Sleep(1000);
	system("CLS");
	SetConsoleTextAttribute(h, 7);
}