#include <stdio.h>
int i;
void menu();
void getavail();
void intro();
void screenheader();
void location ();
void helpline ();

void clrscr()
{
    system("@cls||clear");
}
void menu()
{
    clrscr();
	screenheader ();
    printf("\n\n\n  Choose a category:\n");
    printf("                        1. Get availability\n");
    printf("                        2. Location\n");
    printf("                        3. Helpline\n");
    printf("                        4. Exit\n");
}
void screenheader()
{
    printf("\n                       :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n                       ::                                                           ::");
    printf("\n                       ::     *************************************************     ::");
    printf("\n                       ::     *                                               *     ::");
    printf("\n                       ::     *                 WELCOME TO                    *     ::");
    printf("\n                       ::     *                                               *     ::");
    printf("\n                       ::     *    BANGABONDHU SHEIKH MUJIBUR RAHAMAN HALL    *     ::");
    printf("\n                       ::     *                                               *     ::");
    printf("\n                       ::     *************************************************     ::");
    printf("\n                       ::                                                           ::");
    printf("\n                       :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
}
void intro()
{
    printf("\n\t\t\t\t           Fulbari Gate,Teligati\n\t\t\t\t\t\t Khulna");
    printf("\n\t                                   Ph. No.:011-27223959");
    printf("\n\n\n\t\t                             WELCOMES YOU..............");
    printf("\n\n\nBangabandhu Sheikh Mujibur Rahaman Hall is one of the largest hall amongst the 7 halls of KUET.It was established at 2013 Inagurated Prime Minister Sheikh Hasina,proud daughter of Bangabandhu Sheikh Mujibur Rahaman.It is situated at the centre spot of  IICT Academic Bulilding.This hall has a capacity of around 900 students.");
    printf("\n\n                     ************AMENITIES***********\n");
    printf("\n\t\t\t1.  24 Hours Power backup.\n");
    printf("\t\t\t2.  24 Hours drinking water supply.\n");
    printf("\t\t\t3.  Reading Room.\n");
    printf("\t\t\t4.  Indoor games facilities.\n");
    printf("\t\t\t5.  Broadband.\n");
    printf("\t\t\t6.  Play ground.\n");
    printf("\t\t\t7.  Guest Room.\n");
    printf("\t\t\t8.  Security guard service.\n");
    printf("\t\t\t9.  Prayer Room.\n");
    printf("\t\t\t10. TV room\n");
    printf("\nPress any character to continue:");
    getch();
}
void getavail()
{
    clrscr();
    int i=0,j=100;

    screenheader();
    printf("\t\t\t\t   *************ROOM AVAILABILITY*************\n\n\n");
    printf(" Serial No    |     Room NO         |    Type    |    Availability  \n");

    printf("     %d                  %d                4              N/A             \n",++i,++j);
    printf("     %d                  %d                4              N/A             \n",++i,++j);
    printf("     %d                  %d                4               1            \n",++i,++j);
    printf("     %d                  %d                8               3            \n",++i,++j);
    printf("     %d                  %d                8               2            \n",++i,++j);
    printf("     %d                  %d               12               5            \n",++i,++j);
    printf("     %d                  %d               12               2             \n",++i,++j);
    printf("     %d                  %d                8               1             \n",++i,++j);
    printf("     %d                  %d                8               6            \n",++i,++j);
    printf("    %d                  %d                4              N/A           \n",++i,++j);
    printf("    %d                  %d                8               2           \n",++i,++j);
    printf("    %d                  %d               12               3           \n",++i,++j);
    printf("    %d                  %d                4              N/A           \n",++i,++j);

    printf("Press any key for goto menu.\n");
    char x;
    scanf("%c",&x);
    scanf("%c",&x);
    main();
}
void location()
{
    clrscr ();
    screenheader();
    int k=1;

    printf("Serial No.   |  		   Type            	    |		    Location  \n");
    printf("   %d          	      	        Office Room       	           1st floor East Block \n ",k++);
    printf("  %d          	        	Provost Room            	   1st floor East Block \n ",k++);
    printf("  %d          	        	Prayer Rooom            	   3rd floor West Block \n ",k++);
    printf("  %d          	        	Dining Room               	   1st floor East & West Block \n ",k++);
    printf("  %d          	        	Guest Room             	           1st floor Entrance Block \n ",k++);
    printf("  %d          	        	Library                            3rd floor East Block \n ",k++);
    printf("  %d          	        	TT Room                            2nd floor East & West Block \n ",k++);
    printf("  %d          	        	TV Room                            3rd floor East & West Block \n ",k++);
	printf("Press any key for goto menu.\n");
    char x;
    scanf("%c",&x);
    scanf("%c",&x);
    main();
}

void helpline()
{
	clrscr();
	screenheader ();
	int l=1;
	printf("Serial No.   |  	 Name              | 	   Post type      |		Contact No.\n");
	printf("%d 		Krishna Kumar Das	        Hall Assistant			01915-111446\n",l++);
	printf("%d 		Md. Mirajul Islam               Hall Assistant	      	        01718-777646\n",l++);
	printf("%d 		Md. Habibur Rahaman		Ward Boy			01718-323544\n",l++);
	printf("%d 		Md. Ariful Sheikh 		Electrician			01917-643652\n",l++);
	printf("%d 		Md. Mirajul Islam               Hall Librarian	      	        01929-886591\n",l++);
	printf("%d 		Md. Faruk Hossain               Hall peon	      	        01768-689780\n",l++);
	printf("%d 		Md. Nazrul Islam                Water Supplier	      	        01722-992019\n",l++);
	printf("Press any key for goto menu.\n");
    char x;
    scanf("%c",&x);
    scanf("%c",&x);
	main ();
}

