#include <stdio.h>
#include <windows.h> // contains declarations for all of the functions in the Windows API
#define g gotoxy
#define p printf

// BSCS 1F
/* The CODEBLOCKS IDE don't have a gotoxy() predefined function Therefore, “SetConsoleCursorPosition()”
can be used to carry out the same procedure. To use this function add a header file called #include<windows. h>. */

COORD co = {0,0}; //This is a global variable the predefined function used to get X and Y coordinates.
void gotoxy(int x, int y)
{
    co.X=x; //X is equal to x which is constant
    co.Y=y; //Y is equal to y which is constant
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co); //To get the value of handle, call a predefined function
}

int main()
{
p("  .d88b.  d8888b. d88888b d8888b.  .d8b.  d888888b  .d88b.  d8888b. .d8888. \n");
p(" .8P  Y8. 88  `8D 88'     88  `8D d8' `8b `~~88~~' .8P  Y8. 88  `8D 88'  YP \n");
p(" 88    88 88oodD' 88ooooo 88oobY' 88ooo88    88    88    88 88oobY' `8bo.   \n");
p(" 88    88 88~~~   88~~~~~ 88`8b   88~~~88    88    88    88 88`8b     `Y8b. \n");
p(" `8b  d8' 88      88.     88 `88. 88   88    88    `8b  d8' 88 `88. db   8D \n");
p("  `Y88P'  88      Y88888P 88   YD YP   YP    YP     `Y88P'  88   YD `8888Y'   ");

    system("COLOR 0A");

	int fn, sn, tn, frtn, fftn;
	int sum, dif, prod, quot;

    //First Operator: Addition
	g(14,7);p("[$]-> ENTER YOUR FIRST VALUE: ");
	scanf("%d", &fn);
	g(14,8);p("[$]-> ENTER YOUR SECOND VALUE: ");
	scanf("%d", &sn);

	sum = fn + sn;

    sleep(1);
	g(14,10);p("[$]-> THE SUM OF %d AND %d is : %d\n", fn, sn, sum);

    //Second Operator: Subtraction
	g(14,12);p("[$]-> ENTER THIRD NUMBER: ");
	scanf("%d", &tn);

	dif = sum - tn;

    sleep(1);
	g(14,14);p("[$]-> THE DIFFERENCE OF %d AND %d is : %d\n", sum, tn, dif);

    //Third Operator: Multiplication
	g(14,16);p("[$]-> ENTER FOURTH NUMBER: ");
	scanf("%d", &frtn);

	prod = dif * frtn;

    sleep(1);
	g(14,18);p("[$]-> THE PRODUCT OF %d AND %d is : %d\n", dif ,frtn, prod);

    //Fourth Operator: Division
	g(14,20);p("[$]-> ENTER FIFTH NUMBER: ");
	scanf("%d", &fftn);

	quot = prod / fftn;

    sleep(1);
	g(14,22);p("[$]-> THE QUOTIENT OF %d AND %d is : %d", prod ,fftn, quot);

    //Break line and to make the user read the outputs clearly we put a system pause before the exit
   p("\n");
   sleep(3);
   g(14,24);system("pause");
}

