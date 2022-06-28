#include<stdio.h>
// Input:rows=4,cols=4
//Output:
//       *    *    *   *
//            *    *   *
//                 *   *
//                     *
void display(int irows,int icols)
{
    int i=0,j=0;
   
    for(i=1;i<=irows;i++)
    {
        for(j=1;j<=icols;j++)
        if((i<=j))
        {
            printf("*\t");

        }
       
       else 
        {
            printf("\t",j);
        }
        
        printf("\n");
    }
}
///////////////////////////////////////////
// Date: 10/05/2022
///////////////////////////////////////////
int main()
{  
    int ivalue1=0;
    int ivalue2=0;
  
    printf("enter rows\n");
    scanf("%d",&ivalue1);
   
    printf("enter coloumn\n");
    scanf("%d",&ivalue2);
   
    display(ivalue1,ivalue2);
    return 0;
}