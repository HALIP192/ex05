#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << " : This looks like another boring day.\n";

}

Warlock::~Warlock()
{
    std::cout << this->name << " : My job here is done!\n";
}

std::string const &Warlock::getName() const {return this->name;}
std::string const &Warlock::getTitle() const {return this->title;}

void Warlock::setTitle(std::string const &title) { this->title = title;}

void Warlock::introduce() const { std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";}

void Warlock::learnSpell(ASpell *spel_ref)
{
    book.learnSpell(spel_ref);
}

void Warlock::forgetSpell(std::string name)
{
    book.forgetSpell(name);
}
void Warlock::launchSpell(std::string name, ATarget const &tar_ref)
{
    ATarget const *test = 0;
    if (test == &tar_ref)
        return;
    ASpell *temp = book.createSpell(name);
    if (temp)
        temp->launch(tar_ref);
}
