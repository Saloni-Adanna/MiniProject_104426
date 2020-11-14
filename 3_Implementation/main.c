#include "trainsys.h"

int main(){

	getTrainData();

	system("cls");

    show_menu();

    gotoxy(34,6);

    printf("THE TESTS CASES ARE BEING TESTED");

    gotoxy(34,7);

    printf("--------------------------------");

    test_main();

	return 0;
}

