#include "CustomItem.h"

CustomItem::CustomItem(std::string size){
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
  string ans = "Custom Size: " + size + "\n"
    + "Toppings:" + "\n";
}

double CustomItem::getPrice(){
  return price;
}

void CustomItem::addTopping(std::string topping){
}
