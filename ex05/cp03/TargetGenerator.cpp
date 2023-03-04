#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget *>::iterator it = this->arr.begin();
    std::map<std::string, ATarget *>::iterator end = this->arr.end();

    while (it != end)
    {
        delete it->second;
        ++it;
    }
    this->arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *spel_ref)
{
    if (spel_ref)
        arr.insert(std::pair<std::string, ATarget *>(spel_ref->getType(), spel_ref->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
    std::map<std::string, ATarget *>::iterator it = arr.find(name);
    if (it != arr.end())
        delete it->second;
    arr.erase(name);
}

ATarget *TargetGenerator::createTarget(std::string const &name)
{
    std::map<std::string, ATarget *>::iterator it = arr.find(name);
    if (it != arr.end())
        return arr[name];
    return NULL;
}
