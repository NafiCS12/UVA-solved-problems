#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
        int l,d,i,j,num;
        char inp[100]={0};
        char r[100]={0};
        while(1)
        {
            scanf( "%d",&num);
            scanf( "%s",&inp);

            l = strlen( inp);
			
            int count = ceil( l / num );
			
            for( j=0;j<=count;j++)
            {
                for( i=((j+1)*num)-1; i >=(j*num); i--)
                {

                    printf("%c",inp[i]);
                }
            }
        }
}
