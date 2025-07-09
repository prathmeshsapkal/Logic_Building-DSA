//Output a result either pass or fail by Accepting percentage from user
/* ALGORITHM
    START

    Accept the percentage from user
    If percentage are less than 40 the display FAIL
    AND if it is grater than or equal to 40 then diaplay PASS 

    END
*/
#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage< 0.0f || fPercentage > 100.0f )  //Filter
    {
        printf("Invalid percentage. Please enter the value in the range 0 to 100");
        return;
    }
    if(fPercentage >= 40.00f)
    {
        printf("You are Pass \n");
    }
    else
    {
        printf("You are Fail \n "); 
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage : \n");
    scanf("%f",&fValue);

    DisplayResult(fValue);


    return 0;
}