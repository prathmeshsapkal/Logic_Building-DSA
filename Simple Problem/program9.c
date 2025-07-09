#include<stdio.h>

float Addition(float fvalue1, float fvalue2)
{  
    float fAdd = 0.0f;              
    fAdd = fvalue1 + fvalue2;          
    return fAdd;
}
 
int main()
{
    float fNo1 = 0, fNo2 = 0, fAns = 0; 

    printf("Enter the first Number:\n");
    scanf("%f",&fNo1);

    printf("Enter the Seconf Number:\n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1,fNo2);         
    printf("Addition is :%f\n",fAns);

    return 0;
}