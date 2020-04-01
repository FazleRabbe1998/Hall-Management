#include <stdio.h>
#include <stdlib.h>
#include "add.c"

int main ()
{
    static int gh=1;
    if(gh==1)
    {
        screenheader ();
        intro();
        screenheader();
        gh=2;
    }
    menu();
    int n;
    here:
    printf ("Choose From Menu : ");
    scanf("%d",&n);
    if(n==1) getavail();
    else if (n==2) location();
    else if (n==3) helpline();
	else if(n==4){
		clrscr();
		printf("Good bye. Thank You !!!\n");
		return 0;

	}
	else{
		printf("You have to press between 1 to 4\n");
		scanf("%c");
		goto here;
	}
}
