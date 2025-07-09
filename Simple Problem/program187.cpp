#include<iostream>
using namespace std;

void DisplayFactors(int iNo)  // O(N)
{
    int iCnt = 0;
    int iFact = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
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