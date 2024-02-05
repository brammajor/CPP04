/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:14:02 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:30:11 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain &ref)
{
    std::cout << "Brain copied." << std::endl;
    *this = ref;
}

Brain &Brain::operator=(const Brain &ref)
{
    std::cout << "Brain assigned." << std::endl;
    if (this != &ref)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = ref.ideas[i];
    }
    return (*this);
}