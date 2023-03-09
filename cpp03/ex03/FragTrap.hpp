
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
			FragTrap();
			FragTrap(const std::string &name);
			FragTrap(const FragTrap &frag);
			~FragTrap();
			FragTrap	&operator=(const FragTrap &frag);
			void		attack(const std::string &target);
			void		attack(ClapTrap &target);
			void        highFivesGuys(void);
			void 		status() const;
			
	protected:
			int			_hp;
			int			_ep;
			int			_ad;
};

#endif