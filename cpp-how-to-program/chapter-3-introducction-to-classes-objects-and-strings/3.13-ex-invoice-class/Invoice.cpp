/*
 * C++ How To Program - 3.13 : Exercise Invoice Class
*/

#include <string>
#include "Invoice.h"

// Constructor
Invoice::Invoice(int iId, std::string iDescription, int iQuantity, int iPrice){
	setItemId(iId);
	setItemDescription(iDescription);
	setItemQuantity(iQuantity);
	setItemPrice(iPrice);
}

void Invoice::setItemId(int iId){
	itemId = iId;
}

int Invoice::getItemId(){
	return itemId;
}

void Invoice::setItemDescription(std::string iDescription){
	itemDescription = iDescription;
}

std::string Invoice::getItemDescription(){
	return itemDescription;
}

void Invoice::setItemQuantity(int iQuantity){
	if(iQuantity < 0){
		itemQuantity = 0;
	}else if(iQuantity >= 0){
		itemQuantity = iQuantity;
	}
}

int Invoice::getItemQuantity(){
	return itemQuantity;
}

void Invoice::setItemPrice(int iPrice){
	if(iPrice < 0){
		itemPrice = 0;
	}else if(iPrice >= 0){
		itemPrice = iPrice;
	}
}

int Invoice::getItemPrice(){
	return itemPrice;
}

int Invoice::getInvoiceAmount(int iQuantity, int iPrice){
	int invoice = iQuantity * iPrice;
	return invoice;
}
