//CustomItem.h

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include "IceCreamItem.cpp"
#include <string>

class CustomItem : public IceCreamItem
{
 public:
  CustomItem(std::string size);
  virtual ~CustomItem();
  void addTopping(std::string topping);
};

#endif
