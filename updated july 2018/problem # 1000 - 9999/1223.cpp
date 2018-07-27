#include <iostream>
#include <string>
#include <cstring>
#define MAX 5001
using namespace std;

int T[MAX][MAX];

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        int maxValue = 0;

        for(int i=1; i<=sz; i++)
        {
            for(int j=1; j<=sz; j++)
            {
                if (s[i-1] == s[j-1] && i!=j)
                    maxValue = max(maxValue, T[i][j] = T[i-1] [j-1]+1 );
                else
                    T[i][j] = 0;
            }
        }

        cout << maxValue << endl;
    }//end of while

    return 0;
}
