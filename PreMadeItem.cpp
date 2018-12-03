#include "PreMadeItem.h"
#include <iomanip>
#include <cmath>

PreMadeItem::PreMadeItem(std::string name, std::string size): IceCreamItem::IceCreamItem(size){
  this->name = name;
  this->size = size;
   if (size == "small")
    {
      price = 4.00;
    }
  else if (size == "medium")
    {
      price = 6.00;
    }
  else if ( size == "large")
    {
      price = 7.50;
    }
}
PreMadeItem::~PreMadeItem(){
}
std::string PreMadeItem:: composeItem(){
  std::string ans = "Pre-made Size: " + size + "\n"
             + "Pre-made Item: " + name + "\n"
             + "Price: $" + std::to_string(getPrice()) + "\n";
  return ans;
}

double PreMadeItem::getPrice(){
  return std::floor((price*100)+0.5) /100;
}
