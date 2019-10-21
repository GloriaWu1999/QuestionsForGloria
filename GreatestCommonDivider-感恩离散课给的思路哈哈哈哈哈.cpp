#include <stdio.h>

int getGCD(int m, int n)
{
	while (n!=0){
		int t=0;
		t=n;
		n=m%n;
		m=t;
	} 
	return m;
}

int main()
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	int ans = getGCD(m, n);
	printf("%d\n", ans);
	if (m%ans == 0 && n%ans == 0) {
		bool flag = 1;
		for (int i = ans + 1; i < n; ++i) {
			if (m%i == 0 && n%i == 0) {
				flag = 0;
			}
		}
		if (flag) {
			printf("Correct!\n");
		}
		else {
			printf("Wrong!\n");
		}
	}
	return 0;
}
