#include<stdio.h>
#include<conio.h>
char sky[101][101];




/*void DFS(int cordx,int cordy,int flag)
{
	if(sky[cordx][cordy]=='B')
	{	flag = 1;

		break;
	}
	else if(stor[cordx][cordy]=='X')
	{
		flag = 0 ;
		break;
	}
	else
	{

		DFS(cordx-1,cordy,flag);
		DFS(cordx+1,cordy,flag);
		DFS(cordx,cordy-1,flag);
		DFS(cordx,cordy+1,flag);
	}
}*/
int main()
{
		int i,j,res,r,c;
		scanf("%d %d",&r,&c);
        memset(sky,0,sizeof(sky));
		for(i=0;i<r;i++)
		{	for(j=0;j<c;j++)
			{
				scanf("%c",&sky[i][j]);
			}

		}


        int cnt=0;
    if(sky[i][j]=='*')
    {
        if (sky[i+1][j]=='*' && i+1<r && j>=0)  not_a_star ++;
        if( (sky[i+1][j+1]=='*')&&  i+1<r && j+1<c  )   not_a_star ++;
        if( (sky[i-1][j]=='*')&&  i-1>=0                  )   not_a_star ++;
        if( (sky[i-1][j+1]=='*')&&   i-1>=0 && j+1<c)   not_a_star ++;
        if( (sky[i][j+1]=='*')&&   j+1<c )    not_a_star ++;
        if( (sky[i+1][j-1]=='*')&&     i+1<r && j-1>=0 )not_a_star ++;
        if( (sky[i][j-1]=='*')&& j>=0       )not_a_star ++;
        if( (sky[i-1][j-1]=='*') && i>=0 && j>=0)      not_a_star ++;

            if (not_a_star==0)
            {
                totalStars++;
            }
        else not_a_star = 0;
    }

		DFS(0,0,sky,res);
		if(res>0)
			printf("%d\n",res);
		else
			printf("NoT\n");

		/*res = solve(0,0);
		printf("%d\n",res);*/
		return 0;
/*		printf("%d %d\n",x+1,y+1);*/
}
