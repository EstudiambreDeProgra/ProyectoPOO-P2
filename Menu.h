#pragma once
#include<iostream>


class Menu{

	private:
		int option, status;
	public:
		int points = 0;
		void printMenu();
		void instructions();
		void playgame();
};

