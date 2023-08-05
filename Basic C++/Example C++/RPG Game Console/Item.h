#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "Character.h"

class Item
{
protected:
	std::string name;

public:
	Item(const std::string& name);
	virtual ~Item();

	virtual void use(Character& target) const = 0;
};
#endif // !ITEM_H
