#include"time.h"
#include"stdio.h"
#include"string.h"
#include"stdlib.h"
//#include"windows.h"  system("color 3D");改变窗口颜色

int LOM(int x,int n)  //x的n次方
{
    int y=x;
    for(;n>1;n--)
    y=y*x;

    return(y);
}

int random(int a)/*产生一个0到a/*随机数产生*/
{
    srand((unsigned)time(NULL));
    return(rand()%a);

}
