/**
* @file trainsys.h
*
*/

#ifndef __TRAINSYS_H__
#define __TRAINSYS_H__

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include "unity.h"
#include "test_trainlisting.h"


//#define TRAIN_SORT '1'

typedef struct Train{
	int sl_no;
	int train_number;
	char train_name[30];
	char source[30];
	char destination[30];
	char arr_time[10];
	char dept_time[10];
}train;                       ///< structure containing all train information fields

train *train_data[200];       ///< a pointer to a structure
int train_count ;			  ///< The number of Data available
train *t_array[200];			  ///< An array of pointer structure.

/**
* Displays the Menu's for the interactions
*/
void show_menu();

/**
* Gets the information from the plain text and stores
*/
void getTrainData();

/**
* Displays the Train information as per the Interactive menu
* @param[in] train data for train info and iter is the number of records to display 
*/
void display_train_info(train** data, int iter);

/**
* Sets the positon of the cursor on the window. Intial value will be(0,0)
* @param[in] col, row takes the value of x and y co-ordinates 
*/
void gotoxy(short col, short row);

/**
* Displays the headings in the form of table
*/
void headings();

/** 
* Trains are searched based on Train name, source and destination.   
*/
void search();

/**
* Trains are sorted based on Train name, source and destination   
* @param[in] sort_type to switch between type of sorting
*/
void train_sort(int sort_type);

/**
* It is an Interactive menu.
* Trains can be found alphabetically.   
* @return M for Main Menu
*/
char train_listing();

/**
* It is an Interactive menu. 
* Trains can be searched based on Train name, source and destination.   
* @return M for Main Menu
*/
char train_search();

/**
* Compares the train parameters  
* @param[in] t_array1, t_array2, num, takes two train parameters with num to switch case.
* @return compared value
*/
int compare_train(train *t_array1,train *t_array2, int num);

/**
* Compares the two train timings  
* @param[in] t1,t2 takes two train timings.
* @return 1 for t1>t2
* @note returns 0 for other than the condition
*/
int compare_time(char* t1, char* t2);

/**
* Compares the given input by the user to that of the train parameters  
* @param[in] src, search takes two train name/source/destination in the form of string
* @return 1 if the record is found
* @note Rerurns 0 for no record
*/
int compare_string(char* src, char* search);


#endif /*#ifndef __TRANSYS_H__*/