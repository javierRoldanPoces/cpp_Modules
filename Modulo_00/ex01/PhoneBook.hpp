/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:36 by javier            #+#    #+#             */
/*   Updated: 2023/12/04 20:28:25 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstring>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        unsigned int    index_last;
    public:
        PhoneBook();
        ~PhoneBook();
        void    add_contact();// Controlar cual es el mas antiguo si van mas de 8 contactos
        void    display_phonebook_contact();
        void    display_all_phonebook();
        
    
};
#endif