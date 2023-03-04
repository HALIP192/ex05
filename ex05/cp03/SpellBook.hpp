#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        std::map<std::string, ASpell *> arr;
        
        SpellBook(SpellBook const &cp);
        SpellBook &operator=(SpellBook const &cp);

    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *spel_ref);
        void forgetSpell(std::string const &name);
        ASpell *createSpell(std::string const &name);
};
