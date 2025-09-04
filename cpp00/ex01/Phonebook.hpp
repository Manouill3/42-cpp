/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:53:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/03 13:12:31 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Phonebook {

private :
    
    std::string book[8];

public :
    
    Phonebook();
    ~Phonebook();

    void    ADD();
    void    SEARCH();
};