class Product
{
private:
	char ProductTitel[40];
	int productID;
	int productPrice;
	char productQuantity;

public:
	product(char P_Titel[], int P_ID, int P_Price, char P_Qty);
	void setProductQty(int p_Qty);
	int getProductQty();
	void displayproductDetails();
	void updateProductDetails();

};	