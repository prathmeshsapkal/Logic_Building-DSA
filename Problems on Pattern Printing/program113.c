//Input : 5
//Output :  2     4   6    8    10
//          1*2  2*2 3*2  4*2  5*2


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2 * iCnt);
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter the Numbers:\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}