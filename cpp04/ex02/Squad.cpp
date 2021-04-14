#include "iostream"
#include "Squad.hpp"

Squad::Squad(void)
{
	_count = 0;
	return ;
}
Squad::Squad(Squad const & s) {
	_count = 0;
	*this = s;
}
Squad::~Squad(void) {
	freeSquad();
}
Squad & Squad::operator=(Squad const & s) {
	freeSquad();
	_count = s.getCount();
	for (int i = 0; i < _count; i++)
		this->_units[i] = s.getUnit(i)->clone();
	return (*this);
}

ISpaceMarine *Squad::getUnit(int i) const {
	if (i < _count && i >= 0)
		return (this->_units[i]);
	return (NULL);
}

void Squad::freeSquad(void) {
	for (int i = 0; i < _count; i++)
		delete _units[i];
	_count = 0;
}
int Squad::getCount(void) const {
	return (this->_count);
}

int Squad::push(ISpaceMarine *sm) {
	int iInSquad = isInSquard(sm);
	if (iInSquad >= 0)
		return (iInSquad);
	if (sm != NULL && _count < _maxCount)
	{
		_units[_count] = sm;
		return (_count++);
	}
	return (-1);
}

int Squad::isInSquard(ISpaceMarine *sm) {
	for (int i = 0; i < _count; i++)
	{
		if (_units[i] == sm)
			return (i);
	}
	return (-1);
}