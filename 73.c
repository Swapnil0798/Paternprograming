#include<stdio.h>
 //Input: row=5,columns=5
//Output: 
     //     1  2  3  4  5
     //     1  2  3  4  5
     //     1  2  3  4  5
     //     1  2  3  4  5
     //     1  2  3  4  5
     
         

void display(int irows,int icol)
{
    int i=0, j=0;
  //     1     2      3
    for(i=1;i<=irows;i++)//outer
    //           4
    {    //  1     2     3
        for(j=1;j<=icol;j++)//inner
        {
        printf("%d\t",j);//4
         }
    printf("\n");
    }
}
// Date: 09/05/2022

int main()
{
   
    int ivalue1=0;
    int ivalue2=0;

    printf("enter the no of rows\n");
    scanf("%d",&ivalue1);


    printf("enter the no of coloumn\n");
    scanf("%d",&ivalue2);

    display(ivalue1,ivalue2);

   return 0;
}