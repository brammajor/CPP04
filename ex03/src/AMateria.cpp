/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:45:03 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:30:26 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria(): _type("default")
{
}

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::AMateria(const AMateria &ref)
{
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
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "" << target.getName() << std::endl;
}

