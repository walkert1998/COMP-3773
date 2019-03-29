#include <iostream>
#include <string>
using namespace std;

#include "Product.h"
#include "View.h"
#include "CustomerView.h"
#include "ManagerView.h"
#include "Layout.h"
#include "WebLayout.h"
#include "ScreenLayout.h"

int main()
{
	Product products[] =
	{
		Product("BL023", "Bell", 120),
		Product("BK015", "Book", 30),
		Product("CN802", "Candle", 400),
		Product("CL041", "Cauldron", 20),
		Product("CY100", "Cyclotron", 3),
	};
	int len = sizeof(products) / sizeof(Product);

	View * cwv = new CustomerView(new WebLayout());
	View * csv = new CustomerView(new ScreenLayout());
	View * mwv = new ManagerView(new WebLayout());
	View * msv = new ManagerView(new ScreenLayout());

	cout << "\nCustomer Web View"
		<< "\n-----------------\n\n";
	cwv->add(products, len);
	cwv->render();
	cout << "\n\n";

	cout << "\nCustomer Screen View"
		<< "\n--------------------\n\n";
	csv->add(products, len);
	csv->render();
	cout << "\n\n";

	cout << "\nManager Web View"
		<< "\n----------------\n\n";
	mwv->add(products, len);
	mwv->render();
	cout << "\n\n";

	cout << "\nManager Screen View"
		<< "\n-------------------\n\n";
	msv->add(products, len);
	msv->render();
	cout << "\n\n";
}
