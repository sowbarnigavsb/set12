#include <stdio.h>

int main(void) {
	int num,count=0,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		count++;
		num=num/10;
	}
	printf("%d",count);
	// your code goes here
	return 0;
}
