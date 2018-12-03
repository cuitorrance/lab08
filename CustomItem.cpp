#include "CustomItem.h"
#include <math.h>
#include <sstream>
#include <iomanip>

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

  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << getPrice();
  std::string ans = "Custom Size: " + size + "\n"
    + "Toppings:" + "\n";

  for (std::map<std::string, int>::iterator it = toppings.begin(); it!=toppings.end(); it++)
    {
      ans += it->first + ": " + std::to_string(it->second) + " oz" + "\n";
    }
    
  ans += "Price: $" +stream.str() + "\n";

  return ans;
}

void CustomItem::addTopping(std::string topping){
  
  //  for (std::map<std::string, int>::iterator it = toppings.begin();it !=toppings.end() ;it++)
  //{
  //  if ( it->first == topping)
  //	{
  //	  it->second++;
  //	}
  //  else
  //	{
  std::map<std::string, int>::iterator it =toppings.find(topping);
  if (it != toppings.end())
    {
      toppings[topping]++;
      price += 0.4;
    }
  else
    {
      toppings[topping] =1;
      price += 0.4;
    }
	   //	}
	   //}
}
double CustomItem::getPrice(){

  return price;
}
