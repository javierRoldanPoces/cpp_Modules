/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:29 by javier            #+#    #+#             */
/*   Updated: 2023/12/05 12:37:57 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <cstring>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string phone_number;
		std::string	darkest_secret;
	public:
		int	index;
		//Constructor
		Contact();
		//Destructor
		~Contact();
		int		add_contact();
		void	display_contact();
		void	display_table();
};

#endif