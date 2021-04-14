#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ClapTrap	clap_trap;
	ClapTrap	R2D2("R2D2");
	ClapTrap	test("BMO");
	ClapTrap	BMO(test);
	ClapTrap	test2("C-3PO");
	ClapTrap	C_3PO = test2;

	clap_trap.rangeAttack("Blue bird");
	clap_trap.meleeAttack("Handsome Jack");
	clap_trap.takeDamage(42);
	clap_trap.takeDamage(1);
	clap_trap.beRepaired(42);
	clap_trap.takeDamage(200);

	ScavTrap	scav_trap("Happy");
	for (int i=0; i < 5; i++)
		scav_trap.challengeNewcomer("Jojo");

	FragTrap	frag_trap("Attacker");
	for (int i=0; i < 5; i++)
		frag_trap.vaulthunter_dot_exe("Jake the Dog");
	
	NinjaTrap	ninja_trap("Naruto");
	ninja_trap.ninjaShoebox(clap_trap);
	ninja_trap.ninjaShoebox(scav_trap);
	ninja_trap.ninjaShoebox(frag_trap);
	ninja_trap.ninjaShoebox(ninja_trap);
	return 0;
}
