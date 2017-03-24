#include<stdio.h>
#include<string.h>
struct profile{
	char name[100];
	int old_roll;
	float num_ban;
	float num_eng;
	float num_mat;
	float num_sci;
	float num_soc;
	float num_rel;
	float num_oth;
	float num_sum;
};
int main ()
{
	struct profile stu[1000], temp;		
	char sr1[100];
	char sr2[100];
    int iner,outer;
    int i,j;
    freopen("name_num.txt","rt",stdin);
    freopen("res.txt","wt",stdout);
    gets(sr1);
    gets(sr2);
	i=0;
     while(9==scanf("%d%[^0-9] %f %f %f %f %f %f %f",&stu[i].old_roll,&stu[i].name,&stu[i].num_ban,&stu[i].num_eng,&stu[i].num_mat,&stu[i].num_sci,&stu[i].num_soc,&stu[i].num_rel,&stu[i].num_oth))
	{
		stu[i].num_sum = stu[i].num_ban + stu[i].num_eng + stu[i].num_mat + stu[i].num_sci + stu[i].num_soc + stu[i].num_rel + stu[i].num_oth;	
		i++;
	}
	for(outer=i-2;outer>=0;outer--)
	{
		for(iner=0;iner<=outer;iner++)
		{
			if(stu[iner].num_sum < stu[iner+1].num_sum)
			{		
				temp=stu[iner];	
				stu[iner]=stu[iner+1];
				stu[iner+1]=temp;
			}
					
		}
		
	}
	printf("new roll    name               old roll                 sum                 bangla              english             math                science             social            religion            others   .\n___________________________________________________________________________________________________________________________________________________________________________________________________________________");
	for(j=0;j<i;j++)
	{
		printf("\n%d  %s%-20d%-20.3f%-20.3f%-20.3f%-20.3f%-20.3f%-20.3f%-20.3f%-20.3f",j+1,stu[j].name,stu[j].old_roll,stu[j].num_sum,stu[j].num_ban,stu[j].num_eng,stu[j].num_mat,stu[j].num_sci,stu[j].num_soc,stu[j].num_rel,stu[j].num_oth);	
	}		
}
