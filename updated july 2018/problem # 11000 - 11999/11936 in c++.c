#include<iostream>
using namespace std;
int main()
{
        int T;
        cin >> T;
        while( T-- )
            {
                int A, B, C;
                cin >> A >> B >> C;
                if( A + B > C && B + C > A && A + C > B )
                        cout << "OK\n";
                else
                        cout << "Wrong!!\n";
        }
        return 0;
}
