#include<stdio.h>
#include"class.h"

void front();
void modes();
int space(int s);
int star(int st);
void cases(struct class *student_ptr,int case_mode);





void main()
{
    struct class student[10]={{"Anirudh.m",70,{"Math      ","Physics   ","Electrical","Mechanical","C language"},{95,91,92,94,95}},
                              {"Anirudh.s",71,{"Math      ","Physics   ","ELectrical","Mechanical","C language"},{95,92,93,91,92}},
                              {"Anish    ",74,{"Math      ","Physics   ","Electrical","Mechanical","C language"},{94,95,91,92,94}},
                              {"Ansh     ",80,{"Math      ","Physics   ","Electrical","Mechanical","C language"},{99,99,99,99,99}},
                              };
    struct class *p;
    int mode;
    p=student;
    system("cls");
    front();
    modes();
    printf("\n---Enter the mode :");
    scanf("%d",&mode);
    cases(p,mode);

    


}




