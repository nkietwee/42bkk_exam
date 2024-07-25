#ifndef DUMMY_H
#define DUMMY_H

#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
	public:
		Dummy(void);
		~Dummy(void);

		ATarget*	clone() const;
};

#endif