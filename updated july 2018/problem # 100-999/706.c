#include <stdio.h>
#include <string.h>
const char code[5][31] =
{
    " -     -  -     -  -  -  -  - ",
    "| |  |  |  || ||  |    || || |",
    "       -  -  -  -  -     -  - ",
    "| |  ||    |  |  || |  || |  |",
    " -     -  -     -  -     -  - ",
};

int s,i,j;
char n[20];

inline void print(int t , int len)
{
    for(i=0;i<len;i++)
    {
        int a = n[i] & 15;

        if (i) putchar(' ');

        putchar(code[t][a * 3]);

        for (j=0;j<s;j++)
            putchar(code[t][a * 3 + 1]);

        putchar(code[t][a * 3 + 2]);
    }

    putchar('\n');
}

int main(void)
{
    int j,i,len;
    while (scanf("%d%s", &s, n), s)
    {
        len = strlen(n);

        for (i = 0; i < 5; i++)
        {
            if (i == 1 || i == 3)
                for (j = 0; j < s; j++)
                    print(i, len);
            else
                print(i, len);
        }

        putchar('\n');

    }

    return 0;
}
