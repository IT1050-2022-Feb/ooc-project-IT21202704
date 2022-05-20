class reports
{
private:
	int reportNo;

public:
	Reports(int rNo);
	void genarateFinancialReport(Orders* o);
	void genarateStockReport(Item* i);
	void displayFinancialReport();
	void displayStockReport();
	~Reports();
};
