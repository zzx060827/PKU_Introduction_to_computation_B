#include <stdio.h>

/* C语言初始模板程序 */

int main(void) { 
	int n,k,b;scanf("%d%d%d",&n,&k,&b);
	int count=0;
	for(int i=0;i<n;i++)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(y==k*x+b)
	    {
	        count++;
	    }
	}
	printf("%d",count);
}
