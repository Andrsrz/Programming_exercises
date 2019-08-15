/*
 * C++ How To Program - 3.13 : Exercise Invoice Class
*/

#include <iostream>
#include <string>
#include "Invoice.h"

// Avoid magic numbers :
const int ID_1 = 0;
const int ID_2 = 1;
const int ID_3 = 2;
const int QUANTITY_1 = 1;
const int QUANTITY_2 = 5;
const int QUANTITY_3 = 7;
const int PRICE_1 = 5;
const int PRICE_2 = 6;
const int PRICE_3 = 3;

void printProductInfo(Invoice product);
void printProductInvoice(Invoice product);

int main(){
	// Create invoice objects
	Invoice product1(ID_1, "Hammer", QUANTITY_1, PRICE_1);
	Invoice product2(ID_2, "Screwdriver", QUANTITY_2, PRICE_2);
	Invoice product3(ID_3, "Screw", QUANTITY_3, PRICE_3);

	// Using invoice methods
	printProductInvoice(product1);
	printProductInvoice(product2);
	printProductInvoice(product3);
	
	return 0;
}

void printProductInfo(Invoice product){
	std::cout << "ID -\t\t\t" << product.getItemId() << std::endl;
	std::cout << "Description -\t\t" << product.getItemDescription() << std::endl;
}

void printProductInvoice(Invoice product){
	std::cout << "Invoice -" << std::endl;
	printProductInfo(product);
	std::cout << "Quantity -\t\t" << product.getItemQuantity() << std::endl;
	std::cout << "Price per unit -\t" << product.getItemPrice() << std::endl;
	std::cout << "Total price -\t\t" << product.getInvoiceAmount(product.getItemQuantity(), product.getItemPrice()) << std::endl;
}
