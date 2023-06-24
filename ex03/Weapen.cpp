/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:19:17 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/27 05:58:14 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Weapon.hpp"


Weapon::Weapon(std::string a)
{
    this->type = a;
}

Weapon:: ~Weapon()
{
    
}

std::string& Weapon::getType()
{
    std::string& t = type;
    return(t);
}

void Weapon ::setType(std::string  str)
{
  this->type = str;
}