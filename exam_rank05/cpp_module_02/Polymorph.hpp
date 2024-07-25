#ifndef POLYMORPH_H
#define POLYMORPH_H

#include "ASpell.hpp" 

class ASpell;

class Polymorph : public ASpell
{
	public:
		Polymorph(void);
		~Polymorph(void);

		ASpell*	clone() const;
};

#endif