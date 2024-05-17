#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main();
void front();
int space(int s);
int star(int st);

void addstd()
{
    FILE *fp;
    int math,phy,electrical,mech,c;
    char name[21];
    fp=fopen("student_detail.txt","a");
    if(fp==NULL)
    {
        system("cls");
        printf("ERROR: NO such file found\n");
        sleep(7);
        main();
    }
    else
    {
       int no_student,i=0;
       system("cls");
       front();
       printf("\nEnter the number of student detail to be added : ");
       scanf("%d",&no_student);
       system("cls");
       for(i=0;i<no_student;i++)
       {
            front();
            printf("Enter the student name : ");
            scanf("%s",name);
            fflush(stdin);
            printf("\nEnter the math mark : ");
            scanf("%d",&math);
            fflush(stdin);
            printf("\nEnter the physics mark : ");
            scanf("%d",&phy);
            fflush(stdin);
            printf("\nEnter the electrical mark : ");
            scanf("%d",&electrical);
            fflush(stdin);
            printf("\nEnter the mechanical mark : ");
            scanf("%d",&mech);
            fflush(stdin);
            printf("\nEnter the C language mark : ");
            scanf("%d",&c);
            fflush(stdin);
            fprintf(fp,"%s %d %d %d %d %d\n",name,math,phy,electrical,mech,c);
            printf("\n\n---Your marks have been successfully added---\n");
            star(135);
            printf("\n"); 
       }
        fclose(fp);
        printf("\n---You can check the result in the detail option from the menu");
        printf("\n\n\t\t! T H A N K  Y O U !\n\n");
        sleep(5);
        main();        
    }

}