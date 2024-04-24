#include<stdio.h>
#include"class.h"
#include<string.h>



int space(int s);
int star(int st);
void front();
void main();


void detail(struct class *ptr,int val)
{
    int roll_no,num=0,sum=0,i;
    system("cls");
    front();
    printf("Enter your roll number : ");
    scanf("%d",&roll_no);
    fflush(stdin);
    for(i=0;;i++)
    {
        if(roll_no!=(ptr+i)->roll)
        {
            num++;
            continue;
        }
        else
        {
            break;
        }
    }
    system("cls");

    front();
    printf("Name : %s\n\n",(ptr+num)->name);
    for(i=0;i<5;i++)
    {
        sum=sum+(ptr+num)->marks[i];
        if(((ptr+num)->marks[i])>=90)
        {
            printf("%s  mark  \t%d\t\t\t (GRADE A)\n",(ptr+num)->subject[i],(ptr+num)->marks[i]);
        }
        else if(((ptr+num)->marks[i])>80)
        {
            printf("%s  mark  \t%d\t\t\t (GRADE B)\n",(ptr+num)->subject[i],(ptr+num)->marks[i]);
        }
        else if(((ptr+num)->marks[i])>60)
        {
             printf("%s  mark  \t%d\t\t\t (GRADE C)\n",(ptr+num)->subject[i],(ptr+num)->marks[i]);
        }
        else
        {
             printf("%s   mark  \t%d\t\t\t (GRADE D)\n",(ptr+num)->subject[i],(ptr+num)->marks[i]);
        }
    }
    if(sum/5>90)
    {
        printf("\n\t\tYour total score : %d",sum);
        printf("\n\t\tYour overall grade : A");
        printf("\n\n\t\t! ! CONGRATULATION ! !");
    }
    else if(sum/5>80)
    {
        printf("\n\t\tYour total score : %d",sum);
        printf("\n\t\tYour overall grade : B");
    }
    else if(sum/5>60)
    {
        printf("\n\t\tYour total score : %d",sum);
        printf("\n\t\tYour overall grade : C");
    }
    else 
    {
        printf("\n\t\tYour total score : %d",sum);
        printf("\n\t\tYour overall grade : D");
    }
char jnk;
printf("\n\npress any key to exit : ");
scanf("%c",&jnk);
sleep(5);
system("cls");
main();


}