#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	printf("Hello this is Calvin\n");
	int hour, minute, second;
	scanf("%d\n%d\n%d", &hour, &minute, &second);

	if ( hour >= 12 || minute > 59 || second > 59 ) {
		printf("ERROR, Invalid Numbers");
	}

	while ( 1 == 1 ) {
		if ( hour > 12 ) {
			hour = 1;	
		}
		else if ( minute > 59 ) {
			minute = 0;
			hour++;
		}
		else if ( second > 59 ) {
			second = 0;
			minute++;
		}

		second++;
		sleep(1);
		system("clear");
		printf("\nDigital Clock: %02d:%02d:%02d", hour, minute, second );	
	}	

	return 0;
}
