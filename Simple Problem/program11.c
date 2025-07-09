#include<stdio.h>

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = fRadius * fRadius;

    printf("Aea of the circle is : %f \n",fArea);

    return 0;
}