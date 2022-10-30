#include "Menu.h"
#include"Passport.h"
#include"Identification.h"
#include<iostream>
#include<windows.h>

using namespace std;

void Menu::printMenu() {

	cout << "	Hello, and welcome to this game that isn't Paper Please...just something alike\n\n1)Instructions\n2)Play the f**** game\n3)Exit\n";
	cin >> option;
	switch (option) {

	case 1: 
		instructions();
		break;
	case 2:
		playgame();
		break;
	case 3:
		EXIT_SUCCESS;
		break;
	default:
		printMenu();
		break;

	}

}

void Menu::instructions() {

	system("cls");
	cout << "	In the top of the console you can see your actual points"; 
	Sleep(3000);
	cout << "\n	+10 good answer and +20 arresting the terrorist";
	Sleep(3000);
	cout << "\n	-10 wrong answer and -20 aproving the terrorist";
	Sleep(3000);
	cout << "\n	When the documents appear in console (Passport and ID), check them";
	Sleep(3000);
	cout << "\n	But also check the jobs, country to visit and tickets";
	Sleep(3000);
	cout << "\n	Write 1 if you think they match or write 2 if they don't";
	Sleep(4000);
	cout << "\n	Some people got arrested by something but its on you the final decision, pretty easy, isn't it?"; 
	Sleep(3000);
	cout << "\n	...don't screwed up...\n";
	Sleep(2000);
	cout << "\n1)Back to menu\n2)Play the f**** game\n";

	cin >> option; 
	switch (option) {

	case 1:
		system("cls");
		printMenu();
		break;
	case 2:
		system("cls");
		playgame();
		break;
	default:
		system("cls");
		instructions();
		break;
	}
}

void Menu::playgame() {

	system("cls");

	cout << "		POINTS: " << points;
	Identification id1;
	id1.NPC1();
	Passport ps1;
	ps1.npc1();

	cout << "\n1)Aproved\n2)Rejected:\n";
	cin >> status;

	if (status == 1) {

		points = points + 10;
		cout << "\n\nYou got +10 points\n" << points << " Points already, Congrats :)\n";
	}
	if (status == 2) {

		points = points - 10;
		cout << "\n"  << " You're gonna pay 10 points for this ticket...\n";
	}
	if (status > 2 || status < 1) {
		cout << "\nThat's not an option...look twice next time...\n";
	}
	system("pause");
	system("cls");

	cout << "		POINTS: " << points;
	Identification id2;
	id2.NPC2();
	Passport ps2;
	ps2.npc2();

	cout << "\n1)Aproved\n2)Rejected:\n";
	cin >> status;

	if (status == 1) {

		points = points + 10;
		cout << "\n\nYou got +10 points\n" << points << " Points already, Congrats :)\n";
	}
	if (status == 2) {

		points = points - 10;
		cout << "\n" << " You're gonna pay 10 points for this ticket...\n";
	}
	if (status > 2 || status < 1) {
		cout << "\nThat's not an option...look twice next time...\n";
	}

	system("pause");
	system("cls");

	cout << "		POINTS: " << points;
	Identification id3;
	id3.NPC3();
	Passport ps3;
	ps3.npc3();

	cout << "\n1)Aproved\n2)Rejected:\n";
	cin >> status;

	if (status == 1) {

		points = points - 10;
		cout << "\n" << points << " You're gonna pay 10 points for this ticket...\n";
	}
	if (status == 2) {

		points = points + 10;
		cout << "\n\nYou got +10 points\n" << points << " Points already, Congrats :)\n";

	}
	if (status < 1 || status > 2) {
		cout << "\nLOOK INTO YOUR OPTIONS!!!!!\n";
	}

	system("pause");
	system("cls");

	cout << "		POINTS: " << points;
	Identification id4;
	id4.NPC4();
	Passport ps4;
	ps4.npc4();

	cout << "\n1)Aproved\n2)Rejected:\n";
	cin >> status;

	if (status == 2) {

		points = points - 10;
		cout << "\n" << points << " You're gonna pay 10 points for this ticket...\n";
	}
	if (status == 1) {

		points = points + 10;
		cout << "\n\nYou got +10 points\n" << points << " Points already, Congrats :)\n";

	}
	if (status < 1 || status > 2) {
		cout << "\nThat's not an option...look twice next time...\n";
	}

	system("pause");
	system("cls");

	cout << "		POINTS: " << points;
	Identification id5;
	id5.NPC5();
	Passport ps5;
	ps5.npc5();

	cout << "\n1)Aproved\n2)Rejected:\n";
	cin >> status;

	if (status == 1) {

		points = points - 20;
		cout << "\n" << "Did you just aproved a terrorist...you screwed up...\n-20 Points\n";

	}
	if (status == 2) {

		points = points + 20;
		cout << "\n\nYou found the terrorist, +20 points\n" << points << " Points already, Congrats :)\n";
	}
	if (status < 1 || status > 2) {
		cout << "\nThat's not an option...look twice next time...\n";
	}

	system("pause");
	system("cls");

	cout << "		POINTS: " << points;
	Identification id6;
	id6.NPC6();
	Passport ps6;
	ps6.npc6();

	cout << "\n1)Aproved\n2)Rejected:\n";
	cin >> status;

	if (status == 2) {

		points = points - 10;
		cout << "\n" << points << " You're gonna pay 10 points for this ticket...\n";
	}
	if (status == 1) {

		points = points + 10;
		cout << "\n\nYou got +10 points\n" << points << " Points already, Congrats :)\n";
	}
	if (status < 1 || status > 2) {
		cout << "\nThat's not an option...look twice next time...\n";
	}

	system("pause");
	system("cls");

	if (points >= 50) {
		cout << "		" << points << " Final Points\n";
		Sleep(3000);
		cout << "		This is the end of the day\n";
		Sleep(3000);
		cout << "		We've been waiting for someone with such a good hability like you\n";
		Sleep(4000);
		cout << "		Second day isn't ready yet, wait for the DLC\n\n";
		Sleep(3000);
	}
	if (points < 11) {
		cout << "		" << points << " Final Points\n"; 
		Sleep(3000);
		cout << "		I think you don't know how to play...\n";
		Sleep(3000);
		cout << "		Check into the instructions, option 2...\n\n";
		Sleep(3000);
	}
	if (points > 11 && points < 50) {
		cout << "		" << points << " Final Points\n";
		Sleep(3000);
		cout << "		You're not good at all, but we need people working here so you have to be better on your second day...\n";
		Sleep(5000);
		cout << "		but we don't have second day ready yet, wait 'til the DLC\n";
		Sleep(3000);
	}

	cout << "1)Return to Menu\n2)Instructions\n3)Replay\n4)Exit\n";
	cin >> option;
	switch (option) {
	case 1:
		system("cls");
		printMenu();
		break;
	case 2:
		system("cls");
		instructions();
		break;
	case 3:
		system("cls");
		points = 0;
		playgame();
		break;
	case 4:
		EXIT_SUCCESS;
		break;
	}
}