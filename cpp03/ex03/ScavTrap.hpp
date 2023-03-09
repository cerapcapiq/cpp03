

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
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
	protected:
			int			_hp;
			int			_ep;
			int			_ad;
};

#endif