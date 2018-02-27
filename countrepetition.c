#include <stdio.h>

int main(void) {
	int n,k,i,nums[10],count=0;
	scanf("%d%d\n",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
            for(i=0;i<n;i++)
            {
            	if(nums[i]==k)
            	count++;
            }
            printf("%d",count);

	return 0;
}
