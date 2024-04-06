#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<string>
#include<Windows.h>
using namespace std;
//  structure of horse for different values..
struct Horse {
	int speed;
	int endurance;
	int position;
	int fatigue;
};
// Function to maintain spaces in the race..
string spaces(Horse *ptr, string spac) {
	int space = ptr->speed;
	if (space == 3)
		return spac = "---";
	else if (space == 4)
		return spac = "----";
	else if (space == 5)
		return spac = "-----";
	else if (space == 6)
		return spac = "------";
	else if (space == 7)
		return spac = "-------";
	else if (space == 8)
		return spac = "--------";
	else if (space == 9)
		return spac = "---------";
	else if (space == 10)
		return spac = "----------";
	else if (space == 11)
		return spac = "-----------";
}
string store[8] = {}; // global array that store the previous values of the horses...
string Name[8] = { "Racer","Wisper","Thunder","Thor","Ironman","Caption","Hulk","Rocket" };
int counter = 0;
// Function to create movment in the horses...
void moveHorse(Horse *ptr) {
	string spacing;
	cout << Name[counter % 8] << setw(10) << "  " << (counter % 8) + 1 << " ";
	string temp;
	temp = spaces(ptr, spacing);
	if (counter < 8)
		store[counter] = temp;
	else
		store[counter % 8] += temp;
	cout << store[counter % 8];
	cout << "*" << endl;
	counter++;
}
//Fatigue Function that updates the Fatigue of a Horse...
int applyFatigue(Horse *ptr) {
	if (ptr->speed >= 9) {
		ptr->fatigue = (rand() % 2) + 1;
		return ptr->fatigue;
	}
	else {
		ptr->fatigue = (rand() % 3) + 1;
		return ptr->fatigue;
	}
}
// Obstacle Function that add randomly obstacles to increase the fatigue of the horses...
int applyObstacles(Horse *ptr) {
	ptr->fatigue = (rand() % 5) + 1;
	return ptr->fatigue;
}
// Function to print the positions and fatigues of the horses...
void printRaceStatus(Horse structure[]) {
	cout << endl << endl << "Race Status :" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Racer   |  Position = (" << structure[0].position << ") | Fatigue = (" << structure[0].fatigue << ") |" << endl;
	cout << "Wisper  |  Position = (" << structure[1].position << ") | Fatigue = (" << structure[1].fatigue << ") |" << endl;
	cout << "Thunder |  Position = (" << structure[2].position << ") | Fatigue = (" << structure[2].fatigue << ") |" << endl;
	cout << "Thor    |  Position = (" << structure[3].position << ") | Fatigue = (" << structure[3].fatigue << ") |" << endl;
	cout << "Ironman |  Position = (" << structure[4].position << ") | Fatigue = (" << structure[4].fatigue << ") |" << endl;
	cout << "Caption |  Position = (" << structure[5].position << ") | Fatigue = (" << structure[5].fatigue << ") |" << endl;
	cout << "Hulk    |  Position = (" << structure[6].position << ") | Fatigue = (" << structure[6].fatigue << ") |" << endl;
	cout << "Rocket  |  Position = (" << structure[7].position << ") | Fatigue = (" << structure[7].fatigue << ") |" << endl;
}
// Function of starting game...
void StartFun()
{
	cout << "**************************************************" << endl;
	cout << "       Welcome to Horse Racing Simulation!        " << endl;
	cout << "**************************************************" << endl << endl << endl;
}
int main()
{
	srand(time(0));
	const int horse = 8;
	Horse arr[horse];
	int Position[8] = { 0 };
	int fatig[8] = { 0 };
	int Speed, Endurance, Obstacle, applyObstacleRand;
	string start;
	StartFun();
	cout << "Enter something to start........." << endl;
	cin >> start;
	system("CLS");
	while (true) {// loop run untill the position aproaches the last point
		applyObstacleRand = (rand() % 120) + 30;
		for (int j = 0; j < horse; j++) {
			Obstacle = applyObstacles(&arr[j]);
			Endurance = (rand() % 60) + 90;
			if (fatig[j] > 50)
				Speed = (rand() % 6) + 3;
			else
				Speed = (rand() % 8) + 3;
			Position[j] += Speed;
			fatig[j] += applyFatigue(&arr[j]);
			if (applyObstacleRand >= 80)
				fatig[j] += Obstacle;
			arr[j].speed = Speed;
			arr[j].position = Position[j];
			arr[j].fatigue = fatig[j];
			arr[j].endurance = Endurance;
			moveHorse(&arr[j]);
		}
		printRaceStatus(arr);
		if (Position[0] >= 150 || Position[1] >= 150 || Position[2] >= 150 || Position[3] >= 150 || Position[4] >= 150 || Position[5] >= 150 || Position[6] >= 150 || Position[7] >= 150)
			break;
		Sleep(1000);
		system("CLS");
	}
	int greater = 0, index = 0;// find the greater value and that index of the array...
	for (int i = 0; i < horse; i++) {
		if (arr[i].position > greater) {
			greater = arr[i].position;
			index = i;
		}
	}
	cout << Name[index] << " is winner with position " << greater << endl;
	system("pause");
	return 0;
}