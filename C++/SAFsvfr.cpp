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
#define pi acos(-1.0)
#define N 1000000

#define read          freopen("uva.txt","r",stdin)
#define write         freopen("uva_out.txt","w",stdout)

using namespace std;

struct node
{
    int start;
    int end;
    double distance;
} a [100 * 100 + 10];

struct vertex
{
    double x;
    double y;
} v [100 + 10];

bool cmp (node p, node q)
{
    if ( p.distance > q.distance )
        return false;
    return true;
}

int main ()
{
    read ;
    write ;
    int testCase;
    scanf ("%d", &testCase);
    bool blankLine = false;

    while ( testCase-- )
    {
        int n;
        scanf ("%d", &n);

        int parent [100 + 5];
        double matrix [100 + 5] [100 + 5];

        for ( int i = 0; i < 105; i++ )
        {
            for ( int j = 0; j < 105; j++ )
            {
                matrix [i] [j] = -1;
            }
            parent [i] = i;
        }

        for ( int i = 1; i <= n; i++ )
            scanf ("%lf %lf", &v [i].x, &v [i].y);

        for ( int i = 1; i <= n; i++ )
        {
            for ( int j = 1; j <= n; j++ )
            {
                if ( matrix [i] [j] == -1 )
                {
                    double d = sqrt ((v [i].x - v [j].x) * (v [i].x - v [j].x) + (v [i].y - v [j].y) * (v [i].y - v [j].y));
                    matrix [i] [j] = matrix [j] [i] = d;
                }
            }
        }

        int length_a = 0;

        for ( int i = 1; i <= n; i++ )
        {
            for ( int j = i + 1; j <= n; j++ )
            {
                a [length_a].start = i;
                a [length_a].end = j;
                a [length_a].distance = matrix [i] [j];
                length_a++;
            }
        }

        sort (a, a + length_a, cmp);

        double output = 0;
        int c = 1;
        for ( int i = 0; i < length_a && c < n; i++ )
        {
            if ( parent [a [i].start] != parent [a [i].end] )
            {
                c++;
                output += a [i].distance;
                for ( int j = 1; j <= n; j++ )
                {
                    if ( parent [a [i].end] == parent [j] && a [i].end != j )
                        parent [j] = parent [a [i].start];
                }
                parent [a [i].end] = parent [a [i].start];
            }
        }

        //printf ("c :>> %d\n", c);

        if ( blankLine )
            printf ("\n");
        blankLine = true;
        printf ("%.2lf\n", output);
    }

    return 0;
}
