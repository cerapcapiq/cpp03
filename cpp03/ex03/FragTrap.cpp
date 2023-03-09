

#include "FragTrap.hpp"

//default constructor function
FragTrap::FragTrap()
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_name = "default";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

//Parameterized contructor to initialize name
FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap Name Constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

//copy constructor function for FragTrap class
/*used to  initialize the data members of the class using another object of the same class
copies the values of the data variables of one object of a class to the data member 
of another object of the same class*/
FragTrap::FragTrap(const FragTrap &frag)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = frag;
}

//copy assignment operator function for FragTrap class
/*used to copy values from one object to another already existing object
replaces the contents of existing objects*/
FragTrap	&FragTrap::operator=(const FragTrap &frag)
{
	this->_name = frag._name;
	this->_hp = frag._hp;
	this->_ep = frag._ep;
	this->_ad = frag._ad;
	return (*this);
}

//destructor function for FragTrap class
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

//prints status for all protected members
void FragTrap::status() const 
{
  std::cout << "Name:" << this->_name << " HP:" << this->_hp 
  << " EP:" << this->_ep << " ATT:" << this->_ad << std::endl;
}

/*check for sufficient ep to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done*/
void	FragTrap::attack(const std::string &target)
{
	if (this->_hp == 0)
	{
		std::cout << "Fragtrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		std::cout << "Fragtrap " << this->_name << " attacks " << target
			<< " causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "Fragtrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Fragtrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}

/*check for sufficient ep to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done
target is set to ClapTrap class object*/
void	FragTrap::attack(ClapTrap &target)
{
	if (this->_hp == 0)
	{
		std::cout << "Fragtrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		if (target.getHp() == 0)
		{
			std::cout << "Fragtrap " << this->_name << " tried to attack but " << target.getName() << " is already dead!" << std::endl;
			return ;
		}
		std::cout << "Fragtrap " << this->_name << " attacks " << target.getName()
			<< " causing " << this->_ad << " points of damage!" << std::endl;
        target.takeDamage(this->_ad);
		this->_ep--;
		std::cout << "Fragtrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Fragtrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}

/*check for sufficient ep to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done*/
void	FragTrap::highFivesGuys()
{
	if (this->_hp == 0)
	{
		std::cout << "Fragtrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		std::cout << "Fragtrap " << this->_name << " has requested a high five! " << std::endl;
		this->_ep--;
		std::cout << "Fragtrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Fragtrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}