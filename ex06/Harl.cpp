/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 01:56:12 by aerraoui          #+#    #+#             */
/*   Updated: 2023/06/24 15:38:33 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl:: debug( void )
{
    std::cout << "[ DEBUG ]"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
};

void Harl :: info( void )
{
  std::cout << "[ INFO ]"<<std::endl;
  std::cout <<"These messages contain extensive information. They are helpful for tracing program execution in a production environment."<<std::endl;
};

void Harl:: warning(void)
{
  std::cout << "[ WARNING ]"<<std::endl;
  std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
};

void Harl ::error( void )
{
  std::cout << "[ ERROR ]"<<std::endl;
  std::cout <<"This is unacceptable! I want to speak to the manager now "<< std::endl;  
};

void Harl::complain( std::string level )
{
  
 switch(level)
  {
    case 'debug':
      this->debug();
      
  }  
}
