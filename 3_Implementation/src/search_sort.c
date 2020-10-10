#include "trainsys.h"

void train_sort(int sort_type){
	printf("entered\n");
	int count = 2;

	int i, j;
  	train *temp;

	for(i = 0; i < train_count; ++i) {
    	for(j = i + 1; j < train_count; j++) {
        	if(compare_train(t_array[i], t_array[j], sort_type) > 0) {
            	temp = t_array[i];
            	t_array[i]=t_array[j];
            	t_array[j]=temp;
        	}    	
    	}
	}

	system("cls");

	
	headings();

	for (int k=0; k<train_count; k++) {

	   gotoxy(3,count+3);
       printf("%d     ",train_data[k]->sl_no);
       gotoxy(10,count+3);
       printf("%s     ",t_array[k]->train_name);
       gotoxy(38,count+3);
       printf("%d     ",t_array[k]->train_number);
       gotoxy(50,count+3);
       printf("%s     ",t_array[k]->source);
       gotoxy(70,count+3);
       printf("%s     ",t_array[k]->destination);
       gotoxy(85,count+3);
       printf("%s     ",t_array[k]->arr_time);
       gotoxy(100,count+3);
       printf("%s     ",t_array[k]->dept_time);
       printf("\n");

       count = count+3;
    }

}


void search(int type){

	int found = 0;
	char search_str[20];
	scanf("%s", &search_str);

	train *temp[200];
	int index = 0;
	for (int i=0; i<train_count; i++){

		switch(type){

			case 1: found = compare_string(t_array[i]->train_name, search_str);
					break;
			case 2: found = compare_string(t_array[i]->source, search_str);
					break;
			case 3: found = compare_string(t_array[i]->destination, search_str);
					break;
		}

		if(found == 1){

			temp[index++]= t_array[i];
			
		}
	}

	display_train_info(temp, index);
	
}