#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
#define N 1000000
#define INF INT_MIN
using namespace std;

int matrix [100 + 2] [100 + 2];

void reset (int n)
{
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ )
            matrix [i] [j] = INF;
        matrix [i] [i] = 0;
    }
}

int main ()
{
    int n;
    int r;
    int cases = 0;

    while ( scanf ("%d %d", &n, &r) ) {
        if ( n == 0 && r == 0 )
            break;

        reset (n);

        for ( int i = 0; i < r; i++ ) {
            int c1;
            int c2;
            int p;

            scanf ("%d %d %d", &c1, &c2, &p);

            matrix [c1] [c2] = matrix [c2] [c1] = p - 1;
        }

        int source;
        int destination;
        int tourist;

        scanf ("%d %d %d", &source, &destination, &tourist);

        for ( int k = 1; k <= n; k++ ) {
            for ( int i = 1; i <= n; i++ ) {
                if ( matrix [i] [k] != INF ) {
                    for ( int j = 1; j <= n; j++ ) {
                        if ( matrix [k] [j] != INF && i != j )
                            matrix [i] [j] = max (matrix [i] [j], min (matrix [i] [k], matrix [k] [j]));
                    }
                }
            }
        }

        if ( source == destination ) {
            printf ("Scenario #%d\n", ++cases);
            printf ("Minimum Number of Trips = 1\n\n");
            continue;
        }

        int trip = tourist / matrix  [source][destination];

        if ( trip * matrix  [source][destination] < tourist )
            trip++;

        printf ("Scenario #%d\n", ++cases);
        printf ("Minimum Number of Trips = %d\n\n", trip);
    }

    return 0;
}
