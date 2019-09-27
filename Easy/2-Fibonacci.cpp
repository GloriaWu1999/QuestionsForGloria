#include <stdio.h>

int getFib(int seqNum)
{
	
}


int main()
{
	int seqNum = 0;
	printf("Please enter the fibonacci number you want: ");
	scanf("%d",&seqNum);
	int ans = getFib(seqNum);
	printf("The %d'th fibonacci number is: %d",seqNum,ans);
}
