#ifndef FWOOSH_H
#define FWOOSH_H

#include "ASpell.hpp" 

class ASpell;

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		~Fwoosh(void);

		ASpell*	clone() const;
};

#endif