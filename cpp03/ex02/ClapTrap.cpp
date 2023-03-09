

#include "ClapTrap.hpp"

//default constructor function
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = "default";
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 0;
}

//Parameterized contructor to initialize name
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Name Constructor called" << std::endl;
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 0;
}

//copy constructor function for ClapTrap class
/*used to  initialize the data members of the class using another object of the same class
copies the values of the data variables of one object of a class to the data member 
of another object of the same class*/
ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = clap;
}

//copy assignment operator function for ClapTrap class
/*used to copy values from one object to another already existing object
replaces the contents of existing objects*/
ClapTrap	&ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->_name = clap._name;
	this->_hp = clap._hp;
	this->_ep = clap._ep;
	this->_ad = clap._ad;
	return (*this);
}

//destructor function for ClapTrap class
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

//gets _name variable 
const std::string	&ClapTrap::getName(void) const
{
	return (this->_name);
}

//gets current value for _hp
int	ClapTrap::getHp(void) const
{
	return (this->_hp);
}

//sets the name for _name
void	ClapTrap::set_name(std::string const name)
{ 
	this->_name = name; 
}

//gets current value for _ep
int	ClapTrap::getEp(void) const
{
	return (this->_ep);
}

//gets current value for _ad
int	ClapTrap::getAd(void) const
{
	return (this->_ad);
}

//prints status for all private members
void ClapTrap::status(void) const 
{
  std::cout << "Name:" << this->_name << " HP:" << this->_hp 
  << " EP:" << this->_ep << " ATT:" << this->_ad << std::endl;
}

/*check for sufficient eP to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done*/
void	ClapTrap::attack(const std::string &target)
{
	if (this->_hp == 0)
	{
		std::cout << "Claptrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target
			<< " causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "Claptrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}

/*checks if damage is more than current hp
Set hp to 0 if yes, else reduce hp by value*/
void	ClapTrap::takeDamage(unsigned int value)
{
	if (this->_hp == 0)
	{
		std::cout << "Claptrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (value > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= value;
	std::cout << "Claptrap " << this->_name << " has taken " << value
		<< " points of damage!" << std::endl;
	std::cout << "Claptrap " << this->_name << " hp is now "
		<< this->_hp << std::endl;
	if (this->_hp == 0)
	{
		std::cout << "Claptrap " << this->_name << " has died!" << std::endl;
		return ;
	}
}

/*checks if there is enough ep points to perform an action
increases hp by 1 if ep is sufficient*/
void	ClapTrap::beRepaired(unsigned int value)
{
	if (this->_hp == 0)
	{
		std::cout << "Claptrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		std::cout << "Claptrap " << this->_name << " heals for " << value
			<< " health points" << std::endl;
		this->_hp += value;
		std::cout << "Claptrap " << this->_name << " hp is now "
			<< this->_hp << std::endl;
		this->_ep--;
		std::cout << "Claptrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << "has not enough energy to perform this action!" << std::endl;
}
