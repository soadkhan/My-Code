#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

char str[1000];
void strlr(void)
{
	long int l=strlen(str);
	for(long int i=0;i<l;i++)
		if(str[i]>='A'&&str[i]<='Z') str[i]+=32;
	
}

void poli(void)
{
      long int l=strlen(str),fl=0,li,j;
      j=l-1;
      if(l%2==0) li=l/2;
      else li=(l-1)/2;
      
	  for(long int i=0;i<li;i++)
	  {
	  	  if(str[i]!=str[j]){
	  	  		fl=1;
	  	  		break;
	  	  }
	  	  else j--;
	  }	  
	  if(fl==0) cout<<"You won't be eaten!"<<endl;
	  if(fl==1) cout<<"Uh oh.."<<endl;
      
}
void go(void)
{
	
	long int i=0,j=0;
	for(i=0;i<strlen(str);i++)
    {
    	if(str[i]=='.'||str[i]==','||str[i]=='!'||str[i]=='?'||str[i]==' ') continue;
    	else{
    		str[j]=str[i];
    		j++;
    	}
    }
    str[j]='\0';
    poli();
}
int main(void)
{
   // freopen("uva.txt","rt",stdin);
	long int con=0;
	while(4)
	{
		con++;
		cin.getline(str,1000);
	//    gets(str);
		if(0==strcmp(str,"DONE")){
			if(con==1) cout<<endl;
			return 0;
		}
		
		strlr();
		go();	

	}
		
	return 0;
}

