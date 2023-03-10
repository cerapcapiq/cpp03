
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(const std::string &name);
			ScavTrap(const ScavTrap &scav);
			~ScavTrap();
			ScavTrap	&operator=(const ScavTrap &scav);
			void		attack(const std::string &target);
			void		attack(ClapTrap &target);
			void		guardGate();
			void 		status() const;
};

#endif