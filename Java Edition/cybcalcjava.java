import java.util.Scanner;

class CyberCalculator {

	public static void main(String[] args){

		System.out.println(" ");
		System.out.println("Johnny: Wake the fuck up samurai. We've got a city to burn.");
		System.out.println(" ");
		System.out.println(" ####   ####  ##      ####  ##  ## ##      ####  ######  ####  #####");
		System.out.println("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##");
		System.out.println("##     ###### ##     ##     ##  ## ##     ######   ##   ##  ## #####");
		System.out.println("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##");
		System.out.println(" ####  ##  ## ######  ####   ####  ###### ##  ##   ##    ####  ##  ##");


		Scanner in = new Scanner(System.in);

		System.out.println("  ");

		System.out.print("What do you want to do? (+,-,/,*, %): ");
		String act = in.nextLine();

		System.out.print("Enter first number: ");
		int num1 = in.nextInt();

		System.out.print("Enter second number: ");
		int num2 = in.nextInt();


		switch(act){
			case "+":
				System.out.printf("Result:  %d \n", num1+num2);
				break;

			case "-":		
				System.out.printf("Result:  %d \n", num1 - num2);
				break;

			case "/":	
				System.out.printf("Result:  %d \n", num1/num2);
				break;

			case "*":	
				System.out.printf("Result:  %d \n", num1*num2);
				break;

			case "%":		
				System.out.printf("Result:  %d \n", num1%num2);
				break;

			default:
				System.out.printf("Act is not correct!");
				break;
		}


		in.close();
	}
}


// created by h4cktivist