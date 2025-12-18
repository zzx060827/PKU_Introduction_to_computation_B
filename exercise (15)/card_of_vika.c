#include <stdio.h>

int main(void) { 
	int t;scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,m;scanf("%d%d",&n,&m);
	    char card[n][m];
	    char vika[4]={'v','i','k','a'};
	    for(int j=0;j<n;j++)
	    {
	        for(int k=0;k<m;k++)
	        {
	            scanf(" %c",&card[j][k]);
	        }
	    }
	    int count=0;
	    for(int j=0;j<m;j++)
	    {
	        for(int x=0;x<n;x++)
	        {
	            if(card[x][j]==vika[count])
	            {
	                count++;
	                break;
	            }
	        }
	    }
	   
	    if(count==4)
	    {
	        printf("YES\n");
	    }
	    else printf("NO\n");
	    
	}
}
