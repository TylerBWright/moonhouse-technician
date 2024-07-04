// MoonHouseTechnician.cpp : This file contains the \n");main\n"); function. Program execution begins and ends there.
//

#include "Constant.h"
#include "Global.h"
#include "Helpers.h"
#include "TextStrings.h"
#include "Context.h"
#include "Scene.h"
#include "SaveManager.h"

int main()
{
  Constant constant;
  Global global;
  TextStrings textStrings{ global };
  Helpers helpers{ constant, global, textStrings };

  Context context{ constant, global, helpers, textStrings };

  Scene scene{ context };
  SaveManager saveManager{ context };

  int sceneNum = 0;
  if (saveManager.promptLoad())
  {
    sceneNum = saveManager.load();
  }

  switch (sceneNum)
  {
  case 0:
    scene.introduction();
    _FALLTHROUGH;
  case 1:
    scene.dayOne();
    _FALLTHROUGH;
  case 2:
    scene.working();
    _FALLTHROUGH;
  case 3:
    scene.ending();
    _FALLTHROUGH;
  }
}

