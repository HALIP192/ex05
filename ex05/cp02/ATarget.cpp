#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &type) {this->type = type;}

ATarget::ATarget(ATarget const &cp) { *this = cp;}

ATarget &ATarget::operator=(ATarget const &cp)
{
    this->type = cp.type;
    return (*this);
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const { return (this->type);}

void ATarget::getHitBySpell(ASpell const &spell_ref) const 
{
    std::cout << this->type << " has been " << spell_ref.getEffects() << "!\n";
}
