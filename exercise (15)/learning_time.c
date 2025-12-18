#include <stdio.h>

/* C语言初始模板程序 */

int main(void) { 
	int n;scanf("%d",&n);
	int time[49]={0};
	for(int i=0;i<n;i++)
	{
	    int ts,te;scanf("%d%d",&ts,&te);
	    for(int j=ts*2;j<te*2+1;j++)
	    {
	        time[j]=1;
	    }
	}
	int con=0,count=0;
	for(int i=0;i<49;i++)
	{
	    if(time[i]==0&&con==0)
	    {
	        count++;
	        con=1;
	    }
	    if(time[i]==0&&con==1)
	    {
	        count++;
	    }
	    if(time[i]==1&&con==1)
	    {
	        count++;
	        con=0;
	    }
	}
	if(con==1)count+=1;
	printf("%d",(count-1)/2);
}
