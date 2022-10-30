#include "Passport.h"
#include "Identification.h"
#include<iostream>

using namespace std;


void Passport::npc1() {

	lastname = "Marston";
	name = "John";
	gender = "Masculine";
	nationality = "British";
	age = 28;
	passportNumber = 493252450;

	cout << "\n\n	Passport:" << "\nName: " << name << " " << lastname << "\nGender: " << gender << "\nAge: " << age << "\nNationality: " << nationality << "\nPassport Number: " << passportNumber << "\n\n";

	destination = "Egypt";
	job = "Engineer";
	ticket = "10/03/2024\n";

	cout << "\nDestination: " << destination << "\nJob: " << job << "\n" << "Ticket expiration: " << ticket;
}

void Passport::npc2() {

	lastname = "Portman";
	name = "Natalie";
	gender = "Femenine";
	nationality = "Canadian";
	age = 36;
	passportNumber = 555783320;

	cout << "\n\n	Passport:" << "\nName: " << name << " " << lastname << "\nGender: " << gender << "\nAge: " << age << "\nNationality: " << nationality << "\nPassport Number: " << passportNumber << "\n\n";

	destination = "Yemen";
	job = "Model";
	ticket = "08/12/2022\n";

	cout << "\nDestination: " << destination << "\nJob: " << job << "\n" << "Ticket expiration: " << ticket << "Arrested for exhibitionism\n";

}

void Passport::npc3() {

	lastname = "D'Artagnan";
	name = "Edmont";
	gender = "Masculine";
	nationality = "French";
	age = 22;
	passportNumber = 785492145;

	cout << "\n\n	Passport:" << "\nName: " << name << " " << lastname << "\nGender: " << gender << "\nAge: " << age << "\nNationality: " << nationality << "\nPassport Number: " << passportNumber << "\n\n";

	destination = "Amsterdam";
	job = "Stripper";
	ticket = "16/09/2024\n";

	cout << "\nDestination: " << destination << "\nJob: " << job << "\n" << "Ticket expiration: " << ticket << "Arrested for drunk driving\n";
}

void Passport::npc4() {

	lastname = "Ragnarson";
	name = "Sigurd";
	gender = "Masculine";
	nationality = "Norwegian";
	age = 45;
	passportNumber = 783366742;

	cout << "\n\n	Passport:" << "\nName: " << name << " " << lastname << "\nGender: " << gender << "\nAge: " << age << "\nNationality: " << nationality << "\nPassport Number: " << passportNumber << "\n\n";

	destination = "Spain";
	job = "Farmer";
	ticket = "13/01/2023\n";

	cout << "\nDestination: " << destination << "\nJob: " << job << "\n" << "Ticket expiration: " << ticket;
}

void Passport::npc5() {

	lastname = "Villa";
	name = "Carla";
	gender = "Femenine";
	nationality = "Mexican";
	age = 29;
	passportNumber = 974679133;

	cout << "\n\n	Passport:" << "\nName: " << name << " " << lastname << "\nGender: " << gender << "\nAge: " << age << "\nNationality: " << nationality << "\nPassport Number: " << passportNumber << "\n\n";

	destination = "EUA";
	job = "Terrorist";
	ticket = "10/12/2025\n";

	cout << "\nDestination: " << destination << "\nJob: " << job << "\n" << "Ticket expiration: " << ticket << "Arrested for killing a cop\n";
}

void Passport::npc6() {

	lastname = "Bianco";
	name = "Alessandro";
	gender = "Masculine";
	nationality = "Italian";
	age = 60;
	passportNumber = 678894029;

	cout << "\n\n	Passport:" << "\nName: " << name << " " << lastname << "\nGender: " << gender << "\nAge: " << age << "\nNationality: " << nationality << "\nPassport Number: " << passportNumber << "\n\n";

	destination = "Netherlands";
	job = "Pilot";
	ticket = "10/11/2025\n";

	cout << "\nDestination: " << destination << "\nJob: " << job << "\n" << "Ticket expiration: " << ticket;
}