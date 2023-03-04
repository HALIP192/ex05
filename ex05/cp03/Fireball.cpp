#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "fired") {}

Fireball::~Fireball() {}

ASpell *Fireball::clone() const
{
    return (new Fireball());
}
