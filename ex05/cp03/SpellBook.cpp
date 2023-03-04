#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator it = this->arr.begin();
    std::map<std::string, ASpell *>::iterator end = this->arr.end();

    while (it != end)
    {
        delete it->second;
        ++it;
    }
    this->arr.clear();
}

void SpellBook::learnSpell(ASpell *spel_ref)
{
    if (spel_ref)
        arr.insert(std::pair<std::string, ASpell *>(spel_ref->getName(), spel_ref->clone()));
}

void SpellBook::forgetSpell(std::string const &name)
{
    std::map<std::string, ASpell *>::iterator it = arr.find(name);
    if (it != arr.end())
        delete it->second;
    arr.erase(name);
}

ASpell *SpellBook::createSpell(std::string const &name)
{
    std::map<std::string, ASpell *>::iterator it = arr.find(name);
    if (it != arr.end())
        return arr[name];
    return NULL;
}
