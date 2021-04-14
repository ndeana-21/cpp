#pragma once

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
		int					_count;
		const static int	_maxCount = 50;
		ISpaceMarine		*_units[_maxCount];

		void freeSquad(void);
		int isInSquard(ISpaceMarine *sm);

	public:
		Squad(void);
		Squad(Squad const & s);
		~Squad(void);

		Squad & operator=(Squad const & s);

		virtual ISpaceMarine *getUnit(int i) const;
		virtual int push(ISpaceMarine *sm);
		virtual int getCount(void) const;
};