

#include "DiamondTrap.hpp"

//default constructor function
DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_name = "default";
	ClapTrap::_name = "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad; 

}

//Parameterized contructor to initialize name
DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Name Constructor called" << std::endl;
	this->_name = name;
	//ClapTrap::_name = name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad; 
}

//copy constructor function for DiamondTrap class
/*used to  initialize the data members of the class using another object of the same class
copies the values of the data variables of one object of a class to the data member 
of another object of the same class*/
DiamondTrap::DiamondTrap(const DiamondTrap &diamond) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = diamond;
}

//copy assignment operator function for DiamondTrap class
/*used to copy values from one object to another already existing object
replaces the contents of existing objects*/
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond)
{
	this->_name = diamond._name;
	ClapTrap::_name = diamond._name + "_clap_name";
	this->_hp = diamond._hp;
	this->_ep = diamond._ep;
	this->_ad = diamond._ad;
	return (*this);
}

//destructor function for DiamondTrap class
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

//prints status for all protected members
void DiamondTrap::status() const 
{
  std::cout << "Name:" << this->_name << " HP:" << this->_hp 
  << " EP:" << this->_ep << " ATT:" << this->_ad << std::endl;
}

/*check for sufficient ep to perform an action
reduces ep by 1 if enough ep and action is done,if not nothing is done*/
void	DiamondTrap::whoAmI()
{
	if (this->_hp == 0)
	{
		std::cout << "DiamondTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	else if (this->_ep > 0)
	{
		std::cout << "my name is DiamondTrap " << this->_name 
		<< " and my ClapTrap name is " << this->ClapTrap::_name << "!" << std::endl;
		this->_ep--;
		std::cout << "DiamondTrap " << this->_name << " ep is now "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Diamondtrap " << this->_name << " has not enough energy to perform this action!" << std::endl;
}

