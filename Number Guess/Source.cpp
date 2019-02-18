#include <iostream>
using namespace std;
#define AMOUNT_OF_NUMBERS 100 // Creates the max cap of numbers

int main()
{ //Creating Variables
	int min = 0; //Sets 'left' to 0
	int max = AMOUNT_OF_NUMBERS - 1; //
	int number = (min + max) / 2;
	bool numberDiscovered = false;
//Checks if player is cheating by testing if 'right' is less than 'left'. This can never happen if the player is not cheating.
	while (min <= max)
	{
		//Clears the Screen
		system("cls");
		
		//Asks for User input
		cout << "Is this your number: " << number << "?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. It's higher" << endl;
		cout << "3. It's lower" << endl;

		//Creates a player Input variable and sets it to 0
		int playerInput = 0;

		//Player inputs their response into the console window.
		cin >> playerInput;
		cin.clear();
		cin.ignore(999, '\n');
		
		//Checks for what to do next
		if (playerInput == 1)
		{
			//Win statement
			cout << "Your number is " << number << ". I win!" << endl;
			numberDiscovered = true;
			break;
		}
		else if (playerInput == 2)
		{
			//Checks if the player says the number is higher, if it is, it increases the number
			min = number + 1;
			number = (min + max) / 2;
		}
		else if (playerInput == 3)
		{
			//Checks if the player says the number is lower, if it is, it decreases the number
			max = number - 1;
			number = (min + max) / 2;
		}
	}
	//If the player has cheated, the system recognises it, and responds with a sentence.
	if (numberDiscovered == false)
	{
		cout << "You have cheated!" << endl;
	}
}