#include<stdio.h>


int space(int s);
int star(int st);
void addstd();
void detail();

void cases(int case_mode)
{
    switch (case_mode)
    {   
        case 1:
        {
            addstd();
            break;
        }
        case 2:
        {   
            detail();
            break;
        }
        case 3:
        {
            reval();
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