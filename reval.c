#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void front();
void modes();
int space(int s);
int star(int st);


void reval()
{
    char *sub[100]={"math","physics","electrical","mechanical","C language"};
    int mark[5];
    FILE *fp;
    char name[20],impname[20];int math,phy,electrical,mech,c,tot_mark=0,i=0;
    int jk;
    fp=fopen("student_detail.txt","r");
    if(fp==NULL)
    {
        system("cls");
        printf("ERROR: NO such file found\n");
        sleep(7);
        main();
    }
    else
    {
        system("cls");
        front();
        printf("Enter your name : ");
        scanf("%s",impname);
        printf("\n");

        while(fscanf(fp,"%s%d%d%d%d%d",name,&mark[0],&mark[1],&mark[2],&mark[3],&mark[4]))
        {
            if(strcmp(impname,name)==0)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        system("cls");
        front();
        printf("If you want to apply for revalution enter 'yes' else else 'no'\n");
        printf("\n");
        char val[6];
        for(i=0;i<5;i++)
        {
            printf("Do you want to apply %s for revaluation : ",*(sub+i));
            scanf("%s",&val);
            fflush(stdin);
            if(strcmp("yes",val)==0)
            {
                printf("\t\t-----Your %s answer sheet has be applied for revaluation",*(sub+i));
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
}