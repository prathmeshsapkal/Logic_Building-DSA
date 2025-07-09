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
    Write the code:    
*/
#include<stdio.h>

int main()
{
    float fNo1 = 0,fNo2 = 0, fAns = 0;

    printf("Enter the first Number:\n");
    scanf("%f",&fNo1);

    printf("Enter the Seconf Number:\n");
    scanf("%f",&fNo2);

    fAns = fNo1+fNo2;
    printf("Addition is :%f\n",fAns);

    return 0;
}