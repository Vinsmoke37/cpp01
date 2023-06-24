/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:22:26 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/27 06:17:00 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"HumanB.hpp"

HumanB::HumanB(std::string n)
{
    this->W =NULL;
    name = n;
}
void HumanB :: setWeapon(Weapon &a)
{
    this->W = &a;
}
void HumanB :: attack()
{
    if(!W)
    {
        std::cout <<" No Weapon broo I cant Attack"<< std :: endl;
    }
    else
    {
        std:: cout << name << " attacks with Their " << W->getType() << std:: endl;
    }
    
}
