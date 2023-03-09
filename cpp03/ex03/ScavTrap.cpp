

#include "ScavTrap.hpp"

//default constructor function
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_name = "default";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

//Parameterized contructor to initialize name
ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap Name Constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

//copy constructor function for ScavTrap class
/*used to  initialize the data members of the class using another object of the same class
copies the values of the data variables of one object of a class to the data member 
of another object of the same class*/
ScavTrap::ScavTrap(const ScavTrap &scav)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scav;
}

//copy assignment operator function for ScavTrap class
/*used to copy values from one object to another already existing object
replaces the contents of existing objects*/
ScavTrap	&ScavTrap::operator=(const ScavTrap &scav)
{
	this->_name = scav._name;
	this->_hp = scav._hp;
	this->_ep = scav._ep;
	this->_ad = scav._ad;
	return (*this);
}

//destructor function for ScavTrap class
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

//prints status for all protected members
void ScavTrap::status(void) const 
{
  std::cout << "Name:" << this->_name << " HP:" << this->_hp 
  << " EP:" << this->_ep << " ATT:" << this->_ad << std::endl;
}

/*check for sufficient ep to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done*/
void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp == 0)
	{
		std::cout << "Scavtrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		std::cout << "Scavtrap " << this->_name << " attacks " << target
			<< " causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "Scavtrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Scavtrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}

/*check for sufficient ep to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done
target is set to ClapTrap class object*/
void	ScavTrap::attack(ClapTrap &target)
{
	if (this->_hp == 0)
	{
		std::cout << "Scavtrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		if (target.getHp() == 0)
		{
			std::cout << "Scavtrap " << this->_name << " tried to attack but " << target.getName() << " is already dead!" << std::endl;
			return ;
		}
		std::cout << "Scavtrap " << this->_name << " attacks " << target.getName()
			<< " causing " << this->_ad << " points of damage!" << std::endl;
        target.takeDamage(this->_ad);
		this->_ep--;
		std::cout << "Scavtrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Scavtrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}

/*check for sufficient ep to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done*/
void	ScavTrap::guardGate()
{
	if (this->_hp == 0)
	{
		std::cout << "Scavtrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		std::cout << "Scavtrap " << this->_name << " is now in gate keeper mode! " << std::endl;
		this->_ep--;
		std::cout << "Scavtrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Scavtrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}
