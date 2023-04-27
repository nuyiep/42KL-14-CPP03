/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:34:57 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 21:15:01 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		/* Orthodox canonical form */
		FragTrap(void); 
		~FragTrap(void);
		FragTrap& operator=(const FragTrap& src);
		FragTrap(const FragTrap &src);
		
		FragTrap(std::string name);
		void	highFivesGuys(void);
		
	private:	
};

#endif
