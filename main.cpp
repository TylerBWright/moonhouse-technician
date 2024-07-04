// MoonHouseTechnician.cpp : This file contains the \n");main\n"); function. Program execution begins and ends there.
//

#include "Constant.h"
#include "Global.h"
#include "Helpers.h"
#include "TextStrings.h"
#include "Context.h"
#include "Scene.h"

int main()
{
  Constant constant;
  Global global;
  TextStrings textStrings{ global };
  Helpers helpers{ constant, global, textStrings };

  Context context{ constant, global, helpers, textStrings };

  Scene scene{ context };

  scene.introduction();
  scene.dayOne();
  scene.working();
  //Scene::ending();
}

