class Payment
{
char cardType[2];
char cardHolder[50];
public:
Payment(const char cardtype[], const char cardholder[]);
void updateDetails(const char cardtype[], const char cardholder[]);
char* getDetails();
void displayDetails();
~Payment();
};
