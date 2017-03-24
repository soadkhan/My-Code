#include <stdio.h>
#include<iostream>
using namespace std;
 
int main()
{
//	freopen("uva.txt","rt",stdin);	
	char in[110][110];
	int n, m, i, j, count;
	
	long long int coun = 1,soad=0;// change  is here ...... :) 
	
	while(scanf("%d%d", &n, &m))
	{
		soad ++;
		
		if(n==0&&m==0){
			if(soad == 1) cout<<endl;  // if there is 0 0 in the first line of input..... 
			return 0;
		}
		
		if(soad!=1) cout<<endl;  // you print an extra \n  in the end.. it prevents this event. 
		
		getchar();
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				scanf("%c", &in[i][j]);
			}
			getchar();
		}
 
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				count = 0;
				if(in[i][j] != '*')
				{
					if(in[i][j+1] == '*' && j+1 < m )
							count++;
					if(in[i+1][j+1] == '*' && j+1 < m && i+1 < n )
							count++;
					if(in[i-1][j+1] == '*' && i-1 >= 0 && j+1 < m )
							count++;
					if(in[i][j-1] == '*' && j-1 >= 0)
							count++;
					if(in[i+1][j-1] == '*' && j-1 >= 0 && i+1 < n )
							count++;
					if(in[i-1][j-1] == '*' && i-1 >= 0 && j-1 >= 0 )
							count++;
					if(in[i+1][j] == '*' && i+1 < n )
							count++;
					if(in[i-1][j] == '*' && i-1 >= 0 )
							count++;
 
 
					in[i][j] = (char) (48+count);

				}
			}
		}
		printf("Field #%d:\n", coun++);
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				printf("%c", in[i][j]);
			}
			printf("\n");
		}

	}
return 0;
 
}
