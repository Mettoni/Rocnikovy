
#include <iostream>
#include <ctime>
#include <string>
#include <list>
#include <algorithm>
#include <chrono>
#include <thread>
#include "Header.h"

using namespace std;

string words[10] = { "dom","auto","zahrada","ferrari","lampa","program","monitor","palica","steam","projekt" }; // pole slov
char input; // premmenna do ktorej uzivatel zadáva pismenka
int State = 1; // status obesenca (ako moc je obeseny)

void hra() {
	system("cls"); //Vymaze konzolu

	int live = 5; // nastavi zivot na 5


	srand((unsigned)time(NULL)); // zrandomizuje program podla casu 

	string randomword = words[rand() % 10];  //nová premenna typu string ktorej hodnota sa nastaví po zapnutí programu a jej hodnota bude random slovo z pola words

	string underscore(randomword.length(), '_');  //nova premennı typu strng ktorej hodnota je podèiarka a velkost alebo poèet podèiarok závisi podla dlzky premmenej randomword

	DrawHangman(1); //zapne funkciu obesenca a stav nastavi na 1

	while (live > 0) // hra bude bea dokym je ivot viac ako 0
	{
		cout << endl;
		cout << "tvoj zivot: " << live << endl;;
		cout << "    " << underscore << endl;
		cout << endl;
		cout << "Pismeno/Pismena: ";
		cin >> input;



		if (randomword.find(input) != std::string::npos) //skontroluje celú premmenu randomword v kadej pozicí èi sa v nej nachádza pismeno èo uivatel zadal
		{
			system("cls"); // premae konzolu
			DrawHangman(State); //vykresli obesenca s aktuálnym stavom ktorı sa môe meni
			for (int i = 0; i < underscore.length(); i++)  //prejde celú dåku premmenej s názvom underscore 
			{
				if (randomword[i] == input) // ked sa aktuálne miesto zhoduje s pismenom ktore zadal uivatel
				{
					underscore[i] = input; //nastaví sa do premmenej underscore na to iste miesto to pismeno èo uivatel zadal, èie sa zmení podèiarka na pismeno

				}

			}

		}
		else // ked sa to pismeno nenachádza v slove (premennej)
		{
			system("cls");
			live -= 1; //zivot klesne o 1
			State += 1; //stav stupne o 1
			DrawHangman(State); //vykresli sa obesenec s aktualnym stavom
			cout << "Zle pismeno" << endl;
		}

		if (underscore == randomword) // ak sa slovo zhoduje so všetkymi pismenami v underscore premenne tak program skoncí a zaèni od znova len treba poèka 5 sekund a hra sa od znova 
		{
			cout << "Gratulujeme Vyhral si" << endl;
			this_thread::sleep_for(std::chrono::seconds(5));
			system("cls");
			main();

		}

	}

	cout << "Skoda, slovo bolo: " << randomword << endl;



}