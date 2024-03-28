#include<stdio.h>
#include"lib.h"
void main()
{
    int mode,choosen_case,student[10][6]={{40,95,94,93,91,98},{41,98,99,97,97,98},{44,94,95,93,95,98},{50,99,99,99,99,99}};
    int *ptr;
    ptr=student;
    system("cls");
    front();
    modes();
    printf("\nEnter the mode :");
    scanf("%d",&mode);
    fflush(stdin);
    system("cls");
    choosen_case=cases(mode,ptr);
   
}