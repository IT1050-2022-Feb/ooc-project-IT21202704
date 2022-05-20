class Orders
{
private:
int orderNo;
int orderQty;
double amount;
double total;
public:
Orders(int oNo, int qty);
double calcBill();
void displayBill(Payment* p);
double getTotal();
int getOrderNo();
~Orders();
};