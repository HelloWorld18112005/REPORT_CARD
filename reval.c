#include<stdio.h>
#include"class.h"


void front();
void main();

void reval(struct class *p,int mode_value)
{
    int roll_num,i,n=0;
    system("cls");
    front();
    printf("Enter your roll number : ");
    scanf("%d",&roll_num);
    fflush(stdin);
    for(i=0;;i++)
    {
        if(roll_num!=(p+i)->roll)
        {
            n++;
            continue;
        }
        else
        {
            break;
        }
    }
    printf("Name : %s\n\n",(p+n)->name);
    char opinion;
    printf("If you want to apply for revalution press 'y' else press 'n'");
    for(i=0;i<5;i++)
    {
        printf("\nDo you want to apply %s for revaluation : ",(p+n)->subject[i]);
        scanf("%c",&opinion);
        fflush(stdin);
        if(opinion=='y')
        {
            printf("\t\t-----Your %s answer sheet has be applied for revaluation",(p+n)->subject[i]);
            printf("\n\n");
        }
        else
        {
            printf("\n");
            continue;
        }
        
    }
    printf("\n\n\t\t ! T H A N K  Y O U !");
    sleep(5);
    main();
    
}