#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

    ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    string ss;

    scanf("%lld" , &t) ;

    for(z = 1; z <= t; z++)
    {
      //  cin >> a >> b >> k >> c >> d >> l;
        scanf("%lld%lld%lld%lld%lld%lld" , &a ,&b , &k , &c , &d , &l) ;
        s = 0;

        //x = a + ((k -1)*b);

        //cout << x << endl;-
        y = l;

        //s = (a * x) + (((x*x) - x) * b) ;
        s = (a * k) + (((k*k) - k) * b) / 2 + + (c * y) + (((y*y) - y) * d)/2 ;

      //  cout << "Case " << z << ": " << s <<endl;
        printf("Case %lld: %lld\n" , z , s) ;
    }


	return 0;
}


