int main()
{
	NormalUser* nUser;
	nUser = new NormalUser("Vishwa Fernando", B12312); //Create NormalUser object
	nUser->setDetails("23/A Colombo", 0778899562, "Vishwa@gmail.com"); //set details to attributes
	nUser->displayUserDetails(); //display normal user details

	GoogleUser* gUser;
	gUser = new GoogleUser("Kamal Perera", B32156); //Create StudentUser object

	gUser->setuserEmail("Kamal@gmail.com"); // set email
	gUser->displayUserDetails(crs); //display student user details

	Payment* pay;
	pay = new Payment("Card", "Nimal Rajapaksha"); //Create Payment object

	Orders* odr;
	odr = new Orders(99456, 1); //Create Orders object
	odr->calcBill();
	odr->displayBill(pay); //display bill

	bidproduct* bidproduct;
	bidproduct = new bid product("Emergency Light", 8, 25000, odr); //Create Item object

	bidproduct->bidproductQty(8);
	Reports* rep;
	rep = new Reports(64563); //Create Reports object
	rep->genarateFinancialReport(odr);
	rep->genarateStockReport(itm);
	rep->displayFinancialReport(); //display financial report
	rep->displayStockReport(); //display stock report

	Staff* stf;
	stf = new Staff(S00236, "Haritha Pabodha", "845 Jaffna", 077762259); //Create Staff object

	Deliveries* del;
	del = new Deliveries(23564); //Create Deliveries object
	del->displayDeliveryDetails(odr, stf); //display delivery details

	Comment cbc(C54698, "comment123@gmail.com", "comment1"); //Create Feedback object

	fbc.displayComment(); //display feedback
	//delete dynamic variables
	delete nUser, gUser, crs, pay, odr, bidproduct, rep, stf, del;
}
