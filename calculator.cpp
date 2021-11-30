/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Riya Singh
 */

//The purpose of this program is to create a basic calculator.

#include <iostream> //allows program to perform input and output
#include <string> //allows program to work with strings
#include "std_lib_facilities.h" //header file

//add the values
int sum(int a, int b)
{
	return a+b;
}

//subtract the values
int difference(int a, int b)
{
	return a-b;
}

//multiply the values
int product(int a, int b)
{
	return a*b;
}

//divide the values
int division(int a, int b)
{
	return a/b;
}

//convert string to integer
int strToInt(std::string str)
{
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	
	int num = -1;
	if(str == "0" || str == "zero" )
		num = 0;
	else if(str == "1" || str == "one" )
		num = 1;
	else if(str == "2" || str == "two" )
		num = 2;
	else if(str == "3" || str == "three" )
		num = 3;
	else if(str == "4" || str == "four" )
		num = 4;
	else if(str == "5" || str == "five" )
		num = 5;
	else if(str == "6" || str == "six" )
		num = 6;
	else if(str == "7" || str == "seven" )
		num = 7;
	else if(str == "8" || str == "eight" )
		num = 8;
	else if(str == "9" || str == "nine" )
		num = 9;
	return num;
}


int main()
{
	std::string strNum1;
	std::string strNum2;
	char ch;
	int result;
	std::string str = "";
	
	std::cin>>strNum1>>strNum2>>ch; //store the string values
	
	int num1 = strToInt(strNum1); //convert string to integer
	int num2 = strToInt(strNum2); //convert string to integer
	
	//Decision statements to identify and perform the right arithmetic operation
	if(num1 != -1 || num2 != -1)
	{
		if(ch == '+')
		{
			result = sum(num1, num2);
			str = "The sum of ";
			std::cout << str << num1 << " and " << num2 << " is " << result << std::endl;
		}
		else if(ch == '-')
		{
			result = difference(num1, num2);
			str = "The difference of ";
			std::cout << str << num1 << " and " << num2 << " is " << result << std::endl;
		}
		else if(ch == '*')
		{
			result = product(num1, num2);
			str = "The product of ";
			std::cout << str << num1 << " and " << num2 << " is " << result << std::endl;
		}
		else if(ch == '/')
		{
			result = division(num1, num2);
			str = "The division of ";
			std::cout << str << num1 << " and " << num2 << " is " << result << std::endl;
		}
		else
		{
			std::cout<<"Invalid Input"<<std::endl;
		}
	}
	else
	{
		//Default statement for invalid input
		std::cout<<"Invalid Input"<<std::endl;
	}
	
}