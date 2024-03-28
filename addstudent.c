#include<stdio.h>
void front();
void main();

void addstd(int v)
{
    int i,j,ext_stu[6][6],idno;int q,qu,ext,var;
    
    for(i=0;i<6;i++)
    {   printf("\nif you want to add marks enter 1 else 0 :");
        scanf("%d",&q);
        if(q==1)
        {
            printf("enter the id : ");
            scanf("%d",&ext_stu[i][0]);
            for(j=1;j<6;j++)
                {
                    printf("Enter sub %d marks : ",j);
                    scanf("%d",&ext_stu[i][j]);
                    
                }
        }
        else
        {
            break;
        }
        
    }
    system("cls");
    printf("\n\nDo you want to see your updated marks\n");
    printf("If yes enter 1 else 0 : ");
    scanf("%d",&var);
    system("cls");
    if (var==1)
    {

        front();
        printf("\nEnter the id : ");
        scanf("%d",&idno);
        for(i=0;i<6;i++)
        {
            if(idno==ext_stu[i][0])
            {
                break;
            }
            else
            {
                continue;
            }
        }   
        for(i;i<6;i++)
        {
            printf("\ndo you want to see the  marks enter 1 else 0 :");
            scanf("%d",&qu);
            if(qu==1)
            {
                for(j=1;j<6;j++)
                {
                    printf("marks %d : %d\n",j,ext_stu[i][j]);
                }
                break;
            }
            else
            {
                break;
            }
        }
        printf("Enter any number to goto menu : ");
        scanf("%d",&ext);
        system("cls");
        main();
        
    }

    
}