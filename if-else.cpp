#include <iostream>

int main()
{
	//Exercise 1
	/*std::cout << "Please enter first number:" << std::endl;
	int firstNumber;
	std::cin >> firstNumber;
	std::cout << "Please enter second number:" << std::endl;
	int secondNumber;
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
	{
		std::cout << firstNumber;
	}
	else if (secondNumber > firstNumber)
	{
		std::cout << secondNumber;
	}
	else
	{
		std::cout << "First number is equal to second number;";
	}*/





	//Exercise 2
	//std::cout << "Please enter first number:" << std::endl;
	//double firstNumber;
	//std::cin >> firstNumber;
	//std::cout << "Please enter second number:" << std::endl;
	//double secondNumber;
	//std::cin >> secondNumber;
	//std::cout << "Please enter third number:" << std::endl;
	//double thirdNumber;
	//std::cin >> thirdNumber;
	//if (firstNumber > secondNumber && firstNumber > thirdNumber)
	//{
	//	std::cout<<"Biggest umber is first number" << std::endl;
	//}
	//else if (secondNumber > firstNumber && secondNumber > thirdNumber)
	//{
	//	std::cout << "Biggest umber is second number" << std::endl;

	//}
	//else if(thirdNumber>firstNumber && thirdNumber>secondNumber)
	//{
	//	std::cout << "Biggest umber is third number" << std::endl;

	//}
	//if(firstNumber==secondNumber || thirdNumber==secondNumber || thirdNumber==firstNumber)
	//{
	//	std::cout << "Exist equal numbers " << std::endl;
	//}






	////Exercise3
	//std::cout << "Please enter first number:" << std::endl;
	//int firstNumber;
	//std::cin >> firstNumber;
	//std::cout << "Please enter second number:" << std::endl;
	//int secondNumber;
	//std::cin >> secondNumber;

	//int sum = firstNumber + secondNumber;
	//int sub = abs(firstNumber - secondNumber);
	//int multi = firstNumber * secondNumber;
	//int division = (int)firstNumber / secondNumber;


	//if ((sum > sub) && (sum > multi) && (sum > division))
	//{
	//	std::cout << sum;
	//}
	//else if ((sub > sum) && (sub > multi) && (sub > division))
	//{
	//	std::cout << sub;
	//}
	//else if ((multi > sum) && (multi > sub) && (multi > division))
	//{
	//	std::cout << multi;
	//}
	//else
	//{
	//	std::cout << division;
	//}






	////Exercise4

	//std::cout << "Please enter first number" << std::endl;
	//int firstNumber;
	//std::cin >> firstNumber;
	//std::cout << "Please enter second number" << std::endl;
	//int secondNumber;
	//std::cin >> secondNumber;
	//std::cout << "Please enter third number" << std::endl;
	//int thirdNumber;
	//std::cin >> thirdNumber;
	//int max = 0;
	//int mid = 0;
	//int min = 0;

	//if (firstNumber < secondNumber && firstNumber < thirdNumber)
	//{
	//	min = firstNumber;
	//	if (secondNumber > thirdNumber)
	//	{
	//		max = secondNumber;
	//		mid = thirdNumber;
	//	}
	//	else
	//	{
	//		mid = secondNumber;
	//		max = thirdNumber;
	//	}
	//	std::cout << min << mid << max;
	//}
	//else if (secondNumber < firstNumber && secondNumber < thirdNumber)
	//{
	//	min = secondNumber;
	//	if (firstNumber > thirdNumber)
	//	{
	//		max = firstNumber;
	//		mid = thirdNumber;
	//	}
	//	else
	//	{
	//		mid = firstNumber;
	//		max = thirdNumber;
	//	}
	//	std::cout << min << mid << max;
	//}
	//else
	//{
	//	min = thirdNumber;
	//	if (secondNumber > firstNumber)
	//	{
	//		max = secondNumber;
	//		mid = firstNumber;
	//	}
	//	else
	//	{
	//		mid = secondNumber;
	//		max = firstNumber;
	//	}
	//	std::cout << min << mid << max;
	//}






	//Exercise5
	//std::cout << "Please enter number:" << std::endl;
	//int number;
	//std::cin >> number;

	//int thirdIndex = number % 10;
	//number /= 10;
	//int secondIndex = number % 10;
	//number /= 10;
	//int firstIndex = number % 10;
	//number /= 10;

	////std::cout << firstIndex <<" "<<secondIndex<<" "<<thirdIndex<< std::endl;//Проверка
	//bool equal = true;

	//if (firstIndex==secondIndex || secondIndex==thirdIndex || thirdIndex==firstIndex)
	//{
	//	std::cout << "true";
	//}
	//else
	//{
	//	std::cout << "false";
	//}






	//Exercise6
	//std::cout << "Please enter number" << std::endl;
	//double number;
	//std::cin >> number;
	//if (number == (int)number)
	//{
	//	std::cout << "Integer" << std::endl;
	//	//number = (int)number;
	//	if ((int)number%2==0)
	//	{
	//		std::cout << "Even" << std::endl;;
	//	}
	//	else
	//	{
	//		std::cout << "Odd" << std::endl;
	//	}

	//}
	//else
	//{
	//	std::cout << "Rational" << std::endl;;

	//	if (number > 0)
	//	{
	//		std::cout << "Positive" << std::endl;;
	//	}
	//	else
	//	{
	//		std::cout << "Negative" << std::endl;;
	//	}

	//}





	//Exercise7
	/*std::cout << "Please enter a,b,c: "<<std::endl;
	double a, b, c;
	std::cin >> a >> b >> c;

	if (a + b >= c || a + c >= b || b + c >= a)
	{
		std::cout << "False";
	}
	else
	{
		std::cout<<"True";
	}*/
	






	////Eercise8
	//std::cout << "Please enter first number:" << std::endl;
	//double firstNumber;
	//std::cin >> firstNumber;
	//std::cout << "Please enter second number:" << std::endl;
	//double secondNumber;
	//std::cin >> secondNumber;
	//std::cout << "Please enter third number:" << std::endl;
	//double thirdNumber;
	//std::cin >> thirdNumber;
	//int max = 0;
	//int mid = 0;
	//int min = 0;


	//if ((firstNumber <= 9 && 0 <= firstNumber) && (secondNumber <= 9 && 0 <= secondNumber) && (thirdNumber<= 9 && 0 <= thirdNumber))
	//{
	//	if (firstNumber > secondNumber && firstNumber > thirdNumber)
	//	{
	//		max = firstNumber;
	//		if (secondNumber > thirdNumber)
	//		{
	//			min = thirdNumber;
	//			mid = secondNumber;
	//		}
	//		else
	//		{
	//			mid = thirdNumber;
	//			min = secondNumber;
	//		}
	//		std::cout << max << mid << min;
	//	}
	//	else if (secondNumber > firstNumber && secondNumber > thirdNumber)
	//	{
	//		max = secondNumber;
	//		if (firstNumber > thirdNumber)
	//		{
	//			mid = firstNumber;
	//			min = thirdNumber;
	//		}
	//		else
	//		{
	//			min = firstNumber;
	//			mid = thirdNumber;
	//		}
	//		std::cout << max << mid << min;
	//	}
	//	else
	//	{
	//		max = thirdNumber;
	//		if (secondNumber > firstNumber)
	//		{
	//			mid = secondNumber;
	//			min = firstNumber;
	//		}
	//		else
	//		{
	//			min = secondNumber;
	//			mid = firstNumber;
	//		}
	//		std::cout << max << mid << min;


	//	}
	//}
	//else
	//{
	//	std::cout << "Wrong input";
	//}




	//Exercise 9
	//std::cout << "Please enter number: " << std::endl;
	//int number;
	//std::cin >> number;
	//int digitTwo = number % 10;
	//int digitOne = (number / 10) % 10;
	//
	////::cout<< digitTwo;

	//if (number >= 0 && number <= 100)
	//{
	//	if (digitOne == 0 && digitTwo >= 1 && digitTwo <= 9)
	//	{
	//		switch (digitTwo)
	//		{
	//		case 1: digitTwo = 1; std::cout << "One"; break;
	//		case 2: digitTwo = 2; std::cout << "Two"; break;
	//		case 3: digitTwo = 3; std::cout << "Three"; break;
	//		case 4: digitTwo = 4; std::cout << "Four"; break;
	//		case 5: digitTwo = 5; std::cout << "Five"; break;
	//		case 6: digitTwo = 6; std::cout << "Six"; break;
	//		case 7: digitTwo = 7; std::cout << "Seven"; break;
	//		case 8: digitTwo = 8; std::cout << "Eight"; break;
	//		case 9: digitTwo = 8; std::cout << "Nine"; break;
	//		default:
	//			break;
	//		}
	//	}
	//	else if (digitOne==1)
	//	{
	//		
	//			switch (digitTwo)
	//			{
	//			case 1: digitTwo = 1; std::cout << "Eleven"; break;
	//			case 2: digitTwo = 2; std::cout << "Twelve"; break;
	//			case 3: digitTwo = 3; std::cout << "Thirteen"; break;
	//			case 4: digitTwo = 4; std::cout << "Fourteen"; break;
	//			case 5: digitTwo = 5; std::cout << "Fifteen"; break;
	//			case 6: digitTwo = 6; std::cout << "Sixteen"; break;
	//			case 7: digitTwo = 7; std::cout << "Seventeen"; break;
	//			case 8: digitTwo = 8; std::cout << "Eighteen"; break;
	//			case 9: digitTwo = 8; std::cout << "Nineteen"; break;
	//			default:
	//				break;
	//			}
	//	}

	//	else if (digitOne == 2)
	//	{
	//		if (digitTwo == 0)
	//		{
	//			std::cout << "Twenty";
	//		}
	//		else{
	//		std::cout << "Twenty";
	//		switch (digitTwo)
	//		{
	//		case 1: digitTwo = 1; std::cout << " One"; break;
	//		case 2: digitTwo = 2; std::cout << " Two"; break;
	//		case 3: digitTwo = 3; std::cout << " Three"; break;
	//		case 4: digitTwo = 4; std::cout << " Four"; break;
	//		case 5: digitTwo = 5; std::cout << " Five"; break;
	//		case 6: digitTwo = 6; std::cout << " Six"; break;
	//		case 7: digitTwo = 7; std::cout << " Seven"; break;
	//		case 8: digitTwo = 8; std::cout << " Eight"; break;
	//		case 9: digitTwo = 8; std::cout << " Nine"; break;
	//		default:
	//			break;
	//		}
	//		}
	//	}
	//	else if (digitOne == 3)
	//	{
	//		if (digitTwo == 0)
	//		{
	//			std::cout << "Thirty";
	//		}
	//		else {
	//			std::cout << "Thirty";
	//			switch (digitTwo)
	//			{
	//			case 1: digitTwo = 1; std::cout << " One"; break;
	//			case 2: digitTwo = 2; std::cout << " Two"; break;
	//			case 3: digitTwo = 3; std::cout << " Three"; break;
	//			case 4: digitTwo = 4; std::cout << " Four"; break;
	//			case 5: digitTwo = 5; std::cout << " Five"; break;
	//			case 6: digitTwo = 6; std::cout << " Six"; break;
	//			case 7: digitTwo = 7; std::cout << " Seven"; break;
	//			case 8: digitTwo = 8; std::cout << " Eight"; break;
	//			case 9: digitTwo = 8; std::cout << " Nine"; break;
	//			default:
	//				break;
	//			}
	//		}


	//	}
	//	else if (digitOne == 4)
	//	{
	//		if (digitTwo == 0)
	//		{
	//			std::cout << "Forty";
	//		}
	//		else {
	//			std::cout << "Forty";
	//			switch (digitTwo)
	//			{
	//			case 1: digitTwo = 1; std::cout << " One"; break;
	//			case 2: digitTwo = 2; std::cout << " Two"; break;
	//			case 3: digitTwo = 3; std::cout << " Three"; break;
	//			case 4: digitTwo = 4; std::cout << " Four"; break;
	//			case 5: digitTwo = 5; std::cout << " Five"; break;
	//			case 6: digitTwo = 6; std::cout << " Six"; break;
	//			case 7: digitTwo = 7; std::cout << " Seven"; break;
	//			case 8: digitTwo = 8; std::cout << " Eight"; break;
	//			case 9: digitTwo = 8; std::cout << " Nine"; break;
	//			default:
	//				break;
	//			}
	//		}


	//	}
	//	else if (digitOne == 5)
	//	{
	//	if (digitTwo == 0)
	//	{
	//		std::cout << "Fifty";
	//	}
	//	else {
	//		std::cout << "Fifty";
	//		switch (digitTwo)
	//		{
	//		case 1: digitTwo = 1; std::cout << " One"; break;
	//		case 2: digitTwo = 2; std::cout << " Two"; break;
	//		case 3: digitTwo = 3; std::cout << " Three"; break;
	//		case 4: digitTwo = 4; std::cout << " Four"; break;
	//		case 5: digitTwo = 5; std::cout << " Five"; break;
	//		case 6: digitTwo = 6; std::cout << " Six"; break;
	//		case 7: digitTwo = 7; std::cout << " Seven"; break;
	//		case 8: digitTwo = 8; std::cout << " Eight"; break;
	//		case 9: digitTwo = 8; std::cout << " Nine"; break;
	//		default:
	//			break;
	//		}
	//	}


	//	}
	//	else if (digitOne == 6)
	//	{
	//	if (digitTwo == 0)
	//	{
	//		std::cout << "Sixty";
	//	}
	//	else {
	//		std::cout << "Sixty";
	//		switch (digitTwo)
	//		{
	//		case 1: digitTwo = 1; std::cout << " One"; break;
	//		case 2: digitTwo = 2; std::cout << " Two"; break;
	//		case 3: digitTwo = 3; std::cout << " Three"; break;
	//		case 4: digitTwo = 4; std::cout << " Four"; break;
	//		case 5: digitTwo = 5; std::cout << " Five"; break;
	//		case 6: digitTwo = 6; std::cout << " Six"; break;
	//		case 7: digitTwo = 7; std::cout << " Seven"; break;
	//		case 8: digitTwo = 8; std::cout << " Eight"; break;
	//		case 9: digitTwo = 8; std::cout << " Nine"; break;
	//		default:
	//			break;
	//		}
	//	}


	//	}
	//	else if (digitOne == 7)
	//	{
	//	if (digitTwo == 0)
	//	{
	//		std::cout << "Seventy";
	//	}
	//	else {
	//		std::cout << "Seventy";
	//		switch (digitTwo)
	//		{
	//		case 1: digitTwo = 1; std::cout << " One"; break;
	//		case 2: digitTwo = 2; std::cout << " Two"; break;
	//		case 3: digitTwo = 3; std::cout << " Three"; break;
	//		case 4: digitTwo = 4; std::cout << " Four"; break;
	//		case 5: digitTwo = 5; std::cout << " Five"; break;
	//		case 6: digitTwo = 6; std::cout << " Six"; break;
	//		case 7: digitTwo = 7; std::cout << " Seven"; break;
	//		case 8: digitTwo = 8; std::cout << " Eight"; break;
	//		case 9: digitTwo = 8; std::cout << " Nine"; break;
	//		default:
	//			break;
	//		}

	//		}

	//	}
	//	else if (digitOne == 8)
	//	{
	//	if (digitTwo == 0)
	//	{
	//		std::cout << "Eighty";
	//	}
	//	else {
	//		std::cout << "Eighty";
	//		switch (digitTwo)
	//		{
	//		case 1: digitTwo = 1; std::cout << " One"; break;
	//		case 2: digitTwo = 2; std::cout << " Two"; break;
	//		case 3: digitTwo = 3; std::cout << " Three"; break;
	//		case 4: digitTwo = 4; std::cout << " Four"; break;
	//		case 5: digitTwo = 5; std::cout << " Five"; break;
	//		case 6: digitTwo = 6; std::cout << " Six"; break;
	//		case 7: digitTwo = 7; std::cout << " Seven"; break;
	//		case 8: digitTwo = 8; std::cout << " Eight"; break;
	//		case 9: digitTwo = 8; std::cout << " Nine"; break;
	//		default:
	//			break;
	//		}

	//	}

	//	}
	//	else if (digitOne == 9)
	//	{
	//	if (digitTwo == 0)
	//	{
	//		std::cout << "Ninety";
	//	}
	//	else {
	//		std::cout << "Ninety";
	//		switch (digitTwo)
	//		{
	//		case 1: digitTwo = 1; std::cout << " One"; break;
	//		case 2: digitTwo = 2; std::cout << " Two"; break;
	//		case 3: digitTwo = 3; std::cout << " Three"; break;
	//		case 4: digitTwo = 4; std::cout << " Four"; break;
	//		case 5: digitTwo = 5; std::cout << " Five"; break;
	//		case 6: digitTwo = 6; std::cout << " Six"; break;
	//		case 7: digitTwo = 7; std::cout << " Seven"; break;
	//		case 8: digitTwo = 8; std::cout << " Eight"; break;
	//		case 9: digitTwo = 8; std::cout << " Nine"; break;
	//		default:
	//			break;
	//		}

	//	}

	//	}
	//	
	//}

	////Exercise 10
	//std::cout << "Please enter first number: ";
	//int firstNumber;
	//std::cin >> firstNumber;
	//std::cout << "Please enter second number: ";
	//int secondNumber;
	//std::cin >> secondNumber;
	//int sum = firstNumber + secondNumber;
	//if (sum > 21)
	//{
	//	std::cout << "True";
	//}
	//else
	//{
	//	std::cout << "False";
	//}
		

	////Exercise 11
	/*int startA, endA, startB, endB;
	int number;

	std::cout << "Please enter first number: ";
	std::cin >> startA;

	std::cout << "Please enter second number: ";
	std::cin >> endA;

	std::cout << "Please enter third number: ";
	std::cin >> startB;


	std::cout << "Please enter fourth number: ";
	std::cin >> endB;

	std::cout << "Please enter fifth number: ";
	std::cin >> number;

	bool uni = number >= startA && number <= endB;
	bool sec = startB <= number && number <= endA;
	bool difference = startA > number && number <= startB;
	bool multi = uni && !sec;
	std::cout << std::boolalpha << uni << " " << sec << " " << difference << " " << multy;*/
	



	////Exercise 12
	//	char startA, endA, startB, endB;
	//	char letter;

	//	std::cout << "Please enter first letter: ";
	//	std::cin >> startA;

	//	std::cout << "Please enter second letter: ";
	//	std::cin >> endA;

	//	std::cout << "Please enter third letter: ";
	//	std::cin >> startB;


	//	std::cout << "Please enter fourth letter: ";
	//	std::cin >> endB;

	//	std::cout << "Please enter fifth letter: ";
	//	std::cin >> letter;

	//	bool unification = letter >= startA && letter <= endB;
	//	bool section = startB <= letter && letter <= endA;
	//	bool diffrence = letter >= startA && letter <= startB;
	//	bool multi = unification && !section;
	//	std::cout << std::boolalpha << unification << " " << section << " " << diffrence << " " << multi; 



	

	////Exercise 13
	//std::cout << "Please enter day: ";
	//int day;
	//std::cin >> day;

	//std::cout << "Please enter month: ";
	//int month ;
	//std::cin >> month;

	//std::cout << "Please enter year: ";
	//int year;
	//std::cin >> year;
	//bool yearL = true;
	//
	//

	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	//{
	//	yearL = true;
	//}
	//else
	//{
	//	yearL = false;
	//}
	//


	//if (yearL == false)
	//{
	//	//february=28;
	//	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	//	{
	//		if (day >= 1 && day <= 9)
	//		{
	//			day += 1;
	//			std::cout << "0" << day << ":" << month << ":" << year;
	//		}
	//		else if (day >=  10 && day <= 30)
	//		{
	//			day += 1;
	//			std::cout << day << ":" << month << ":" << year;
	//		}
	//		else if(day==31 && month!=12)
	//		{

	//			day = 1;
	//			month += 1;
	//			std::cout << "0" << day<<":"<<month << ":" << year;
	//			
	//		}
	//		else if (day == 31 && month == 12)
	//		{
	//			
	//			
	//				day = 1;
	//				month = 1;
	//				year += 1;
	//				std::cout << "0" << day << ":" << "0" << month << ":" << year;
	//			
	//		}
	//		else
	//		{
	//			std::cout << "Wrong day";
	//		}

	//	}
	//	else if (month == 2)
	//	{
	//		if (day >= 1 && day <= 9)
	//		{
	//			day += 1;
	//			std::cout << "0" << day<<":"<<"0" << month << ":" << year;
	//		}
	//		else if (day >= 10 && day <= 27)
	//		{
	//			day += 1;
	//			std::cout << day << ":"<<"0"  << month << ":"<< year;
	//		}
	//		else if (day == 28)
	//		{
	//			day = 1;
	//			month += 1;
	//			std::cout << "0" << day<<":" << "0" << month << ":" <<year;
	//		}
	//		else
	//		{
	//			std::cout << "Wrong day";
	//		}
	//	}
	//	else if(month == 4 || month == 6 || month == 9 || month == 11)
	//	{

	//		if (day >= 1 && day <= 9)
	//		{
	//			day += 1;
	//			std::cout << "0" << day << ":" << month << ":" << year;
	//		}
	//		else if (day >= 10 && day <= 29)
	//		{
	//			day += 1;
	//			std::cout << day << ":" << month << ":" << year;
	//		}
	//		else if (day == 30 )
	//		{

	//			day = 1;
	//			month += 1;
	//			std::cout << "0" << day << ":" << month << ":" << year;

	//		}
	//		
	//		else
	//		{
	//			std::cout << "Wrong day";
	//		}

	//	}
	//	else
	//	{
	//		std::cout << "Wrong month";
	//	}
	//}
	//else
	//{

	//	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	//	{
	//		if (day >= 1 && day <= 9)
	//		{
	//			day += 1;
	//			std::cout << "0" << day << ":" << month << ":" << year;
	//		}
	//		else if (day >= 10 && day <= 30)
	//		{
	//			day += 1;
	//			std::cout << day << ":" << month << ":" << year;
	//		}
	//		else if (day == 31 && month != 12)
	//		{

	//			day = 1;
	//			month += 1;
	//			std::cout << "0" << day << ":" << month << ":" << year;

	//		}
	//		else if (day == 31 && month == 12)
	//		{


	//			day = 1;
	//			month = 1;
	//			year += 1;
	//			std::cout << "0" << day << ":" << "0" << month << ":" << year;

	//		}
	//		else
	//		{
	//			std::cout << "Wrong day";
	//		}

	//	}
	//	else if (month == 2)
	//	{
	//		if (day >= 1 && day <= 9)
	//		{
	//			day += 1;
	//			std::cout << "0" << day << ":" << "0" << month << ":" << year;
	//		}
	//		else if (day >= 10 && day <= 28)
	//		{
	//			day += 1;
	//			std::cout << day << ":" << "0" << month << ":" << year;
	//		}
	//		else if (day == 29)
	//		{
	//			day = 1;
	//			month += 1;
	//			std::cout << "0" << day << ":" << "0" << month << ":" << year;
	//		}
	//		else
	//		{
	//			std::cout << "Wrong day";
	//		}
	//	}
	//	else if(month==4 || month==6 || month==9 || month==11)
	//	{

	//		if (day >= 1 && day <= 9)
	//		{
	//			day += 1;
	//			std::cout << "0" << day << ":" << month << ":" << year;
	//		}
	//		else if (day >= 10 && day <= 29)
	//		{
	//			day += 1;
	//			std::cout << day << ":" << month << ":" << year;
	//		}
	//		else if (day == 30)
	//		{

	//			day = 1;
	//			month += 1;
	//			std::cout << "0" << day << ":" << month << ":" << year;

	//		}

	//		else
	//		{
	//			std::cout << "Wrong day";
	//		}

	//	}
	//	else
	//	{
	//		std::cout << "Wrong month";
	//	}
	//}
	//end ex 13

	



	////Exercise14
	/*std::cout << "Please enter first day" << std::endl;
	int dayOne;
	std::cin >> dayOne;
	std::cout << "Please enter first month" << std::endl;
	int monthOne;
	std::cin >> monthOne;
	std::cout << "Please enter first year" << std::endl;
	int yearOne;
	std::cin >> yearOne;

	std::cout << "Please enter first hour" << std::endl;
	int hourOne;
	std::cin >> hourOne;
	std::cout << "Please enter first min" << std::endl;
	int minOne;
	std::cin >> minOne;
	std::cout << "Please enter first sec" << std::endl;
	int secOne;
	std::cin >> secOne;

	std::cout << "Please enter second day" << std::endl;
	int dayTwo;
	std::cin >> dayTwo;
	std::cout << "Please enter second month" << std::endl;
	int monthTwo;
	std::cin >> monthTwo;
	std::cout << "Please enter second year" << std::endl;
	int yearTwo;
	std::cin >> yearTwo;

	std::cout << "Please enter second hour" << std::endl;
	int hourTwo;
	std::cin >> hourTwo;
	std::cout << "Please enter second min" << std::endl;
	int minTwo;
	std::cin >> minTwo;
	std::cout << "Please enter second sec" << std::endl;
	int secTwo;
	std::cin >> secTwo;


	int finalDay;
	int finalMonth;
	int finalYear;

	int finalHour;
	int finalMin;
	int finalSec;

	if (dayOne > dayTwo)
	{
		finalDay = dayOne - dayTwo;
	}
	else if (dayOne < dayTwo)
	{
		finalDay = dayTwo - dayOne;

	}
	else
	{

	}
*/





}