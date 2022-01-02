#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

int main()
{
    std::unique_ptr<Duck> duck = std::make_unique<MallardDuck>();
    std::shared_ptr<Turkey> turkey = std::make_shared<WildTurkey>();
    std::unique_ptr<Duck> turkeyAdapter = std::make_unique<TurkeyAdapter>(turkey);

    std::cout << "The Turkey says..." << std::endl;
    turkey->Gobble();
    turkey->Fly();

    std::cout << "The Duck says..." << std::endl;
    duck->Quack();
    duck->Fly();

    std::cout << "The TurkeyAdapter says..." << std::endl;
    turkeyAdapter->Quack();
    turkeyAdapter->Fly();
}