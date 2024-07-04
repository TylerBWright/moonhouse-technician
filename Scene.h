#pragma once

#include "Context.h"

class Scene
{
public:

  Scene(Context& context)
    : context_{ context }
  {
    // Empty
  }

  Context context_;

  void introduction();

  void dayOne();

  void working();

  void ending();
};
