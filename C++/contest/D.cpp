#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

    ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    string ss;

    cin >> t;

    for(z = 1; z <= t; z++)
    {
        cin >> a >> b >> k >> c >> d >> l;
        s = 0;
        for(i = 0; i < k; i++)
        {
            s += a;
            a += b;
        }
        for(i = 0; i < l; i++)
        {
            s += c;
            c += d;
        }
        cout << "Case " << z << ": " << s <<endl;
    }


	return 0;
}

