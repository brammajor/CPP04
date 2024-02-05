/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:29:31 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:25:40 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat &ref)
{
    std::cout << "Cat copied." << std::endl;
    *this = ref;
}

Cat &Cat::operator=(const Cat &ref)
{
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destroyed." << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miauw." << std::endl;
}