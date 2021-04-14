#include "FragTrap.hpp"

int main()
{
	FragTrap NONAME;
	FragTrap R2D2("R2D2");
	FragTrap test("BMO");
	FragTrap BMO(test);
	FragTrap test2("C-3PO");
	FragTrap C_3PO = test2;

	NONAME.rangeAttack("Blue bird");
	NONAME.meleeAttack("Handsome Jack");
	NONAME.takeDamage(42);
	NONAME.takeDamage(1);
	NONAME.beRepaired(42);
	NONAME.takeDamage(200);
	for (int i=0; i < 5; i++) {
		BMO.vaulthunter_dot_exe("Jake the Dog");
		C_3PO.vaulthunter_dot_exe("Jar Jar Binks");
		R2D2.vaulthunter_dot_exe("Yoda");
	}
	return 0;
}
