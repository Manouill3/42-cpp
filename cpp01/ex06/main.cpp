/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:44:55 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/25 13:48:30 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Wrong format : {level}" << std::endl;
        return 1;
    }
    
    Harl harl;
    
    harl.complain(std::string(av[1]));
}