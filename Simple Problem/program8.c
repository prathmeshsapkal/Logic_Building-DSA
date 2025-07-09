#include<stdio.h>

///////////////////////////////////////////////////////////
//
// Function Name: Addition
// Description:   It is used to perform addition of 2 float value
// Input:         Float,Float
// Output:        Float
// Author:        Prathmesh Sapkal
// Date :         06/10/2024
//
////////////////////////////////////////////////////////////


float Addition(float fvalue1, float fvalue2)
{  
    float fAdd = 0.0f;                 //Local variable for input  
    fAdd = fvalue1 + fvalue2;          //Business Logic
    return fAdd;
}


///////////////////////////////////////////////////////////
//
//This Application used to perform the Addition of 2 Numbers
//
///////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0, fNo2 = 0, fAns = 0; //Local variables for input

    printf("Enter the first Number:\n");
    scanf("%f",&fNo1);

    printf("Enter the Seconf Number:\n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1,fNo2);         
    printf("Addition is :%f\n",fAns);

    return 0;
}