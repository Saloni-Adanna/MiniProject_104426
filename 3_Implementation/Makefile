SRC = src/getData.c src/display.c src/compare.c src/search_sort.c src/interactive_menu.c main.c 


INC = -Iinc\


PROJECT_NAME = trainsys.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run :$(PROJECT_NAME)
		./${PROJECT_NAME}

clean: 
		rm -rf $(PROJECT_NAME) documentation/html 