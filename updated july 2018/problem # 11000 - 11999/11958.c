#include<stdio.h>

int main()
{
	int mn,res,v,d,i,x,k,c_h,c_m,a_h[101]={0},a_m[101]={0},t_m[101]={0},mn_indx;
	scanf("%d",&x);
	while(x--)
	{
	    mn=1001;
		scanf("%d %d:%d",&k,&c_h,&c_m);
		v = 0;
		d = 0;
		res = 0;
		for(i=0;i<k;i++)
		{
			scanf("%d:%d %d",&a_h[i],&a_m[i],&t_m[i]);
			if(t_m[i]<mn)
			{
				mn = t_m[i];
				mn_indx = i;
			}
		}

		v = a_h[mn_indx]*60 + a_m[mn_indx] + t_m[mn_indx];
        d = c_h*60 + c_m;
        res = v-d;
		printf("Case %d: %d\n",i,res);
	}
return 0;
}
