#include<stdio.h>
#include<math.h>


int is_prime(int n)
{
    int i;
    for ( i=2; i<=(int) sqrt(n); i++)
    {
        if (n%i == 0){ return 0;}

        return 1;
    }
}

int main()
{
  int e,n,r,counter_exp=0,t1,t2,i,count=0;;

  float ratio,div;

    while(scanf("%d %d",&t1,&t2)==2)
    {
        for (i=t1; i<t2; i++)
        {
            count += is_prime(i);
        }
        //printf("The value of count is %d  \n",count);
      //experimental part //

        for(n=t1; n<t2; n++)
        {
            r = n*n + n + 41 ;
            e = is_prime(r);
            if(e==0)
            {
                counter_exp=counter_exp+0;
            }

            else if(e==1)
            {
                counter_exp=counter_exp+1;
            }


        }
             // printf("Total of %d primes in experiment\n",counter_exp);
         float n1 = t1;
         float n2 = t2;
         float count_f = count;
         //printf("The value of count  in float is %.3f  \n",count_f);
          div = (n2-n1);
          ratio = (count_f / div );
          //printf("%.3f\n\a",div);
          printf("\t%.2f\n",ratio*100.0N);
    }

}
