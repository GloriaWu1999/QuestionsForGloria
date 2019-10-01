#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	@Input: double num
	@Output: the integer part of num 
*/ 
double getInteger(double num)
{
	return 0;
}

/*
	@Input: double num
	@Output: the decimal part of num
*/
double getDecimal(double num)
{
	return 0;
}

double getRandomNum()
{
	double randomNum = (double)rand()/(double)RAND_MAX;
	randomNum += rand();
	return randomNum;
}

int main()
{
	srand((int)time(0));
	double randomNum = getRandomNum();
	double integer = getInteger(randomNum);
	double decimal = getDecimal(randomNum);
	if (integer + decimal == randomNum) {
		printf("Correct.");
	}
	else {
		printf("Wrong.");
	}
}
