/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:08:02 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 14:09:54 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructed." << std::endl;
}

Cure::Cure(const Cure &ref)
{
    std::cout << "Cure copied." << std::endl;
    *this = ref;
}

Cure &Cure::operator=(const Cure &ref)
{
    if (this != &ref)
        this->_type = ref._type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure destroyed." << std::endl;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}