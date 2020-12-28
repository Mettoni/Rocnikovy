// Rocnikovy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <string>
#include <list>
#include <algorithm>
#include <chrono>
#include <thread>
#include "Header.h"

using namespace std;

void hra();
void DrawHangman(int State);


int main()

{
	int a;

	cout << "Vitaj v menu hry Obesenec" << endl;
	cout << endl;
	cout << "Moznosti:" << endl;
	cout << "1.Hra" << endl;
	cout << "2.Ukoncit" << endl;
	cout << "Co chces:";
	cin >> a;	
	cout << endl;
	
	
	
	switch (a) {
	case 1:
		hra();
		break;
	case 2:
		std::exit;
		break;
		
	
	
	
	
	
	}

		
		
	
	return 0;
}



