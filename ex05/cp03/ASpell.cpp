#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::ASpell(ASpell const &cp) { *this = cp;}

ASpell &ASpell::operator=(ASpell const &cp)
{
    this->name = cp.name;
    this->effects = cp.effects;
    return (*this);
}

ASpell::~ASpell() {}

std::string const &ASpell::getName() const { return (this->name);}

std::string const &ASpell::getEffects() const { return (this->effects);}

void ASpell::launch(ATarget const &tar_ref) const
{
    tar_ref.getHitBySpell((*this));
}
