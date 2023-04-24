/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:34:57 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 21:01:52 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		/* Orthodox canonical form */
		// 1. default constructor
		FragTrap(void); 
		// 2. destructor
		~FragTrap(void);
		// 3. assignment operator overloading function
		FragTrap& operator=(const FragTrap& src);
		// 4. copy constructor
		FragTrap(const FragTrap &src);
		
	private:	
};

#endif
