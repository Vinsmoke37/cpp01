/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 07:00:36 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/26 23:42:45 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie ::Zombie()
{
    name="Defaultname";
    std::cout << " Constructor is called" << std:: endl;
}

void Zombie::setname(std::string n)
{
    name =  n;
}

Zombie ::Zombie(std::string n)
{
    name=n;
    std::cout << "Constructor is called" << std:: endl;
}

Zombie ::~Zombie()
{
    std::cout << "Destructor is called" << std:: endl;
}

void Zombie :: announce()
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..."<< std:: endl;
}