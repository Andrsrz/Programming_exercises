/*
 * C++ How To Program - 3.13 : Exercise Invoice Class
*/

#include <string>

class Invoice{
public:
	Invoice(int, std::string, int, int);
	void setItemId(int);
	int getItemId();
	void setItemDescription(std::string);
	std::string getItemDescription();
	void setItemQuantity(int);
	int getItemQuantity();
	void setItemPrice(int);
	int getItemPrice();
	int getInvoiceAmount(int, std::string, int, int);
private:
	int itemId;
	std::string itemDescription;
	int itemQuantity;
	int itemPrice;
};
