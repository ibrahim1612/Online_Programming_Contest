#include <stdio.h>

int main(void) {
	int t,i,x;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d",&x);
	    if(x%10==0)
	    printf("0\n");
	    else if(x%10==5)
	    {
	        x=x*2;
	        if(x%10==0)
	        printf("1\n");
	    }
	    else
	    printf("-1\n");
	}
	return 0;
}

