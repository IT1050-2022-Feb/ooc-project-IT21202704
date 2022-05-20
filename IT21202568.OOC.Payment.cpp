Payment::Payment(const char cardtype[], const char cardholder[])
{
strcpy_s(cardType, cardtype);
strcpy_s(cardHolder, cardholder);
}
void Payment::updateDetails(const char cardtype[], const char cardholder[])
{
}
char* Payment::getDetails()
{
}
void Payment::displayDetails()
{
}
Payment::~Payment()
{
}