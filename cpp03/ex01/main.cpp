#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap	frag_trap;
	FragTrap	R2D2("R2D2");
	FragTrap	test("BMO");
	FragTrap	BMO(test);
	FragTrap	test2("C-3PO");
	FragTrap	C_3PO = test2;

	frag_trap.rangeAttack("Blue bird");
	frag_trap.meleeAttack("Handsome Jack");
	frag_trap.takeDamage(42);
	frag_trap.takeDamage(1);
	frag_trap.beRepaired(42);
	frag_trap.takeDamage(200);
	for (int i=0; i < 5; i++) {
		BMO.vaulthunter_dot_exe("Jake the Dog");
		C_3PO.vaulthunter_dot_exe("Jar Jar Binks");
		R2D2.vaulthunter_dot_exe("Yoda");
	}

	ScavTrap	scav_trap("Happy");
	for (int i=0; i < 5; i++)
		scav_trap.challengeNewcomer("Jojo");
	return 0;
}
