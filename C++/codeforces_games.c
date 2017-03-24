#include<stdio.h>
int main(void)
{
	int n;
	int home[100];
	int out[100];
	int i,j,con=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&home[i],&out[i]);
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	    {
	    	if(home[i]==out[j])
	    	{
	    		con++;
	    	}
	    }
	}
	printf("%d\n",con);	
	return 0;
}
