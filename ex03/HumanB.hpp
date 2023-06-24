/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:27:28 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/27 06:16:44 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include"Weapon.hpp"

class HumanB 
{
    private:
        std:: string name;
        Weapon*      W;
    public :
        HumanB(std:: string  n);
        void attack();
        void setWeapon(Weapon &a);
        
};

#endif