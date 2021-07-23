#include <stdio.h>

int main()
{
    char name[100];
    int c = 1;

    while(c != 0) {
       	int option;
	printf("Options: 1 = Register, 2 = List, 3 = Exit\n");
	scanf("%d", &option);
	if(option == 1) {
	
	} else if(option == 2) {
	
	}
	printf("Do you want to continue? [YES: 1 / NO: 0]: ");
	scanf("%d", &c);
    }

    return 0;
}
