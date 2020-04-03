#include <iostream>
#include <unistd.h>

using namespace std;

int main(void) {

	char act;
	float num1;
	float num2;

	cout << " " << endl;
	cout << "<SYSYEM REBOOTING>" << endl;
	sleep(2);
	cout << "[###             ]" << endl;
	sleep(1);
	cout << "[#######         ]" << endl;
	sleep(1);
	cout << "[################]" << endl;
	sleep(1);
	cout << "<REBOOTING SUCCESSFUL>" << endl;
	sleep(1);
	cout << " " << endl;
	cout << "Johnny: Wake the fuck up samurai. We've got a city to burn." << endl;
	cout << " " << endl;
	sleep(4);

	cout <<  " ####   ####  ##      ####  ##  ## ##      ####  ######  ####  #####" << endl;
	cout <<  "##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##" << endl;
	cout <<  "##     ###### ##     ##     ##  ## ##     ######   ##   ##  ## #####" << endl;
	cout <<  "##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##" << endl;
	cout <<  " ####  ##  ## ######  ####   ####  ###### ##  ##   ##    ####  ##  ##" << endl;
	cout <<  " " << endl;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "What do you want to do? (+,-,*,/): ";
	cin >> act;

	cout << " " << endl;

	switch(act)
	{
		case '+':
			cout << "Result = " << num1 + num2 << endl;
		break;

		case '-':
			cout << "Result = " << num1 - num2 << endl;
		break;

		case '*':
			cout << "Result = " << num1 * num2 << endl;
		break;

		case '/':
			cout << "Result = " << num1 / num2 << endl;
		break;
	}

	cout << " " << endl;

}


// cteated by h4cktivist