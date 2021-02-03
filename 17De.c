#include<stdio.h>
int main()
{
    struct employee
    {
        char name[40];
        int code,doj,moj,yoj;
 
    };
    struct employee e[3];
    int i,d,m,y,yr;
      for(i=0;i<3;i++)
    {
        printf("Enter employee name & code\n");
        gets(e[i].name);
        scanf("%d",&e[i].code);
        printf("Enter date of joining dd/mm/yy\n");
        scanf("%d/%d/%d",&e[i].doj,&e[i].moj,&e[i].yoj);
        printf("Enter current date dd/mm/yy\n");
        scanf("%d/%d/%d",&d,&m,&y);
        //d=15; m=1; y=12;
        yr=y-e[i].yoj;
        if(yr>3)
        {
            printf("%s",e[i].name);
            continue;
        }
        if(yr==3)
            if(e[i].moj>m)
            {
                printf("%s",e[i].name);
                continue;
            }
        if(e[i].moj==m)
            if(e[i].doj>=d)
                printf("%s",e[i].name);
        }
}
