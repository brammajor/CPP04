/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:29:31 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/06 12:07:00 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat &ref) :  Animal(ref)
{
    std::cout << "Cat copied with new brain." << std::endl;
    this->brain = new Brain();
}

Cat &Cat::operator=(const Cat &ref)
{
    if (this != &ref)
    {
        this->type = ref.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain();
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destroyed." << std::endl;
    delete this->brain;
}

void    Cat::makeSound() const
{
    std::cout << "Miauw." << std::endl;
}