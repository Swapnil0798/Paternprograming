#include<stdio.h>
 //Input: 5
//Output: 1 * 3 * 5  

 //Input: 6
//Output: 1 * 3 * 5 * 
void display(int ino)
{
    int icnt=0;
     
    for(icnt=1;icnt<=ino;icnt++)
    { 
        if(icnt%2==0)
        {

         printf("*\t",icnt);

        }
        else
        {
            printf("%d\t",icnt);
        }
    
    }

}
// Date: 09/05/2022
int main()
{
   
    int ivalue=0;

    printf("enter the value\n");
    scanf("%d",&ivalue);

    display(ivalue);

   return 0;
}