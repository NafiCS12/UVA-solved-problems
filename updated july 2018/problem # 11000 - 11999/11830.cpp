#include<iostream>
#include<cstring>
#include<string>
#include<string.h>
using namespace std;
char str[2000];

int main(){
    int i, flag, n;

    while(cin>>n>>str&& n!=0)
    {
        if(!n && str[0]=='0' && !str[1]) break;
        for(i=0, flag=0; str[i]; i++){
            if(str[i]==n+'0') continue;
            if(!flag && str[i]>'0') flag=1;
            if(flag) putchar(str[i]);
        }

        if(flag==0) cout<<0;
        puts("");
    }

    return 0;
}
