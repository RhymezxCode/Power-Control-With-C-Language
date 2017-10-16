#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
{
	int click;
	up:
	printf("  %c%cPOWER CONTROL WITH C LANGUAGE BY RhymeZ\n\n\n\n", 248);
	printf("   1. --------Shutdown your computer now-------\n");
	printf("--------------------------------------------------\n");
	printf("   2. --------Restart your computer now--------\n");
	printf("--------------------------------------------------\n");
	printf("   3. --------Logoff your account now----------\n");
	printf("--------------------------------------------------\n");
	printf("INPUT HERE: ");
	scanf("%d", &click);
	switch(click)
	{
		case 1:
		printf(" Press any key to execute action:  ");
		getch();
		printf(" LOADING", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(3);
		system(" shutdown -s");
		break;
		case 2:
		printf(" Press any key to execute action:  ");
		getch();
		printf(" LOADING", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(3); 
		system(" shutdown -r");
		break;
		case 3:
		printf(" Press any key to execute action:  ");
		getch();
		printf(" LOADING", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(2);
		printf(" %c", 236);
		sleep(3); 
		system(" shutdown -l");
		break;
		Default: 
		printf(" Wrong input, pls shine your eye ooo");
		goto up;
		break;
		
		
		
		
		
		
		
	}
}
