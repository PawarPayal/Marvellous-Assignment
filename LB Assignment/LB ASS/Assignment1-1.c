#include<stdio.h>
int Division(int iNo1,int iNo2)
{
    int iAns=0;
if(iNo2>0)
{
    return -1;
}
iAns=iNo1/iNo2;
return 0;
}
int Main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;
    iRet=Division(iValue1,iValue2 );
    printf("Division is \n%d\n",iRet);
    return 0;
}