#include "trainsys.h"

void show_menu(){
	char num ,menu_num, back, option;
	
	do{

	//gotoxy(36,1);
	printf("\n -----------------------------WELOCME TO TRAIN INFORMATION SYSTEM --------------------------\n\n                     SELECT ANY OF THE BELOW MENU FOR FURTHER INFORMATION        \n");
	printf ("\n 1. ALL TRAINS            2.TRAIN LISTING               3. TRAIN SEARCH       ANY KEY TO EXIT\n");
	scanf(" %c", &menu_num);

	switch(menu_num){

			case '1':train_sort(1);

					 printf("\n\n\n PRESS Y - MAIN Menu    PRESS E - EXIT\n");
					 scanf(" %c", &option);

					 system("cls");
					 
					 break;
			case '2':option = train_listing();
					 
					 break;
			case '3':option = train_search();
					 break;
			default: option = 'E'; 
					 break;

	}
} while (option != 'E');

	system("cls");
	
	printf("\n EXITING..");
	
}

char train_listing(){
	char num2, back;

	do{

	printf(" TRAIN LISTING");
	printf("\n -------------");
	printf("\n 1. TRAIN NAME-ALPHABETICAL \n 2. ARRIVAL TIMING\n 3. DEPARTURE TIMING\n 4. SOURCE-ALPHABETICAL \n 5. DESTINATION-ALPHABETICAL \n ");
	printf("\n Select the choice: ");
	scanf(" %c", &num2);

		switch(num2){

			case '1': train_sort(1);

                      printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;

			case '2': train_sort(4);

					  printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;

			case '3': train_sort(5);

					  printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;

			case '4': train_sort(2);

					  printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;
			case '5': train_sort(3);
					  
					  printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;
			default: //printf("\n PRESS N to see the MAIN menu \n");
					 //scanf(" %c", &back);
					 back = 'N';
			 					
		}
	} while (back!= 'N');

	system("cls");

	return 'M';	 
}


char train_search(){
	char num3, back ;

	
	do{

	printf(" TRAIN SEARCH");
	printf("\n -------------");
	printf("\n 1.Train Name\n 2.Source\n 3.destination\n");
	printf("\nSelect the choice:");
	scanf(" %c", &num3);

		switch(num3){
			case '1': printf( "\nEnter train name :");

					  search(1);

					  printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;
			case '2': printf( "\n Enter the source: ");

					  search(2);

					  printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;
			case '3': printf( "\n Enter the destination: ");

					  search(3);

					  printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
					  scanf(" %c", &back);

					  system("cls");
					break;
			default:  //printf("\n PRESS N to see the MAIN menu \n");
					  //scanf(" %c", &back);
					  back = 'N';
			//default: 
					  			
		}

	} while (back != 'N');

	return 'M';	
}