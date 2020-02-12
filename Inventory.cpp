#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;


///////////////CONSTRUCTOR////////////////////////////


Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}


//////////////////SET FUNCTIONS///////////////////////

/** Decrement current inventory when an item is sold.
    @post  The inventory is decremented. */
void Inventory::sell()
{
  m_in_stock--;
}


//////////////////////OVERLOADS///////////////

//** Displays the item name and cost. */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}