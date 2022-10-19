#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	///*задача 1*/
	//int year;
	//cin >> year;
	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	//{
	//	cout << "The year is leap";
	//}
	//else
	//{
	//	cout << "Year is not leap";
	//}



	///*задача 2*/
	//char letter;
	//cin >> letter;
	//if (letter >= 'A' || 'z' <= letter)
	//{
	//	cout << "The letter is from the Latin alphabet" << endl;
	//}
	//else
	//{
	//	cout << "The letter is not from the Latin alphabet" << endl;
	//}

	//if (letter == 'A' || letter == 'E' || letter == 'O' || letter == 'I' || letter == 'U'|| letter == 'a' || letter == 'e' || letter == 'o' || letter == 'i' || letter == 'u')
	//{
	//	cout << "The letter is vowel";
	//}
	//else
	//{
	//	cout << "The letter is not vowel";
	//}

	///*Задача 3*/
	//int a, b;
	//cin >> a >> b;
	//char rez= a > b ?'A' : 'B';
	//if (rez == 'A')
	//{
	//	cout << "First number is bigger";
	//}
	//else
	//{
	//	cout << "Secon number is bigger";
	//}

	///*Задача 4*/
	//double a, b, c;
	//cin >> a >> b >> c;

	//if (a + b > c || a + c > b || b + c > a)
	//{
	//	cout << "Valid";
	//}
	//else
	//{
	//	cout<<"Invaild";
	//}

	/*Задача 5 */
	/*double a, b, c, discriminant, x1, x2;
	cout << "Please enter a, b and c: "<<endl;
	cin >> a>> b>> c;
	discriminant = b * b - (4 * a * c);
	if (discriminant>0)
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "X1 = " << (int)(x1 * 100) / 100.0 << endl;
		cout << "X2 = " << (int)(x2 * 100) / 100.0 << endl;
	}
	else if (discriminant == 0)
	{
		cout << "The roots are the same.";
		x1=(-b)/(2*a);
		cout << "X1=X2: " <<(int) (x1*100/100.0);
	}
	else
	{
		cout << "Discriminant is <0 ";
	}*/

	/*Задача 6*/
	/*cout << "Please enter 'first number' and 'second number'" << endl;
	double firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;
	cout << "Please choose sign: ";
	char sign;
	cin >> sign;
	if (sign == '+')
	{
		cout << "First number + Second number= " << firstNumber + secondNumber;
	}
	else if (sign == '-')
	{
		cout << "First number - Second number = " << firstNumber - secondNumber;
	}
	else if (sign == '*')
	{
		cout << "First number * Second number = " << firstNumber * secondNumber;
	}
	else {
		if (secondNumber == 0 || firstNumber == 0)
		{
			cout << "Not result found";
		}
		else {
			cout << "First number / Second number = "<< firstNumber / secondNumber;
		}
	}*/


//	/*Задача 7*/
//cout << "Please enter number: ";
//	int number;
//	cin >> number;
//	if(number>=1000 && number<=9999)
//	{ 
//	int firstnumber = (((number / 1000) % 10) * 10) + (number % 10);
//	int secondNumber= (((number / 100) % 10) * 10) + ((number/10) % 10);
//	cout << "New numbers: " << endl;
//	cout << "Number 1:  ";
//	cout << firstnumber << endl;
//	cout << "Number 2:  ";
//	cout << secondNumber << endl;
//
//		if (firstnumber > secondNumber)
//		{
//			cout <<"less(" << firstnumber << ">" << secondNumber<<")";
//		}
//		else if (firstnumber < secondNumber)
//		{
//			cout <<"greater ("<< firstnumber << "<" << secondNumber<<")";
//		}
//		else
//		{
//			cout << "equal ("<<firstnumber << "=" << secondNumber<<")";
//		}
//	}
//	else
//	{
//		cout << "Wrong number";
//	}


}