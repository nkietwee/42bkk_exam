#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const& title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string const&	Warlock::getName(void) const
{
	return (this->_name);
}

std::string const&	Warlock::getTitle(void) const
{
	return (this->_title);
}

void		Warlock::setTitle(std::string const& title)
{
	this->_title = title;
}

void 		Warlock::introduce() const {
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void		Warlock::learnSpell(ASpell* r)
{
	if (r != NULL)
		this->_spellbook[r->getName()] = r->clone();
}

void		Warlock::forgetSpell(std::string const &spellName)
{
	if (this->_spellbook.find(spellName) != this->_spellbook.end())
		this->_spellbook.erase(spellName);
}

void		Warlock::launchSpell(std::string const &spellName, ATarget const& r)
{
	if (this->_spellbook.find(spellName) != this->_spellbook.end())
	{

		ASpell	*s = this->_spellbook[spellName];
		if (s != NULL)
			s->launch(r);
	}

}