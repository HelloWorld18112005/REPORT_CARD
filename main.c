#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void front();
void modes();
int space(int s);
int star(int st);



void main()
{
    int mode=0;
    system("cls");
    front();
    modes();
    printf("\n---Enter the mode :");
    scanf("%d",&mode);
    cases(mode);
}