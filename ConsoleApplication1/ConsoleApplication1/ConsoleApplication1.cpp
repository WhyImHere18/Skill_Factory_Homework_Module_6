// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "IElectronics.h"
#include "Player.h"
#include "Smartfone.h"
#include "SmartWatch.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{

	Player* players[2];
	players[0] = new Player (8.0e9, 10, 2000, string("Sony Walkman"), 100, string("black"), 12000);
	players[1] = new Player(16.0e9, 12, 3200, string("Ipod another one"), 110, string("green"), 18000);

	Smartfone* smartfones[3];
	smartfones[0] = new Smartfone(16.0e9, 24, 6.5, 20.0e6, string("Redmi"), 100, string("blue"), 15000);
	smartfones[1] = new Smartfone(32.0e9, 24, 6.0, 16.0e6, string("iFone next one"), 87, string("gold"), 30000);
	smartfones[2] = new Smartfone(16.0e9, 12, 5.0, 8.0e6, string("iFone outdated"), 120, string("white"), 26000);

	SmartWatch* smartwatches[2];
	smartwatches[0] = new SmartWatch(8.0e9, 48, 1.5, string("orange"), string("silicon"), string("Mi band 3"), 35, string("white"), 13000);
	smartwatches[1] = new SmartWatch(16.0e9, 72, 1.3, string("white"), string("skin"), string("iWatch"), 30, string("white"), 19000);

	IElectronics* list[sizeof(players) / sizeof(players[0]) + sizeof(smartfones) / sizeof(smartfones[0]) + sizeof(smartwatches) / sizeof(smartwatches[0])];

	int j = 0;
	int playersNum = sizeof(players) / sizeof(players[0]);
	for (int i = 0; i < playersNum; i++)
	{
		list[j] = players[i];
		j++;
	}

	int smartfonesNum = sizeof(smartfones) / sizeof(smartfones[0]);
	for (int i = 0; i < smartfonesNum; i++)
	{
		list[j] = smartfones[i];
		j++;
	}

	int smartwatchesNum = sizeof(smartwatches) / sizeof(smartwatches[0]);
	for (int i = 0; i < smartwatchesNum; i++)
	{
		list[j] = smartwatches[i];
		j++;
	}

	bool open = true;

	while (open)
	{
		cout << "Choose a product you would like to get: 1 - music player, 2 - smartfone, 3 - smart watch or press 0 to quit" << endl;
		int choise;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "below shown players list we have at the moment: " << endl << endl;
			for (int i = 0; i < playersNum; i++)
			{
				list[i]->ShowSpec();
			}
			break;
		case 2:
			cout << "below shown smartfones list we have at the moment: " << endl << endl;
			for (int i = playersNum; i < playersNum + smartfonesNum; i++)
			{
				list[i]->ShowSpec();
			}
			break;
		case 3:
			cout << "below shown smartwatcheslist we have at the moment: " << endl << endl;
			for (int i = playersNum + smartfonesNum; i < playersNum + smartfonesNum + smartwatchesNum; i++)
			{
				cout << "";
				list[i]->ShowSpec();
			}
			cout << "which one do you want to get? " << endl;
			for (int i = 1; i <= smartwatchesNum - 1; i++)
			{
				cout << i << " or ";
			}
			cout << smartwatchesNum << "?" << endl;
			int wNum;
			cin >> wNum;
			cout << endl;
			cout << "Ok, you've got it: " << endl;
			cout << "Smartwatches No " << wNum << ":" << endl;
			list[playersNum + smartfonesNum + wNum - 1]->ShowSpec();
			open = false;
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "Choose a product you would like to get: 1 - music player, 2 - smartfone, 3 - smart watch or press 0 to quit" << endl;
			break;
		}
	}

	for (int i = 0; i < sizeof(players) / sizeof(players[0]) + sizeof(smartfones) / sizeof(smartfones[0]) + sizeof(smartwatches) / sizeof(smartwatches[0]); i++)
	{
		delete list[i];
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
