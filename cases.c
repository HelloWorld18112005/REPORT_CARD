#include<stdio.h>
#include"class.h"




int space(int s);
int star(int st);
void detail(struct class *ptr,int val);
void reval(struct class *p,int mode_value);


void cases(struct class *student_ptr,int case_mode)
{
    switch (case_mode)
    {   
        case 1:
        {
            addstd(student_ptr);
            break;
        }
        case 2:
        {   
            detail(student_ptr,case_mode);
            break;
        }
        case 3:
        {
            reval(student_ptr,case_mode);
            break;
        }
        case 4:
        {
            system("cls");
            printf("\n\n\nLogging out...");
            sleep(3);
            system("cls");
            printf("\n\n\n\n\n\n");
            star(18);space(45);
            printf("! T H A N K  Y O U !");
            space(34);star(18);
            printf("\n\n\n\n\n\n\n");
            break;
        }
        
    }
}