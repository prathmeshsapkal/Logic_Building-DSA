/*
Step1 : Understand the Problem Statement.
Step2 : Write the Algortihm.
Step3 : Decide the programming language.
Step4 : Write the Program.
Step5 : Test the Program.
*/

/*
Problem Statement :
Write the program which is used to perform 
ADDITION of two numbers.
*/

/*
Step 1 : Undertsand the problem statement 
User is Going to enter the data in Decimal Format.
If entered data is neagative we have to convert it to 
Positive value
*/

/*
  Step 2: Write the Algorithm

  START
       Accept First Input
       Accept Second Input
       If any of the input is negative then convert it into positive
       perform the addition of that accepted value
       Display the Addition
  STOP
*/

/*
Step 3: Decided the programimng language
        According to the problem statement we select C programming language        
*/
/* 
Step 4:
    Write the code:    
*/


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


float Addition(float fValue1, float fValue2)
{  
    float fAdd = 0.0f;               //Local variable for input  
    //Updator
    if(fValue1 < 0.0f)
    {
        fValue1 = -fValue1;
    }            
    if(fValue2 < 0.0f)
    {
        fValue2 = -fValue2;
    }      
    fAdd = fValue1 + fValue2;        //Business Logic
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

/*

Step 5: Test the Program:

C:\Users\prathmesh sapkal\Desktop\LB>gcc program10.c -o Myexe

C:\Users\prathmesh sapkal\Desktop\LB>Myexe.exe
Enter the first Number:
10
Enter the Seconf Number:
20
Addition is :30.000000

C:\Users\prathmesh sapkal\Desktop\LB>gcc program10.c -o Myexe

C:\Users\prathmesh sapkal\Desktop\LB>Myexe.exe
Enter the first Number:
-10
Enter the Seconf Number:
20
Addition is :30.000000

C:\Users\prathmesh sapkal\Desktop\LB>gcc program10.c -o Myexe

C:\Users\prathmesh sapkal\Desktop\LB>Myexe.exe
Enter the first Number:
-20
Enter the Seconf Number:
10
Addition is :30.000000

C:\Users\prathmesh sapkal\Desktop\LB>gcc program10.c -o Myexe

C:\Users\prathmesh sapkal\Desktop\LB>Myexe.exe
Enter the first Number:
-10
Enter the Seconf Number:
-20
Addition is :30.000000

*/