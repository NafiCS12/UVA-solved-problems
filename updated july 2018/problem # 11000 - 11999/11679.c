#include <stdio.h>
int main()
{
int bankMoney[22];
int banks, debentures,value;
int debtor,creditor,money;
int flag;
while(scanf("%d %d", &banks , &debentures))
{
    if(!banks && !debentures)
       break;
    int i;
    flag = 1;
    for(i=0; i<banks; i++)
        scanf("%d", &bankMoney[i]);
    for(i=1; i<=debentures; i++)
    {
        scanf("%d %d %d", &debtor, &creditor, &money);
            bankMoney[creditor-1] += money;
            bankMoney[debtor-1] -= money;
    }

    for(i=0; i<banks; i++)
       if(bankMoney[i] < 0)
       {
           flag = 0;
           break;
       }

    if(flag)
       printf("S\n");
    else
        printf("N\n");
}
return 0;
}
