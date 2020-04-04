#include <stdio.h>
#include <unistd.h>

int main() {

	char act;
	double num1, num2;

	printf(" \n");
	printf("<SYSYEM REBOOTING>\n");
	sleep(2);
	printf("[###             ]\n");
	sleep(1);
	printf("[#######         ]\n");
	sleep(1);
	printf("################]\n");
	sleep(1);
	printf("<REBOOTING SUCCESSFUL>\n");
	sleep(1);
	printf(" \n");
	printf("Johnny: Wake the fuck up samurai. We've got a city to burn.\n");
	printf(" \n");
	sleep(4);
	printf(" ####   ####  ##      ####  ##  ## ##      ####  ######  ####  #####\n");
	printf("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##\n");
	printf("##     ###### ##     ##     ##  ## ##     ######   ##   ##  ## #####\n");
	printf("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##\n");
	printf(" ####  ##  ## ######  ####   ####  ###### ##  ##   ##    ####  ##  ##\n");
	printf(" \n");

	printf("What do you want to do? (+,-,*,/): ");
	scanf("%c", &act);

	printf(" \n");

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);

	printf(" \n");

	switch(act)
	{
		case '+':
			printf("Result: %.1lf + %.1lf = %.1lf \n", num1, num2, num1 + num2);
		break;

		case '-':
			printf("Result: %.1lf - %.1lf = %.1lf \n", num1, num2, num1 - num2);
		break;

		case '*':
			printf("Result: %.1lf * %.1lf = %.1lf \n", num1, num2, num1 * num2);
		break;

		case '/':
			printf("Result: %.1lf / %.1lf = %.1lf \n", num1, num2, num1 / num2);
		break;

		default:
			printf("Wrong act!\n");
	}

	printf(" \n");

}


// created by h4cktivist