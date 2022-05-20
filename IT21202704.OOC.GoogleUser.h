class GoogleUser
{
private:
	int googleID;
	string googleEmail;

public:
	GoogleUser(const char B_ID, int B_CNumber);
	void setB_Email(string email);
	string getB_Email();
	void dispalyBuyerDetails();
	void updateBuyerDetails();
};
