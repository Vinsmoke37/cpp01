/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:36:07 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/27 05:46:52 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n , Weapon& a) : name(n) ,W(a)
{
 
}

void HumanA:: attack()
{
    std:: cout << name << " attacks with Their " << W.getType() << std:: endl;
}