class Deliveries
{
private:
	int deliveryNo;
public:
	Deliveries(int no);
	void updateDetails();
	void displayDeliveryDetails(Orders* o, Staff* s);
	~Deliveries();
};

