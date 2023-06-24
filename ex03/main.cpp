/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:44:06 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/27 06:16:35 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
   jim.setWeapon(club);
   jim.attack();
   club.setType("some other type of club");
   jim.attack();
}
return 0;
}