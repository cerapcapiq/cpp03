

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

// initialize name
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name Constructor called" << _name << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

//copy constructor function for ClapTrap class
/*used to  initialize the data members of the class using another object of the same class
copies the values of the data variables of one object of a class to the data member 
of another object of the same class*/
ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}

//copy assignment operator function for ClapTrap class
/*used to copy values from one object to another already existing object
replaces the contents of existing objects*/
ClapTrap	&ClapTrap::operator=(const ClapTrap &clap)
{
	this->_name = clap._name;
	this->_hit_points = clap._hit_points;
	this->_energy_points = clap._energy_points;
	this->_attack_damage = clap._attack_damage;
	return *this;
}

//destructor function for ClapTrap class
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*check for sufficient eP to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done*/

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
	{
		std::cout << "Claptrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_energy_points > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target
			<< " causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
		std::cout << "Claptrap " << this->_name << " ep is now "
			<< this->_energy_points << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}

/*checks if damage is more than current hp
Set hp to 0 if yes, else reduce hp by value*/
void	ClapTrap::takeDamage(unsigned int value)
{
	if (this->_hit_points == 0)
	{
		std::cout << "Claptrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (value > this->_hit_points)
		this->_hit_points = 0;
	else
		this->_hit_points -= value;
	std::cout << "Claptrap " << this->_name << " has taken " << value
		<< " points of damage!" << std::endl;
	std::cout << "Claptrap " << this->_name << " hp is now "
		<< this->_hit_points << std::endl;
	if (this->_hit_points == 0)
	{
		std::cout << "Claptrap " << this->_name << " has died!" << std::endl;
		return ;
	}
}

/*checks if there is enough ep points to perform an action
increases hp by 1 if ep is sufficient*/
void	ClapTrap::beRepaired(unsigned int value)
{
	if (this->_hit_points == 0)
	{
		std::cout << "Claptrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_energy_points > 0)
	{
		std::cout << "Claptrap " << this->_name << " heals for " << value
			<< " health points" << std::endl;
		this->_hit_points += value;
		std::cout << "Claptrap " << this->_name << " hp is now "
			<< this->_hit_points << std::endl;
		this->_energy_points--;
		std::cout << "Claptrap " << this->_name << " ep is now "
			<< this->_energy_points << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << "has not enough energy to perform this action!" << std::endl;
}
