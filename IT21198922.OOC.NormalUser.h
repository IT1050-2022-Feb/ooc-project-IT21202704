class NormalUser
{
private:
	char name[50];
	int regNo;
	string address;
	int contactNo;
	string email;

public:
	NormalUser(const char uName[], int uRegNo);
	void setDetails(string add, int cNo, string uEmail);
	int getDetails();
	virtual void displayUserDetails();
	virtual void updateUserDetails();
	~NormalUser();
};