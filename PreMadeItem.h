#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.cpp"

class PreMadeItem : public IceCreamItem
{
   public:
     PreMadeItem(std::string name, std::string size);
     virtual ~PreMadeItem();
   protected:
     std::string name;
};

#endif
