#include "CustomItem.h"
#include <math.h>

CustomItem::CustomItem(std::string size) : IceCreamItem::IceCreamItem(size){
  this->size = size;
  if (size == "small")
    {
      price = 3.00;
    }
  else if (size == "medium")
    {
      price = 5.00;
    }
  else if ( size == "large")
    {
      price = 6.50;
    }
}

CustomItem::~CustomItem(){
}

std::string CustomItem::composeItem(){
  std::string ans = "Custom Size: " + size + "\n"
    + "Toppings:" + "\n"
    + "Price: $" +std::to_string(getPrice()) + "\n";

  return ans;
}
double CustomItem::getPrice(){
  return (round(price*100))/100;
}
void CustomItem::addTopping(std::string topping){
  
}
