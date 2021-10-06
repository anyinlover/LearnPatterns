#include <memory>
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

int main()
{
    std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>();
    mallard->PerformQuack();
    mallard->PerformFly();

    std::unique_ptr<Duck> model = std::make_unique<ModelDuck>();
    model->PerformFly();
    model->SetFlyBehavior(std::make_unique<FlyRocketPowered>());
    model->PerformFly();
}