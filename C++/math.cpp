#include<stdio.h>
#include<math.h>
int main()
{
	float a,an;
	scanf("%f",&a);
	an=sin(a*3.14159/180);
	printf("%.3f\n",an);
	printf("%.3f\n",asin(an)*180/3.14159);
	printf("%.3f",log10(1000));
	return 0;
}
