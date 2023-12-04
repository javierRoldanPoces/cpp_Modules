/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:45:25 by javier            #+#    #+#             */
/*   Updated: 2023/12/04 13:18:52 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < argc; i++)
		{
			for(int j = 0; argv[i][j]; j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i];
			if (i != argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 1;
}