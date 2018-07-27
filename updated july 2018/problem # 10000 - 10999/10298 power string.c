#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

char s[1000010] ;
int len, half ;

int find_min_rep_substring(void)
{
    int i, j, k, min=len, f ;
    char *p ;

    for (i=half; i>=2; i--)
    {
      if (len%i!=0)
         continue ;

      p = s+i ;
      f = 1 ;
      /* compare k-1 substrings of length i */
        for (k=len/i, j=1; j<k; j++)
        {
             if (strncmp(s, p, i)!=0)
             {
                f = 0 ;
                break ;
             }

             p+=i ;

        }

      if (f) min = i ;
}

return len/min ;
}

int main()
{
    int i, j, n, k ;

    while (scanf("%s", s))
    {
      if (s[0]=='.' && s[1]=='\0')
         break ;

      len = strlen(s) ;
      half = len/2 ;

      for (i=0; i<half; i++)
         if (s[i]!=s[len-i-1])
            break ;

      if (i==half && s[0]==s[half]) printf("%d\n", len) ;
      /* for odd strings, largest repeating substring would be either of length 1 or len */
      else if (len%2) printf("1\n") ;
      else printf("%d\n", find_min_rep_substring()) ;
   }

   return 0;
}
