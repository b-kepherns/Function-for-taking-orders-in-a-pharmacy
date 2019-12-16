#pragma once
#include <string>
class medicineType
{
public:

	void take_order(); //take order
	
};
medicineType::medicineType()
{
}
struct node //constructing a node
{
	int receipt_number;
	std::string customername;
	std::string date;
	int quantity[10];
	std::string type = { "OTC" };
	int x, menu2[10];
	double amount[10];
	std::string medicinename[10]= { "Probiotics","Vitamin C(500mg)","Acid Free C(500mg)","Women'S Multivate","Marino Tablet","Maxi Cal Tablet",
	"Amino Zinc Tablet","Burnex","Fabuloss 5","Royal Propollen" };
	double medicine[10] = { 2.00,3.00,1.00,4.00,1.00,5.00,7.00,4.00,3.00,5.00 };
	double total;

	node* prev;
	node* next;
	node* link;


}; int  *q, * temp; //pointer declaration
node* start_ptr = NULL;
node* head = NULL;
node* last = NULL;
