/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:34:57 by plau              #+#    #+#             */
/*   Updated: 2023/04/28 21:08:29 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public:
		/* Orthodox canonical form */
		FragTrap(void); 
		~FragTrap(void);
		FragTrap& operator=(const FragTrap& src);
		FragTrap(const FragTrap &src);
		
		FragTrap(std::string name);
		void	highFivesGuys(void);
		
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
