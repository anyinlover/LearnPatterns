#include "FlyRocketPowered.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include <memory>

int main() {
  std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>();
  mallard->performQuack();
  mallard->performFly();

  std::unique_ptr<Duck> model = std::make_unique<ModelDuck>();
  model->performFly();
  model->setFlyBehavior(std::make_unique<FlyRocketPowered>());
  model->performFly();
}