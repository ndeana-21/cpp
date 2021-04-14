#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int main()
{
	ClapTrap	clap_trap;
	ClapTrap	R2D2("R2D2");
	ClapTrap	test("BMO");
	ClapTrap	BMO(test);
	ClapTrap	test2("C-3PO");
	ClapTrap	C_3PO = test2;

	std::cout << std::endl;
	FragTrap	frag_trap("Attacker");
	frag_trap.rangeAttack("Blue bird");
	frag_trap.meleeAttack("Handsome Jack");
	frag_trap.takeDamage(42);
	frag_trap.takeDamage(1);
	frag_trap.beRepaired(42);
	frag_trap.takeDamage(200);
	for (int i=0; i < 5; i++)
		frag_trap.vaulthunter_dot_exe("Jake the Dog");

	std::cout << std::endl;
	ScavTrap	scav_trap("Happy");
	for (int i=0; i < 5; i++)
		scav_trap.challengeNewcomer("Jojo");
	
	std::cout << std::endl;
	NinjaTrap	ninja_trap("Naruto");
	ninja_trap.ninjaShoebox(clap_trap);
	ninja_trap.ninjaShoebox(scav_trap);
	ninja_trap.ninjaShoebox(frag_trap);
	ninja_trap.ninjaShoebox(ninja_trap);

	std::cout << std::endl;
	SuperTrap	super_trap("Multi tool");
	std::cout << "Name = " << super_trap.getName() << std::endl;
	std::cout << "Name = " << super_trap.getLevel() << std::endl;
	std::cout << "Hit point = " << super_trap.getHitPoints() << std::endl;
	std::cout << "Max hit point = " << super_trap.getMaxHitPoints() << std::endl;
	std::cout << "Energy point = " << super_trap.getEnergyPoints() << std::endl;
	std::cout << "Max energy point = " << super_trap.getMaxEnergyPoints() << std::endl;
	std::cout << "Melee AttackDamage = " << super_trap.getMAttackDamage() << std::endl;
	std::cout << "Range AttackDamage = " << super_trap.getRAttackDamage() << std::endl;
	std::cout << "Armor damage reduction = " << super_trap.getArmorDamageReduction() << std::endl;
	super_trap.rangeAttack("Barny bear");
	super_trap.meleeAttack("Fluffy ikea shark");
	std::cout << std::endl;

	return 0;
}
