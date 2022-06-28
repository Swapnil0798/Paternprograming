#include<stdio.h>
 //Input: 5
//Output: 5  4  3  2  1 
void display(int ino)
{
    int icnt=0;
    for(icnt=ino;icnt>=1;icnt--)
    {
        printf("%d\t",icnt);
    }

}
// Date: 09/05/2022
int main()
{
   
    int ivalue=0;

    printf("enter the value");
    scanf("%d",&ivalue);

    display(ivalue);

   return 0;
}