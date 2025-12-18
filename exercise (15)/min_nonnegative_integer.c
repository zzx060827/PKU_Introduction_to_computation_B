#include <stdio.h>

/* C语言初始模板程序 */

int main(void) { 
	int n;scanf("%d",&n);
	int dic[2005]={0};
	for(int i=0;i<n;i++)
	{
	    int t;scanf("%d",&t);
	    dic[t]++;
	}
	for(int i=0;i<2005;i++)
	{
	    if(dic[i]==0)
	    {
	        printf("%d",i);
	        return 0;
	    }
	}
}
