/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:38 by javier            #+#    #+#             */
/*   Updated: 2023/12/05 13:02:03 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index_last = 0;
}

PhoneBook::PhoneBook()
{
}

void PhoneBook::add_contact()
{
	if (index_last < 8)
	{
		this->contact[this->index_last].add_contact();
		this->contact[this->index_last].index = this->index_last;
		this->index_last++;        
	}
	else
	{
		this->contact[0].add_contact();
		this->contact[0].index = 0;
		this->index_last = 0;
	}
}
void	PhoneBook::display_phonebook_contact()
{
	display_all_phonebook();// continuar ahora ujna vez mostrados todos los contactos almacenados en el array el usr debe elegit un indice y se le mostrara ekl copntacto seleccionado
}

void	PhoneBook::display_all_phonebook()
{
	std::cout << "|" << "    id    " << "|" << "first name" << " last name" << "|" << " nick name" << std::endl;
	for (int i = 0; i < index_last; i++)
		this->contact[i].display_table();
}
