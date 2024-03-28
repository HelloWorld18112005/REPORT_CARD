#include<stdio.h>
int space(int s);
int star(int st);
void front();
void main();

int detail(int val,int *pt)
{
    char *name[4]={"anirudh.M","anirudh.S","anish","ansh"};
    char *subject[5]={"Math            ","Physics         ","Chemistry       ","Computer Science","English         "};
    int id,i=0,mark,sum=0,avg=0,junk;
    
    front();
    printf("\nEnter the ID :");
    scanf("%d",&id);
    system("cls");
    front();
    for(i;;i++)
    {
        if(*(pt+i*6)==id)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    printf("Student name : %s\n",*(name+i));
    star(20);printf("\n");
    for(int j=1;j<6;j++)
    {
        mark=*(pt+i*6+j);
        sum=sum+mark;
        printf("Marks in subject %s : %d",*(subject+j-1),mark);
        if(mark>=90)
        {
            space(10);printf("--Grade 'A'\n");
        }
        else if(mark>=80)
        {
            space(10);printf("--Grade 'B'\n");
        }
        else if(mark>=45)
        {
            space(10);printf("--Grade 'C'\n");
        }
        else
        {
            space(10);printf("--Grade 'D'\n");
        }

    }
    printf("\nYou scored %d out of 500 (%d percent)\n",sum,sum*100/500);
    avg=sum/5;
    printf("\n\n");
    if(avg>=90)
        {
            space(10);printf("Your overall Grade--'A'\n");
            printf("\n");space(12);printf("! ! CONGRATULATION ! !");
        }
        else if(avg>=80)
        {
            space(10);printf("Your overall Grade--'B'\n");
        }
        else if(avg>=45)
        {
            space(10);printf("Your overall Grade--'C'\n");
        }
        else
        {
            space(10);printf("Your overall Grade--'D'\n");
        }
    printf("\n\n Enter any key to go menu : ");
    scanf("%d",junk);
    sleep(3);
    system("cls");
    main();

    return 0;
}