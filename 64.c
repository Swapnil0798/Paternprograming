#include<stdio.h>
//Input: 5
//Output: *  *  *  *   *
void display(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("*\t");
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