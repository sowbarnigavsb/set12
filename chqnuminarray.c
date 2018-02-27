#include <stdio.h>

int main(void) {
	int n,k,i,nums[n],count=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
            for(i=0;i<n;i++)
            {
            	if(nums[i]==k)
            	printf("Yes");
            	else 
            	count++;
            }
            if(count!=n-1)
            printf("No");

	return 0;
}
