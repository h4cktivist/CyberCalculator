using System;
using System.Threading;

public class CyberCalculator {
	public static void Main(String[] args) {

		Console.WriteLine(" ");
		Console.WriteLine("<SYSYEM REBOOTING>");
		System.Threading.Thread.Sleep(2000);
		Console.WriteLine("[###             ]");
		System.Threading.Thread.Sleep(1000);
		Console.WriteLine("[#######         ]");
		System.Threading.Thread.Sleep(1000);
		Console.WriteLine("[################]");
		System.Threading.Thread.Sleep(1000);
		Console.WriteLine("<REBOOTING SUCCESSFUL>");
		System.Threading.Thread.Sleep(1000);
		Console.WriteLine(" ");
		Console.WriteLine("Johnny: Wake the fuck up samurai. We've got a city to burn.");
		System.Threading.Thread.Sleep(4000);
		Console.WriteLine(" ");
		Console.WriteLine(" ####   ####  ##      ####  ##  ## ##      ####  ######  ####  #####");
		Console.WriteLine("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##");
		Console.WriteLine("##     ###### ##     ##     ##  ## ##     ######   ##   ##  ## #####");
		Console.WriteLine("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##");
		Console.WriteLine(" ####  ##  ## ######  ####   ####  ###### ##  ##   ##    ####  ##  ##");
		Console.WriteLine(" ");

		Console.Write("What do you want to do? (+,-,/,*, %): ");
		string act = Console.ReadLine();
		Console.Write("Enter first number: ");
		double num1 = Convert.ToDouble(Console.ReadLine());
		Console.Write("Enter second number: ");
		double num2 = Convert.ToDouble(Console.ReadLine());
		Console.WriteLine(" ");
		
		switch(act)
		{
			case "+":
				Console.WriteLine($"Result is: {num1 + num2}");
				break;
			case "-":
				Console.WriteLine($"Result is: {num1 - num2}");
				break;
			case "/":
				Console.WriteLine($"Result is: {num1 / num2}");
				break;
			case "*":
				Console.WriteLine($"Result is: {num1 * num2}");
				break;
			case "%":
				Console.WriteLine($"Result is: {num1 % num2}");
				break;
			default:
				Console.WriteLine("Wrong action selected!");
				break;
		}

		Console.WriteLine(" ");
		Console.WriteLine("Thanks for using it! (c)h4cktivist");
	}
}


// created by h4cktivist