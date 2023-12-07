/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:33 by javier            #+#    #+#             */
/*   Updated: 2023/12/05 12:29:43 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->index = 0;
}

Contact::~Contact()
{
}

int Contact::add_contact()
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string p_number;
    std::string d_secret;

    do
    {
        std::cout << "Insert fist name: ";
        std::getline(std::cin, f_name);
    } while (f_name.empty());
    do
    {
        std::cout << "Insert last name: ";
        std::getline(std::cin, l_name);
    } while (l_name.empty());
    do
    {
        std::cout << "Insert nickname: ";
        std::getline(std::cin, n_name);
    } while (n_name.empty());
    do
    {
        std::cout << "Insert phone number: ";
        std::getline(std::cin, p_number);
    } while (p_number.empty());
    do
    {
        std::cout  << "Insert darkset secret: ";
        std::getline(std::cin, d_secret);
    } while (d_secret.empty());
    
    this->first_name = f_name;
    this->last_name = l_name;
    this->nick_name = n_name;
    this->phone_number = p_number;
    this->darkest_secret = d_secret;
    return 1;
}

void	Contact::display_contact()
{
    std::cout << "Fist name: " << this->first_name << std::endl;
    std::cout << "Last name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nick_name << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}
// Faltaria controlar si el size de la cadena es > 10 sustituir posicion [0] por un . y mostrar solo hasta esa posicion
void	Contact::display_table()
{
    std::cout << "|" << "         " << this->index;
    std::cout << "|" << std::right << this->first_name;
    std::cout << "|" << std::right << this->last_name;
    std::cout << "|" << std::right << this->nick_name << std::endl;
}
