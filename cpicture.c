#include"stdlib.h"
#include"stdio.h"
#include"string.h"

int main()
{    int i;
     char str[255];//121
     gets(str);
     int length = strlen(str);//长度3
     printf("%d",length);
     for(i=0;i<length/2;i++)//长度/2=1
    {   
        printf("\n%d",i);
        if(str[i]!=str[length-1-i])
        break; 
    }
        if(i==(length/2)) 
                printf("YES");
        else
            printf("NO");
        system("pause");

}
