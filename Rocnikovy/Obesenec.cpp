#include <iostream>
#include <ctime>
#include <string>
#include <list>
#include <algorithm>
#include <chrono>
#include <thread>
#include "Header.h"

using namespace std;

void DrawHangman(int State) // funkcia ktora vypisuje podla stavu aktualneho obesenca
{
	if (State == 6)
	{
		//na pravo musia byt ruky dve lebo jedna palièka do lava sa nepoèita ako charakter ale vykresli to iba jednu 
		cout << endl << endl
			<< "   +----+     " << endl
			<< "   |    |     " << endl
			<< "   |    O     " << endl
			<< "   |   /|\\   " << endl
			<< "   |   / \\   " << endl
			<< "   |GameOver  " << endl
			<< "  ============" << endl << endl;
	}
	else if (State == 5)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |   /|\\ " << endl
			<< "   |     \\ " << endl
			<< "   |       " << endl
			<< "  ============" << endl << endl;
	}
	else if (State == 4)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |   /|\\ " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
	else if (State == 3)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |   /|  " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
	else if (State == 2)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |    |  " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
	else if (State == 1)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
}
