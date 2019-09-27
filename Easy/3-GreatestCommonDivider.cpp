#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int m,int n)
{
	
}

int main()
{
	srand((int)time(0));
	int randomNum = rand()%100;
	printf("The random number you are given is: %d\nPlease enter another number within [2,100]: ",randomNum);
	int num = 1;
	scanf("%d",&num);
	while (num < 2 || num > 100) {
		printf("Invalid input. Please re-input.");
		scanf("%d",&num);
	}
	int ans = gcd(randomNum,num);
	printf("Your answer is: %d\n",ans);
	if (randomNum%ans == 0 && num%ans == 0) {
		printf("Your answer is a common divider of %d, %d: %d/%d = %d, %d/%d = %d\n",
		randomNum,num,randomNum,ans,randomNum/ans,num,ans,num/ans);
		int min = randomNum;
		if (min > num) {
			min = num;
		}
		bool flag = true;
		for (int i = ans + 1;i < min;++i) {
			if (randomNum%i == 0 && num%i == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			printf("Your answer is the greatest common divider.\n");
		}
		else {
			printf("Your answer isn't the greatest common divider.\n");
		}
	}
	else {
		printf("Your answer is not a common divider of %d, %d: %d mod %d = %d, %d mod %d = %d",
		randomNum,num,randomNum,ans,randomNum%ans,num,ans,num%ans);
	}
}
