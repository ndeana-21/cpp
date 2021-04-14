#pragma once

#include <string>

class Enemy {
	public:
		Enemy(int hp, const std::string& type);
		Enemy(const Enemy& other);
		virtual ~Enemy();
		Enemy& operator=(const Enemy& other);

		const std::string&	getType() const;
		int					getHP() const;
		
		virtual void		takeDamage(int damage);
	protected:
		int					_hP;
		std::string			_type;
	private:
		Enemy();
};