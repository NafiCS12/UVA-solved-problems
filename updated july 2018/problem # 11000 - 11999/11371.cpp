#include<bits/stdc++.h>
using namespace std;

char a[15], b[15];

int main()
{
    int len, i;
    long long diff;
    while (gets(a))
    {
        len = strlen(a);
        sort(a, a + len, greater<char>());
        memcpy(b, a, sizeof(a));
        for (i = 0; i < len; ++i) a[i] = b[len - 1 - i];
        for (i = 0; !(a[i] & 15); ++i)
            ;
        swap(a[0], a[i]);
        diff = atoll(b) - atoll(a);
        printf("%s - %s = %lld = 9 * %lld\n", b, a, diff, diff / 9);
    }
    return 0;
}
