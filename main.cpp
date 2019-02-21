/*
 * Brenna Smith
 * 02/21/19
 * Partner: Sam Zabaldo
 * TA: Lauren Olsen
 * Lab 1
 * All functions are required for Lab 1 and serve
 * no other purpose.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

//function declarations
void printStars();
bool isPrime(int num);
void sum300();
int howManyTerms();
void productsTwelve(int num);
void multTableTwelve();
int collatzIterations();
void printLeapYears();
void printCross(int num);
void collatzLoop(int num1, int num2);

//------------------------------------------------------------------

//main method
int main()
{
	//Problem 1: Hello World
	cout << "Hello World!" << endl;




	//Problem 2: stars
	printStars();
	cout << "Beginning of Problem 3:" << endl;




	//problem 3: Prime
	if (isPrime(5)) //expected: is prime
	{
		cout << "the number 5 is prime" << endl;
	}
	else
	{
		cout << "the number 5 is NOT prime" << endl;
	}

	if (isPrime(8)) //expected: NOT prime
	{
		cout << "the number 8 is prime" << endl;
	}
	else
	{
		cout << "the number 8 is NOT prime" << endl;
	}

	if (isPrime(1)) //expected: is prime
	{
		cout << "the number 1 is prime" << endl;
	}
	else
	{
		cout << "the number 1 is NOT prime" << endl;
	}




	printStars();
	cout << "Beginning of Problem 4:" << endl;



	//Problem 4: sum300
	sum300();




	printStars();
	cout << "Beginning of Problem 5:" << endl;




	//Problem 5: How many terms to get 100,000
	cout << howManyTerms() << endl;




	printStars();
	cout << "Beginning of Problem 6:" << endl;




	//Problem 6: products 1 through 12
	productsTwelve(3);
	cout << "---------------" << endl;
	productsTwelve(6);
	cout << "---------------" << endl;
	productsTwelve(12);




	printStars();
	cout << "Beginning of Problem 7: " << endl;




	//Problem 7: displays all multiplication tables from 1 to 12
	multTableTwelve();




	printStars();
	cout << "Beginning of Problem 8:" << endl;




	//Problem 8: return and display number of iterations of Collatz conjecture
	cout << collatzIterations() << endl;




	printStars();
	cout << "Beginning of Problem 9:" << endl;




	//Problem 9:
	printLeapYears();




	printStars();
	cout << "Beginning of Problem 10:" << endl;




	//Problem 10: prints a cross of asterisks
	printCross(5);
	cout << "--------------------------------" << endl;
	printCross(4);
	cout << "--------------------------------" << endl;
	printCross(1);




	printStars();
	cout << "Beginning of Problem 11:" << endl;




	//Problem 11: Collatz Loop
	collatzLoop(1, 2);
	cout << "--------------------------" << endl;
	collatzLoop(4, 8);
	cout << "--------------------------" << endl;
	collatzLoop(1, 10);





	return 0;
}



//------------------------------------------------------------------------------------



//function definitions


/*
 * input: none
 * output: none
 * Prints a row of stars.
 * (used as a separator)
 */
void printStars()
{
	cout << "*********************" << endl;
}


/*
 * input: int num
 * output: bool isPrime
 * Determines whether or not the input is prime
 * by modulusly dividing by all the numbers up to
 * num / 2.
 */
bool isPrime(int num)
{
	bool isPrime = true;
	int counter = 2;

	while (counter <= num / 2)
	{
		if (num % counter == 0)
		{
			isPrime = false;
			break;
		}

		counter ++;
	}

	return isPrime;
}

/*
 * input: none
 * output: none
 * Calculates the sum of all integers between 1 and 300 and prints
 * the current total after each 20th integer.
 */
void sum300()
{
	int sum = 0;

	for (int i = 1; i <= 300; i ++ )
	{
		sum = sum + i;

		if (i % 20 == 0)
		{
			cout << sum << endl;
		}
	}

}

/*
 * input: none
 * output: int numTerms
 * Determines and prints the number of terms required to get
 * the sum of 1+2+3... up to 100,000.
 */
int howManyTerms()
{
	int numTerms = 0;
	int sum = 0;

		for (int i = 1; sum <= 100000; i ++ )
		{
			sum = sum + i;

			if (sum >= 100000)
			{
				numTerms = i;
			}
		}

	return numTerms;
}

/*
 * input: int num
 * output: none
 * Prints all the product of num * 1, num * 2, num * 3...
 * all the way to num * 12.
 */
void productsTwelve(int num)
{
	for (int i = 1; i <= 12; i ++)
	{
		cout << num * i << endl;
	}
}

/*
 * input: none
 * output: none
 * Prints all multiplication tables between 1 and 12.
 */
void multTableTwelve()
{
	for (int i = 1; i <= 12; i ++)
	{
		productsTwelve(i);
		cout << "-----------------------" << endl;
	}
}

/*
 * input: none
 * output: int iterations
 * Prompts user for number, then runs Collatz Conjecture algorithm
 * until 1 is reached, then return the number of iterations.
 */
int collatzIterations()
{
	int num;
	cout << "Enter a natural number: " << endl;
	cin >> num;

	int iterations = 0;
	while (num > 1)
	{
		if (num % 2 == 0)
		{
			num /= 2;
		}

		else
		{
			num = (num * 3) + 1;
		}

		iterations ++;
	}

	return iterations;
}

/*
 * input: none
 * output: none
 * Loops and prints out all leap years between 2019 and 2419
 */
void printLeapYears()
{
	for (int i = 2019; i <= 2419; i ++)
	{
		if (i % 4 == 0)
		{
			if (i % 100 != 0)
			{
				cout << i << endl;
			}

			if (i % 400 == 0)
			{
				cout << i << endl;
			}
		}
	}
}

/*
 * input: int num
 * output: none
 * Prints a cross made of asterisks with the number of asterisks equal to num.
 * Rounds up to next odd num if num is even.
 */
void printCross(int num)
{
	if (num % 2 == 0)
	{
		num ++;
	}

	//prints top V-shape
	for (int i = 0; i < num; i ++)
	{
		for (int j = 0; j < i; j ++)
		{
			cout << " ";
		}

		cout << "*";

		for (int j = 0; j < ((2 * num) - (2 * i) - 1); j ++)
		{
			cout << " ";
		}

		cout << "*" << endl;
	}

	//prints the middle asterisk
	for (int i = 0; i < num; i ++)
	{
		cout << " ";
	}

		cout << "*" << endl;

	//prints the bottom upside-down V-shape
	for (int i = num; i > 0; i --)
	{
		for (int j = i; j > 1; j --)
		{
			cout << " ";
		}

		cout << "*";

		for (int j = 0; j < (2 * num) - (2 * i) + 1; j ++)
		{
			cout << " ";
		}

		cout << "*" << endl;
	}
}

/*
 * input: int num1, int num2 (num1 must be smalle than num2)
 * output: none
 * For every number between num1 and num2, print the number and determine
 * if the Collatz Conjecture applies to it. Print each number and the result.
 */
void collatzLoop(int num1, int num2)
{
	for (int i = num1; i <= num2; i ++)
	{
		cout << i << endl;

		int num = i; //we can't just use i here because, at the end of
					 //the while loop, i is 1, then i ++ makes i = 2,
					 //and the while loop sees this as 2 > 1, so this
					 //makes an infinite loop

		while (num > 1)
		{
			if (num % 2 == 0)
			{
				num /= 2;
			}

			else
			{
				num = (num * 3) + 1;
			}
		}

		if (num != 1)
		{
			cout << "We broke the Collatz Conjecture!" << endl;
		}

		else
		{
			cout << "Collatz Conjecture is still working" << endl;
		}
	}
}

