#include "trainsys.h"

int compare_train(train *t_array1,train *t_array2, int num){

	int ret=0;
	switch(num){

		case 1 : ret = strcmp(t_array1->train_name, t_array2->train_name);
				 break; 
		case 2 : ret = strcmp(t_array1->source, t_array2->source);
				 break; 
		case 3 : ret = strcmp(t_array1->destination, t_array2->destination);
				 break; 
		case 4 : ret = compare_time(t_array1->dept_time, t_array2->dept_time);
				 break;
		case 5 : ret = compare_time(t_array1->arr_time, t_array2->arr_time);
				 break;
	}

	return ret;
	
}


int compare_time(char* t1, char* t2){

	//printf("%s %s \n", t1, t2);

	char temp1[5];
	char temp2[5];
	int T1,T2;

	temp1[0]= t1[0];
	temp1[1]= t1[1];
	temp1[2]= t1[3];
	temp1[3]= t1[4];
	temp1[4]= t1[5];

	temp2[0]= t2[0];
	temp2[1]= t2[1];
	temp2[2]= t2[3];
	temp2[3]= t2[4];
	temp2[4]= t2[5];

	T1 = atoi(temp1);
	//printf("T1 = %d \n", T1);
	T2 = atoi(temp2);
	//printf("temp2 = %s T2 = %d \n", temp2,T2);
	int ret_val = 0;
	

	if(T1 > T2){
		ret_val = 1;
	}
	char c;
	//printf("ret_val = %d \n", ret_val);
	//scanf("%c", &c);
	return ret_val;
}

int compare_string(char* src, char* search){

    int l, i, j;

    for (l = 0; search[l] != '\0'; l++);

    for (i = 0, j = 0; src[i] != '\0' && search[j] != '\0'; i++)
    {
        if (src[i] == search[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }


    if (j == l){

    	//printf("entered to return to found is 1\n");
    	return 1;

    } else {

    	//printf("entered to return to found is 0\n");
    	return 0;
    }
    //return j == 1 ? 1 : 0;

}