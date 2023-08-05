#include "Potion.h"

Potion::Potion(const std::string& name, int healthRestore)
	: Item(name), healthRestore(healthRestore) {}

void Potion::use(Character& target) const
{
	target.takeDamage(-healthRestore);
}