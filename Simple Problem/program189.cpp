#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo;

        Number(int A)
        {
            iNo = A; 
        }

        void DisplayFactors()
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
};
int main()
{
    int iValue = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    Number nobj(iValue);

    nobj.DisplayFactors();

    return 0;
}

 