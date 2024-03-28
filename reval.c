#include<stdio.h>
void front();
void modes();
void main();

int reval(int v,int *p)
{
    int id_no,i;char out;
    printf("Enter your id : ");
    scanf("%d",&id_no);
    fflush(stdin);
    system("cls");
    char *name[4]={"anirudh.M","anirudh.S","anish","ansh"};
    char *subject[5]={"Math","Physics","Chemistry","Computer Science","English"};
    for(i=0;;i++)
    {
        if(*(p+i*6)==id_no)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    printf("NAME:%s",*(name+i));
    printf("\nIf you want to reval the subject enter 'yes' if not enter 'no'\n");
    for(int j=0;j<5;j++)
    {
        printf("Do you want to apply %s for reval :",*(subject+j));
        scanf("%c",&out);
        fflush(stdin);
       
        if(out=='y')
        {
            printf("\t\t---Your %s answer sheet has been sent for reval.\n\n",*(subject+j));
        }
        else
        {
            continue;
        }
    }
    printf("!  T H A N K    Y O U  !");
    sleep(5);

    system("cls");
    main();
    return 0;
}