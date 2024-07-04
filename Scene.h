#pragma once

#include "Context.h"
#include "SaveManager.h"

class Scene
{
public:

  Scene(Context& context);

  Context& context_;

  SaveManager saveManager_;

  void introduction();

  void dayOne();

  void working();

  void ending();
};
