#include<cstdio>
using namespace std;


int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        int n;
        scanf ("%d", &n);

        int input;
        int cntOne = 0;
        int cntOthers = 0;

        for ( int i = 0; i < n; i++ ) {
            scanf ("%d", &input);
            if ( input == 1 ) cntOne++;
            else cntOthers++;
        }

        if ( cntOne % 2 ) printf ("poopi\n");
        else {
            if ( cntOthers > 0 ) printf ("poopi\n");
            else printf ("piloop\n");
        }

    } // while loop for testCase

    return 0;
} // end of main ()
