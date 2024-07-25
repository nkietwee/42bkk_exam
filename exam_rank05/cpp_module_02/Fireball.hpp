#ifndef FIREBALL_H
#define FIREBALL_H

#include "ASpell.hpp" 

class ASpell;

class Fireball : public ASpell
{
	public:
		Fireball(void);
		~Fireball(void);

		ASpell*	clone() const;
};

#endif