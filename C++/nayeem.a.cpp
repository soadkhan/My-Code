#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
int main()
{
	char a[100], ab[110][100];
	int n, b, c, d, i, j, k, m, q, p, x, y[120],con=0;
//freopen("masterfile.txt", "r", stdin);
//  freopen("uva.txt","rt",stdin);
	while(cin >> n)
	{
		con++;
		if(con>1) cout<<endl;
		for(i = 0; i < n; i++)
		y[i] = 0;
		getchar();
		for(i = 0; i < n; i++)
			cin >> ab[i];
		for(j = 0; j < n; j++)
		{
			cin >> a;
			cin >> d >> m;
/*getchar();*/
			if(m == 0)
			continue;
			for(i = 0; i < n; i++)
			{
//if(m == 0)
// continue;
				if(strcmp(a, ab[i]) == 0)
				{
					y[i] -= d - (d % m);
/*cout << "## " <<ab[i] << " = " << y[i] << endl;*/
					break;
				}
			}
			for(i = 0; i < m; i++)
			{
				cin >> a;
//if(m == 0)
// continue;
/*cout << "%%%%" << a << endl;*/
				for(k = 0; k < n; k++)
				{
					if(strcmp(a, ab[k]) == 0)
					{
						y[k] += (d / m);
/*cout << "## " <<ab[k] << " = " << y[k] << endl;*/
						break;
					}
				}
			}
		}
		for(i = 0; i < n; i++)
		{
			cout << ab[i] << " " << y[i] << endl;
		}
	//	cout << endl;
	}
	return 0;
}
