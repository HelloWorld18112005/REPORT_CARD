#include<stdio.h>
#include"class.h"




int space(int s);
int star(int st);
void main();
void front();


void addstd(struct class *pt)
{
    
    struct class extra_student;
    int sum=0,i=0;

    system("cls");
    front();
    printf("\nEnter your name : ");
    scanf("%s",&extra_student.name);
    fflush(stdin);
    printf("\nEnter your roll number : ");
    scanf("%d",&extra_student.roll);
    fflush(stdin);
    printf("\nEnter your marks : ");
    scanf("%d%d%d%d%d",&extra_student.marks[0],&extra_student.marks[1],&extra_student.marks[2],&extra_student.marks[3],&extra_student.marks[4]);
    fflush(stdin);

    
    char chr;
     printf("enter 'y' if yes and 'n' if no\n");
    printf("\nDo you want to see the deatail of new student : "); 
    scanf("%c",&chr);
    fflush(stdin);
    if(chr=='y')
    {
        system("cls");
        front();
        printf("Name : %s\n\n",extra_student.name);

        for(i=0;i<5;i++)
    {
        sum=sum+extra_student.marks[i];
        if(extra_student.marks[i]>=90)
        {
            printf("%s  mark  \t%d\t\t\t (GRADE A)\n",(pt)->subject[i],extra_student.marks[i]);
        }
        else if(extra_student.marks[i]>80)
        {
            printf("%s  mark  \t%d\t\t\t (GRADE B)\n",(pt)->subject[i],extra_student.marks[i]);
        }
        else if(extra_student.marks[i]>60)
        {
             printf("%s  mark  \t%d\t\t\t (GRADE C)\n",(pt)->subject[i],extra_student.marks[i]);
        }
        else
        {
             printf("%s   mark  \t%d\t\t\t (GRADE D)\n",(pt)->subject[i],extra_student.marks[i]);
        }
    }
    
    }
    else if(chr=='n')
    {
        printf("\n\n\t\t! T H A N K  Y O U !\n\n");
        sleep(5);
        main();
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
    printf("\n\n\t\t! T H A N K  Y O U !\n\n");
    
    printf("Press any key to return back to menu : ");
    char jk;
    scanf("%c",&jk);
    sleep(5);
    system("cls");
    main();
    

} 