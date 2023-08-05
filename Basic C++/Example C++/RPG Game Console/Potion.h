#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item
{
private:
	int healthRestore;

public:
	Potion(const std::string& name, int healthRestore);

	virtual void use(Character& target) const override;
};

#endif // !POTION_H
