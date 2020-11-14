//#include "unity.h"
#include "trainsys.h"

/**
* Required by the unity test framework 
*/
void setUp(){}
/**
* Required by the unity test framework 
*/
void tearDown(){}

void test_listing(void){

	TEST_ASSERT_EQUAL_CHAR( 'M', train_listing());
}

void test_search(void){

	TEST_ASSERT_EQUAL_CHAR( 'M', train_search());
}


int test_main(void){

	/**
	* Initiate the Unity Test Framework 
	*/
	UNITY_BEGIN();

	/** 
	* Run Test functions 
	*/
	RUN_TEST(test_listing);
	RUN_TEST(test_search);

	/**
	* Close the Unity Test Framework 
	*/
	return UNITY_END();
}



