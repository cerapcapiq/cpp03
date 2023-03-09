

#pragma once

# include <iostream>
# include <string>

class ClapTrap
{
	private:
			std::string		_name;
			unsigned int	_hit_points;
			unsigned int	_energy_points;
			unsigned int	_attack_damage;

	public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &clap);
			~ClapTrap();
			ClapTrap			&operator=(const ClapTrap &clap);


			void				attack(const std::string &target);
			//void				attack(ClapTrap &target);
			void				takeDamage(unsigned int value);
			void				beRepaired(unsigned int value);
			/*const std::string	&getName(void) const;
			void 				set_name(std::string const name);
			int					getHp(void) const;
			int					getEp(void) const;
			int					getAd(void) const;
			void 				status(void) const;*/
	
};
