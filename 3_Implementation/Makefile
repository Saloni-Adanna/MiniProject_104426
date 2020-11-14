SRC = unity/unity.c src/getData.c src/display.c src/compare.c src/search_sort.c src/interactive_menu.c test/test_trainlisting.c  main.c 

INC = -Iinc\
-Iunity\
-Itest



PROJECT_NAME = trainsys.out


$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run :$(PROJECT_NAME)
		./${PROJECT_NAME}
		
doc: make -C documentation


clean: 
		rm -rf $(PROJECT_NAME) documentation/html

