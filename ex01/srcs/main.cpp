/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:19 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 17:56:28 by plau             ###   ########.fr       */
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
	return (0);
}
