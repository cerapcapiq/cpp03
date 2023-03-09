

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	FragTrap mob("Mob");
	mob.status();
	ScavTrap bob("Bobby");
	bob.status();
	mob.attack("Reigen");
	bob.attack("Reigen");
	mob.takeDamage(15);
	mob.beRepaired(10);
	bob.takeDamage(35);
	bob.beRepaired(20);
	mob.highFivesGuys();
	bob.guardGate();
	mob.status();
	bob.status();
	FragTrap dimple(mob);
	dimple.set_name("Dimple");
	dimple.status();
	mob.status();
	dimple.attack("Reigen");
	dimple.takeDamage(20);
	dimple.beRepaired(15);
	dimple.highFivesGuys();
	dimple.status();
	FragTrap bom;
	//ClapTrap vom = ClapTrap("Vom");
	bom = dimple;
	bom.set_name("Bom");
	dimple.status();
	bom.status();
	bom.attack("vom");
	//vom.status();
	bom.takeDamage(40);
	bom.beRepaired(20);
	bom.takeDamage(20);
	bom.attack("vom");
	//vom.status();
	bom.takeDamage(100);
	bom.beRepaired(30);
	bom.highFivesGuys();
	mob.status();
	dimple.status();
	bom.status();
	//vom.status();
	return (0);
}