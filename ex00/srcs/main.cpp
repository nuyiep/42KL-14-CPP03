/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:19 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 14:42:21 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap b("Eren");
	ClapTrap c("Colossal titan");
	b.attack("Colossal titan");
	c.takeDamage(4);
	b.beRepaired(3);
	b.attack("Colossal titan");
	c.takeDamage(6);
	b.attack("Colossal titan");
	c.takeDamage(10);
	return (0);
}
