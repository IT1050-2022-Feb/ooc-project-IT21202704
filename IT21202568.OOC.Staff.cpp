Staff::Staff(int no, const char name[], string address, int cNo)
{
empNo = no;
strcpy_s(empName, name);
empAddress = address;
empContactNo = cNo;
}
void Staff::displayStaffDetails()
{
}
int Staff::getEmpNo()
{
}
char* Staff::getEmpName()
{
}
void Staff::updateStaffDetails()
{
}
Staff::~Staff()
{
}