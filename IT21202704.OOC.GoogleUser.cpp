GoogleUser::GoogleUser(const char B_FName[], int B_ID, int B_CNumber);
{
	BuyerID = B_ID;
	strcpy_s(BuyerFirstName, B_FName);
	strcpy_s(BuyerContactNumber, B_CNumber);
}

void GooleUser::setstdemail(string email)
{
}

string GoogleUser::getStdEmail()
{
}

void GoogleUser::displayUserDetails()
{
}

void GoogleUser::updateUserDetails()
{
}
