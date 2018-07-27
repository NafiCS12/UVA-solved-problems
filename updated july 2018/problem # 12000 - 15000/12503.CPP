#include<cctype>
#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
        int t;
        int pos = 0;
        printf("enter value of t : \n");
        scanf("%d",&t);

        for(int j = 0; j< t ;j++)
        {
            printf("\n running t \n");
            int n;
             printf("enter value of n : \n");
            scanf("%d",&n);

            for(int i=0;i<n;i++)
            {
                cout<< "enter a string \n";
                string temp;
                cin>>temp;
               // string instruction;
                //char instruction[12];
                //getline(cin,instruction);
                char ins[12];
                 gets(ins);
                //int l = instruction.length();
                cout<< "length of string : \n";
                int l = strlen(ins);
                cout << l<<endl;
            }

        }
}
