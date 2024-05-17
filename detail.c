#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main();
void front();
int space(int s);
int star(int st);

void detail()
{
    char *sub[100]={"math      ","physics   ","electrical","mechanical","C language"};
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

        printf("\nName : %s\n\n",name);
        
        for(i=0;i<=4;i++)
        {
            tot_mark=tot_mark+mark[i];
            if(mark[i]>=90)
            {
                printf("%s mark : %d\t\t\t(GRADE A)\n",*(sub+i),mark[i]);
            }
            else if(mark[i]>=80)
            {
                printf("%s mark : %d\t\t\t(GRADE B)\n",*(sub+i),mark[i]);
            }
            else if(mark[i]>=60)
            {
                printf("%s mark : %d\t\t\t(GRADE C)\n",*(sub+i),mark[i]);
            }
            else
            {            
                printf("%s mark : %d\t\t\t(GRADE D)\n",*(sub+i),mark[i]);
            }
        }
        if(tot_mark/5>90)
        {
            printf("\n\t\tYour total score : %d",tot_mark);
            printf("\n\t\tYour overall grade : A");
            printf("\n\n\t\t! ! CONGRATULATION ! !");
        }
        else if(tot_mark/5>80)
        {
            printf("\n\t\tYour total score : %d",tot_mark);
            printf("\n\t\tYour overall grade : B");
        }
        else if(tot_mark/5>60)
        {
            printf("\n\t\tYour total score : %d",tot_mark);
            printf("\n\t\tYour overall grade : C");
        }
        else 
        {
            printf("\n\t\tYour total score : %d",tot_mark);
            printf("\n\t\tYour overall grade : D");
        }
        fclose(fp);
        printf("\n");
        for(int j=1;j<=70;j++)
        {
            star(1);space(1);
        }
        printf("\n\nPress any number to exit :");
        scanf("%d",&jk);
        sleep(5);
        system("cls");
        
    }
    main();

}