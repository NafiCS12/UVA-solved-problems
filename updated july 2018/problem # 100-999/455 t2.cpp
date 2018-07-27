#include <cstdio>
#include <cstring>
#define max 81

using namespace std;

int str_setN_cmp(char *str, char *tmp, int n, int len)
{
        int i, j, k, flag = 1;
        for(i=0;i<len;i+=n)
        {
                for(j=i,k=0;k<n;k++,j++)
                {
                        if(str[j]!=tmp[k])
                        {
                                flag = 0;
                                break;
                        }
                }
                if(flag==0)
                        break;
        }
        return flag;
}

int main()
{
        char str[max], tmp[max];
        int t, i, j, len;
        for(scanf("%d",&t);t;t--)
        {
                scanf("%s",str);
                len = strlen(str);
                for(i=1;i<=len;i++)
                {
                        if(len%i!=0)
                                continue;
                        strncpy(tmp,str,i);
                        tmp[i] = 0;
                        if(str_setN_cmp(str,tmp,i,len)==1)
                                break;
                }
                printf("%d\n",i);
                if(t!=1)
                        printf("\n");
        }
        return 0;
}
