#pragma once

#include "ASpell.hpp"
#include <map>

class TargetGenerator
{
    private:
        std::map<std::string, ATarget *> arr;
        
        TargetGenerator(TargetGenerator const &cp);
        TargetGenerator &operator=(TargetGenerator const &cp);

    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *spel_ref);
        void forgetTargetType(std::string const &name);
        ATarget *createTarget(std::string const &name);
};
