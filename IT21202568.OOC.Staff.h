class Staff
{
private:
int empNo;
char empName[30];
string empAddress;
int empContactNo;
public:
Staff(int no, const char name[], string address, int cNo);
void displayStaffDetails();
int getEmpNo();
char* getEmpName();
void updateStaffDetails();
~Staff();
};