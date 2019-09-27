#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TODO
double getInteger(double num)
{
	return num; 
}

//TODO
double getDecimal(double num)
{
	return num;
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
	printf("Initial Number: %f\nThe integer part: %f\nThe decimal part: %f\n",randomNum,integer,decimal);
	if (integer + decimal != randomNum) {
		printf("Wrong answer.");
	}
	else {
		printf("Rigth answer.");
	}
}
