#include<stdio.h>
float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = 3.14 * fRadius * fRadius;
    return fArea;

}

int main()
{
    float fValue = 0.0f;
    float fResult = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fValue);

    fResult =  CircleArea(fValue);

    printf("Aea of the circle is : %f \n",fResult);

    return 0;
}