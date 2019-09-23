/*
 * r/dailyprogrammer - Challenge 4 Intermediate : Terminal calculator
 * Description in txt file
*/

/*
TODO :
	parse through input (string)
	make operations
	return answer
*/

#include <iostream>
#include <string>

int main(){
	bool menu = true;

	while(menu){
		std::string option = "";
		std::cout << "Welcome to Terminal Calculator!\n"
			<< "Enter any operation ( If you want to quit type : quit ) : "
			<< std::endl;
		std::getline(std::cin, option);

		if(option == "quit"){
			menu = false;
			break;
		}else{
			// Do operation
		}
	}

	return 0;
}
