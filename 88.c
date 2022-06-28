#include<stdio.h>
// Input:rows=4,cols=4
//Output:
//       A   A   A  A
//       B   B   B  B
//       C   C   C  C
//       D   D   D  D
void display(int irows,int icols)
{
    int i=0,j=0;
    char ch='\0';
    char ch1='\0';
   
    for(i=1,ch1='A';i<=irows;i++,ch1++)
    {
        for(j=1,ch='A';j<=icols;j++,ch++)
        {
    
            printf("%c\t",ch1);
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