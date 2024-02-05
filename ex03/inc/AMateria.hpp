/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:45:13 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:19:38 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class   AMateria
{
    protected:
        std::string _type;
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &ref);
    public:
        
        virtual ~AMateria();
        virtual AMateria &operator=(const AMateria &ref);
        virtual std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif