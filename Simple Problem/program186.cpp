#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iValue1;
        int iValue2;

        Arithematic(int A, int B)
        {
            iValue1 = A;
            iValue2 = B;
        }

        int Addition()
        {
            int iResult = 0;
            iResult = iValue1 + iValue2;
            return iResult;
        }    
};

int main()
{
    int iNo1 = 10, iNo2 = 11, iAns = 0;
    cout<<"Enter first number:\n";
    cin>>iNo1;

    cout<<"Enter Second number:\n";
    cin>>iNo2;

    Arithematic aobj(iNo1, iNo2);

    iAns = aobj.Addition();

    cout<<"Addition is :\n"<<iAns<<"\n";

    return 0;
}