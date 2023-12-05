/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:29 by javier            #+#    #+#             */
/*   Updated: 2023/12/04 20:28:34 by javier           ###   ########.fr       */
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
		int	index;
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string phone_number;
		std::string	darkest_secret;
	public:
		//Constructor
		Contact();
		//Destructor
		~Contact();
		void	add_contact();
		void	display_contact();
		void	display_table();
};

#endif