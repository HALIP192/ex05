#pragma once
#include <iostream>

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ASpell(ASpell const &cp);
        ASpell &operator=(ASpell const &cp);
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();

        std::string const &getName() const;
        std::string const &getEffects() const;

        void launch(ATarget const &tar_ref) const;

        virtual ASpell *clone() const = 0;


};

#include "ATarget.hpp"
