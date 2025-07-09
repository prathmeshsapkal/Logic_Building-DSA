//Accept the mark from user and you have to display

/*
    START
        Accept total mark
        Accept the obtained mark
        calculate the percentage as(obtained/ total)*100
        Display the calculated percentage 
    STOP    
*/
#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iObtained / (float)iTotal) * 100;
    return fPercentage;

}

int main()
{
    int iValue1 = 0 ,  iValue2 = 0; 
    float fResult = 0;

    printf("Enter the obtained Marks: \n");
    scanf("%d",&iValue1);

    printf("enter the total mark :\n");
    scanf("%d",&iValue2);

    fResult = CalculatePercentage(iValue1, iValue2);

    printf("Total Percentage is : %f\n",fResult); 



    return 0;
}