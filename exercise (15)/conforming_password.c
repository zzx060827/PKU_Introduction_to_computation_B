#include <stdio.h>
#include <string.h>

/* C语言初始模板程序 */

int main(void) 
{ 
    int n; scanf("%d",&n); getchar();
    for(int i=0;i<n;i++)
    {
        char str[25] = {0};
        int judge = 1;
        int ju[4] = {0};
        fgets(str, sizeof(str)/sizeof(str[0]), stdin);
        int len = strlen(str);
        if(str[len-1] == '\n')
        {
            str[len-1] = '\0';
            len--;
        }
        if(len < 6 || len > 12)
        {
            judge = 0;
        }
        for(int j=0;j<len;j++)
        {
            if(str[j] == '!' || str[j] == '#' || str[j] == '$' || str[j] == '@')
            {
                ju[0] = 1;
            }
            else if((str[j] >= 'a' && str[j] <= 'z'))
            {
                ju[1] = 1;
            }
            else if(str[j] >= 'A' && str[j] <= 'Z')
            {
                ju[2] = 1;
            }
            else if(str[j] >= '0' && str[j] <= '9')
            {
                ju[3] = 1;
            }
            else
            {
                judge = 0; break;
            }
        }
        if(ju[1] + ju[2] + ju[3] < 2 || ju[0] == 0) judge = 0;
        if(judge == 1) printf("%s\n", str);
    }
    return 0;
}