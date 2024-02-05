/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:45:03 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 13:01:03 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria(): _type("default")
{
    std::cout << "AMateria constructed." << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
    std::cout << "AMateria constructed." << std::endl;
}

AMateria::AMateria(const AMateria &ref)
{
    std::cout << "AMateria copy constructed." << std::endl;
    *this = ref;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
    if (this != &ref)
        this->_type = ref._type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destroyed." << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "" << std::endl;
}

