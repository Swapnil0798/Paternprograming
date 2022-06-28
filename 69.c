#include<stdio.h>
 //Input: 4
//Output: 4   3   2   1   1   2   3   4
void display(int ino)
{
    int icnt=0;
     
    for(icnt=ino;icnt>=1;icnt--)
    {
        printf("%d\t",icnt);
    }
    for (icnt=1;icnt<=ino;icnt++)
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