/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 01:51:27 by aerraoui          #+#    #+#             */
/*   Updated: 2023/06/24 02:59:45 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        typedef void(Harl::*R)();
    public:
        void complain(std::string level );
};

#endif