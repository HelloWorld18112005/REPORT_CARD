DOCUMENTATION :  C Case study: To create a grade card based of user input with a menu.Menu contain 4 optains using structure.To add student marks and simultaneously display the added student marks,to see the 
marks of student for the students that are hardcoded,to apply for revaluation,and quit button.
There are 9 C files-- main.c front.c cases.c add_student.c details.c reval.c space.c star.c mode.c which are linked by Makefile as well as one header file called class.h.

main.c : Contains the initialization of variables which calls the menu function.

add_student.c : It askes the add the roll number,name,marks of stduent by entering,
                then it asks for showing the detail simultaneously if no it will redirect you back to menu screen.

detail.c : It shows the report card of the student by asking the roll number of hardcoded student(defined inside main function) and returns back to Menu by entering any key.

reval.c : It  is just bunch of print statement which asks the person to apply they respective subject for revaluation.

cases.c :  It calls all the menu function respectively inputed by the user.

front.c :  this program have the outer design of the report card used used to show the details and  is basically used everywhere.

mode.c :  It have the print statement which tells how the menu function should be.

star.c : It is very useful code for giving  desired number of stars any where by calling this function by passing number of stars required.

space.c : It is very useful code for giving  desired amount of space any where by calling this function by passing number of space required.

class.h : It have the defination of structure.

final.mk : It is a Makefile which links all the file together.

To compile all the linked files : open cmd, and type "mingw32-make -f final.mk "
                                  to run the code type "./final"

Author : Ankur Sharma (T_T)..,
        [PES2UG23CS077]
        Semester - 2    Section - B

        PES UNIVERSITY
        
        




                
