#include <stdio.h>

int main(void) {
	int n,k,i,nums[10],count=0,alteredarray[10];
	scanf("%d%d\n",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
	if(n>=k)
{
            for(i=1;i<=n;i++)
            {
            	for(int j=1;j<=n;j++)
            {
            	if(nums[i]%2!=0)
            	alteredarray[j]=nums[i];
            }}
            printf("%d",alteredarray[k]);
}
else
printf("Warning,K should be lees than n");
	return 0;
}
