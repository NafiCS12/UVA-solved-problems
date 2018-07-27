#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
using namespace std;

string a [100 + 5];

int main ()
{
    int n;

    while ( scanf ("%d", &n) != EOF ) {
        for ( int i = 0; i < n; i++ )
            cin >> a [i];

        sort (a, a + n);

        int maxLen = 0;

        for ( int i = 0; i < n; i++ ) {
            int len = a [i].length ();
            if ( len > maxLen ) maxLen = len;
        }

        int totalColumn = 62 / (maxLen + 2);
        int justified = maxLen + 2;
        int row = ceil (n / (double)totalColumn);

        printf ("------------------------------------------------------------\n");

        for ( int i = 0; i < row; i++ ) {
            for ( int j = i; j < n; j += row ) {
                cout << a [j];
                if ( j + row < n ) {
                    for ( int k = a [j].length (); k < justified; k++ )
                        printf (" ");
                }
            }
            printf ("\n");
        }
    }

	return 0;
}
