/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:19 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 18:26:59 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Nezuko");
	ScavTrap b( a);
	ScavTrap c("Scary-demon");
	a.attack("scary-demon");
	c.takeDamage(20);
	c.attack("Nezuko");
	a.takeDamage(20);
	a.beRepaired(11);
	a.guardGate();
	a.attack("scary-demon");
	c.takeDamage(10000);
	c.attack("Nezuko");
	return (0);
}
