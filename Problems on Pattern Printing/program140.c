/*Input : Row : 4 , Col =4

  Output  : *   *   *   *
            $   $   $   $
            $   $   $   $
            *   *   *   *
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j= 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)  //First And Last row
            {
                printf("*\t");
            }
            else  // Between rows
            {
                printf("$\t");
            }

        }
        printf("\n");
        
    } 
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the Number of Rows:\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2); 
    return 0;
}