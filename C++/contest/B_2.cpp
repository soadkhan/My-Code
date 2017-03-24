#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

    ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    string ss;

    string lists[22];
    lists[ 0 ] = "Pohela Falgun" ;
    lists[ 1 ] = "Valentine's Day" ;
    lists[ 2 ] = "International Mother Language Day" ;
    lists[ 3 ] = "International Women's Day" ; //
    lists[ 4 ] = "International Color Day" ;
    lists[ 5 ] = "Bangladesh Independence Day" ;
    lists[ 6 ] = "April Fools Day" ; //
    lists[ 7 ] = "Pohela Boishakh" ;
    lists[ 8 ] = "May Day" ; //
    lists[ 9 ] = "Father's Day" ; //
    lists[ 10 ] = "Mandela Day" ; //
    lists[ 11 ] = "World Mosquito Day" ; //
    lists[ 12 ] = "Halloween" ; //
    lists[ 13 ] = "World Toilet Day" ; //
    lists[ 14 ] = "Human Rights Day" ;
    lists[ 15 ] = "Victory Day of Bangladesh" ;
    lists[ 16 ] = "Christmas Day" ;

    map < string, vector <int> > date;

    //February 13 - 0
    date["January"].push_back(-1);
    for(i = 1; i <= 31; i++)
    {
        date["January"].push_back(0);
    }
    date["February"].push_back(0);
    for(i = 1; i < 13; i++)
        date["February"].push_back(0);

    //February 14 - 1
    date["February"].push_back(1);

    //February 21 - 2
    for(i = 14; i <= 20; i++)
        date["February"].push_back(2);

    //March 8 - 3
    for(i = 21; i <= 29; i++)
        date["February"].push_back(3);

    date["March"].push_back(0);
    for(i = 1; i < 8; i++)
        date["March"].push_back(3);

    //March 21 - 4
    for(i = 8; i <= 20; i++)
        date["March"].push_back(4);

    //March 26 - 5
    for(i = 21; i <= 25; i++)
        date["March"].push_back(5);

    //April 1 - 6
    for(i = 26; i <= 31; i++)
        date["March"].push_back(6);

    date["April"].push_back(0);
    date["April"].push_back(7);

    //April 14 - 7
    for(i = 2; i <= 13; i++)
        date["April"].push_back(7);

    //May 1 - 8
    for(i = 14; i <= 31; i++)
        date["April"].push_back(8);


    //June 19 - 9
    date["May"].push_back(9);
    for(i = 1; i <= 31; i++)
        date["May"].push_back(9);

    date["June"].push_back(9);
    for(i = 1; i <= 18; i++)
        date["June"].push_back(9);

    //July 18 - 10
    for(i = 19; i <= 31; i++)
        date["June"].push_back(9);
    date["July"].push_back(10);
    for(i = 1; i <= 17; i++)
        date["July"].push_back(10);

    //August 20 - 11
    for(i = 18; i <= 31; i++)
        date["July"].push_back(11);
    date["August"].push_back(11);
    for(i = 1; i <= 19; i++)
        date["August"].push_back(11);

    //October 31 - 12
    for(i = 20; i <= 31; i++)
        date["August"].push_back(12);
    date["September"].push_back(12);
    for(i = 1; i <= 31; i++)
        date["September"].push_back(12);
    date["October"].push_back(12);
    for(i = 1; i <= 30; i++)
        date["October"].push_back(12);

    //November 19 - 13
    date["October"].push_back(13);
    date["November"].push_back(13);
    for(i = 1; i <= 18; i++)
        date["November"].push_back(13);

    //December 10 - 14
    for(i = 19; i <= 31; i++)
        date["November"].push_back(14);
    date["December"].push_back(14);
    for(i = 1; i <= 9; i++)
        date["December"].push_back(14);

    //December 16 - 15
    for(i = 10; i <= 15; i++)
        date["December"].push_back(15);

    //December 25 - 16
    for(i = 16; i <= 24; i++)
        date["December"].push_back(16);

    //February 13 - 0
    for(i = 25; i <= 31; i++)
        date["December"].push_back(0);


    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> ss >> a;
        //cout << lists[  date[ss][a]  ] << endl;
        cout << "Case " << i << ": " << lists[  date[ss][a]  ] <<endl;
    }

	return 0;
}
