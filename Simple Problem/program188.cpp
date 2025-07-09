#include<iostream>
using namespace std;

void DisplayFactors(int iNo)  // O(N/2)
{
    int iCnt = 0;
    int iFact = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<"Factors of "<<iNo<<" are "<<iCnt<<"\n";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    DisplayFactors(iValue);


    return 0;
}

/*
  problems on numbers 
  problems on Digits
  problems on N numbers
  problems on Pattern Printing
  problems on String
*/