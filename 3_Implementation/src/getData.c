#include "trainsys.h"

void getTrainData(){

	FILE * filehandle;
    char lyne[200];

      char *item;
      train_count = 0;
      int k;

    train *temp; 
	filehandle = fopen("data/Train_db.txt","r");
    //printf("FILE OPENED");

	while (fgets(lyne,200,filehandle)) {
                //printf("%s\n",lyne);

                temp = (train*) calloc(1, sizeof(train));

                item = strtok(lyne,",");
                temp->sl_no = atof(item);
            //temp->sl no   
                item = strtok(NULL,",");
                temp->train_number = atof(item);

                item = strtok(NULL,",");
                strcpy(temp->train_name,item);

                item = strtok(NULL,",");
                strcpy(temp->source,item);

                item = strtok(NULL,",");
                //printf("%s\n",item);
                strcpy(temp->destination, item);

                item = strtok(NULL,",");
                strcpy(temp->arr_time,item);
                temp->arr_time[5] = '\0';

                item = strtok(NULL,",");
                strcpy(temp->dept_time,item);
                temp->dept_time[5] = '\0';

                train_data[train_count]= temp;

                train_count++;
                //printf("RECORD COUNT %d", train_count);
    }
                
    train_data[train_count] = '\0';
    fclose(filehandle);
    

    for (int k=0; k<train_count; k++) {
        //t_array[k]= &train_data[k];
        t_array[k]= train_data[k];
    }        

        

       
}
        