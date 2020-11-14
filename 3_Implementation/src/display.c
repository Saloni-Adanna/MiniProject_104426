#include "trainsys.h"


void display_train_info(train** data, int iter){

int count = 2;
if (iter == 0){
	printf("NOT FOUND");
	return;
}

system("cls");

headings();

for (int k=0; k<iter; k++) {

	gotoxy(3,count+3);
       printf("%d     ",data[k]->sl_no);
       gotoxy(10,count+3);
       printf("%s     ",data[k]->train_name);
       gotoxy(38,count+3);
       printf("%d     ",data[k]->train_number);
       gotoxy(50,count+3);
       printf("%s     ",data[k]->source);
       gotoxy(70,count+3);
       printf("%s     ",data[k]->destination);
       gotoxy(92,count+3);
       printf("%s     ",data[k]->dept_time);
       gotoxy(106,count+3);
       printf("%s     ",data[k]->arr_time);
       printf("\n\n");

       count = count+3;
    }

}


void gotoxy(short col, short row)
{
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
COORD position={col,row};
SetConsoleCursorPosition(h,position);
}


void headings(){

	gotoxy(1,2);
       printf("SL NO");
       gotoxy(14,2);
       printf("TRAIN NAME");
       gotoxy(36,2);
       printf("TRAIN NO");
       gotoxy(53,2);
       printf("SOURCE");
       gotoxy(68,2);
       printf("DESTINATION");
       gotoxy(83,2);
       printf("DEPARTURE TIME");
       gotoxy(99,2);
       printf("ARRIVAL TIME");
       gotoxy(1,3);
       printf("-----------------------------------------------------------------------------------------------------------------");

}
