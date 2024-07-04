#include "Scene.h"

#include "Global.h"
#include "Helpers.h"

#include <algorithm>

Scene::Scene(Context& context)
  : context_{ context }
  , saveManager_{SaveManager{context}}
{
  // Empty
}

void Scene::introduction()
{
  printf("Before we begin, what is your name? Please type your NAME and press ENTER.\n");
  context_.helpers_.pull(context_.global_.name_);
  printf("Welcome %s. You are about to discover the great mysteries of the moon-house!\n", context_.global_.name_.c_str());
  printf("\n");
  printf("  _  _   __    __   __ _       _  _   __   _  _  ____  ____ \n");
  context_.helpers_.playNote(context_.constant_.G_SHARP, context_.constant_.QUARTER);
  printf(" ( \\/ ) /  \\  /  \\ (  ( \\ ___ / )( \\ /  \\ / )( \\/ ___)(  __)\n");
  context_.helpers_.playNote(context_.constant_.E, context_.constant_.QUARTER);
  printf(" / \\/ \\(  O )(  O )/    /(___)) __ ((  O )) \\/ (\\___ \\ ) _) \n");
  context_.helpers_.playNote(context_.constant_.F_SHARP, context_.constant_.QUARTER);
  printf(" \\_)(_/ \\__/  \\__/ \\_)__)     \\_)(_/ \\__/ \\____/(____/(____)\n");
  context_.helpers_.playNote(context_.constant_.B, context_.constant_.QUARTER);
  context_.helpers_.sleep(500);
  printf("  ____  ____  ___  _  _  __ _  __  ___  __   __   __ _      \n");
  context_.helpers_.playNote(context_.constant_.B, context_.constant_.QUARTER);
  printf(" (_  _)(  __)/ __)/ )( \\(  ( \\(  )/ __)(  ) / _\\ (  ( \\     \n");
  context_.helpers_.playNote(context_.constant_.F_SHARP, context_.constant_.QUARTER);
  printf("   )(   ) _)( (__ ) __ (/    / )(( (__  )( /    \\/    /     \n");
  context_.helpers_.playNote(context_.constant_.G_SHARP, context_.constant_.QUARTER);
  printf("  (__) (____)\\___)\\_)(_/\\_)__)(__)\\___)(__)\\_/\\_/\\_)__)     \n");
  context_.helpers_.playNote(context_.constant_.E, context_.constant_.QUARTER);
  context_.helpers_.sleep(500);
  printf("\n");
  printf("************************\n");
  context_.helpers_.pullAnyKey();
  printf("\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%###############@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%+..............:#%%%%@@@%%@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%%%%%*......................-#+.=%%@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#:.............................:@=.=@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%-.........................................*@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:.............................................*@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-.......................................=@+...*@-.%%@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=.....................................................#@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=.............................................+%%-.....#@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=.........................................................@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=.....................................................#%%:.@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+............................................................:%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+...................................................+%%:......:%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+...................................................::....+*.:%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+.........................................................#%%.:%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+.....................................................=+:.:-*#@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+.....................................................:-..=*-=%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#=:.............................................:=:.-=:.=====+%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=.............................................:=:.-=:.===+=+%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+-:.............................................:-:...--++-=%%@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=.........................................:-:.-+:.-=+*==@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=:........................................-*=:..::+*-:#@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=:.............................::....::...=#-.+%%--%%@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-:........:...............:.:**...-*+:.......:*@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-......:@*.............*@:........:@+.....*@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#:......-%%=.=%%-........:##.:%%*:....+@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.........*@@%%-........-@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+........:#@:..:%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  printf("\n");
  printf("************************\n");
  context_.helpers_.sleep(1000);
  printf("\n");
  printf("\"Moon-house Technician\" is a spiritual successor to the 1895 Howard Pyle fairytale \"The Garden Behind the Moon: A Real Story of the Moon-Angel\"\n");
  printf("\n");
  printf("Developed by Tyler Wright (Outgrabe) for ParserComp 2024 (https://itch.io/jam/parsercomp-2024) and ported from REXX to C++ by Dylan Wright\n");
  context_.helpers_.pullAnyKey();

  printf("INSTRUCTIONS\n");
  printf("\n");
  printf("This is a classic parser-based text adventure game. The player types in their command and presses ENTER. It's not too hard... after all, you just did it to get to these instructions.\n");
  printf("\n");
  printf("You find yourself in the strange realm of the moon-house, the setting of Howard Pyle's imaginative fairytale. The moon-house offers a host of unique opportunities, including--\n");
  printf("\n");
  printf("- making friends with legendary moon-house occupants\n");
  printf("- moon window gazing into the cosmic beyond\n");
  printf("- hanging out in your bunk\n");
  printf("- getting lots of moon-house technician duties accomplished\n");
  printf("- collecting exclusive ASCII art trading cards\n");
  printf("- and more...\n");
  printf("\n");
  printf("It's a very cozy, slice-of-life experience for lovers of nineteenth-century science fiction.\n");
  printf("\n");
  printf("Leave the game console open and find time here and there (a couple of minutes in-between dusting your shelves?) to fully experience the moon-house vibe. While the days sort of blend together here, you must immerse yourself in the strange subroutines and procedural rhetoric to experience it in its ethereal fullness.\n");
  printf("\n");
  context_.helpers_.pullAnyKey();

  printf("Everything that you need to be a successful moon-house technician is displayed in your navigational dashboard (see below). This dashboard displays critical information like your name, the month and day, your total number of credits, your card collection, and a menu of locations to visit in any given day. Below is what you will see each day in the moon-house, so you might as well get familiarized with it now! Behold--your eyes and ears around here:\n");
  printf("\n");
  printf("*********************************************************************************\n");
  printf("| Moon-house Technician\n");
  printf("| \n");
  printf("| Name: %s ; Month: September ; Day: Sunday ; Credits: $0 ;\n", context_.global_.name_.c_str());
  printf("| Cards: ??? ; ??? ; ??? ; ??? ;\n");
  printf("|        ??? ; ??? ; ??? ; ??? ;\n");
  printf("|        ??? ; ??? ; ??? ; ??? ;\n");
  printf("|\n");
  printf("| Location: MOON-HOUSE\n");
  printf("| The moon - house is quiet and still.\n");
  printf("|\n");
  printf("| Where do you want to go?\n");
  printf("|\n");
  printf("| 1. First Floor: Moon-kitchen\n");
  printf("| 2. First Floor: Moon-house Technician Quarters\n");
  printf("| 3. Second Floor: Moon-Angel\n");
  printf("| 4. Second Floor: Upstairs Windows\n");
  printf("| 5. Third Floor: Moon-house Technician Job Site\n");
  printf("| 6. Moon-garden\n");
  printf("| [CARD NAME]\n");
  printf("|\n");
  printf("**********************************************************************************\n");
  context_.helpers_.pullAnyKey();

  printf("So if I wanted to head over to the moon-kitchen, I would find it in this directory, type in its number--so \"1\"--and press ENTER. Same for any other location.\n");
  printf("\n");
  context_.helpers_.pullAnyKey();

  printf("The Man-in-the-moon will tell you more, and boy does he have a lot to say! Lean on him for information. There are a total of twelve trading cards--some may be purchased from the Man-in-the-moon with your technician salary, and a few are awarded or gifted. You have twelve months to collect them all. Once you turn twelve, you have to go back--it\"s one of the house rules.\n");
  printf("\n");
  printf("One last thing about cards... Once you get one, type in its [CARD NAME] on the menu and get a good look at it in all its ASCII art glory!\n");
  printf("\n");
  context_.helpers_.pullAnyKey();

  printf("So\n");
  context_.helpers_.sleep(500);
  printf("    it\n");
  context_.helpers_.sleep(500);
  printf("        begins...\n");
  context_.helpers_.pullAnyKey();
}

void Scene::dayOne()
{
  printf("************************\n");
  printf("\n");
  printf("Today is your eleventh birthday! You close your eyes and blow a single sharp burst of breath, extinguishing the candles on your cake. You open your eyes to a magnificent sight. Your dream has come true--you are on the surface of the moon!\n");
  printf("\n");
  printf("What a peculiar place in its silent, powdery grandeur. A strange building catches your eye, and you begin to advance toward it.\n");
  printf("\n");
  printf("************************\n");
  context_.helpers_.pullAnyKey();

  printf("\n");
  printf("You've reached the entrance to a large, shimmering palace.\n");
  printf("\n");
  printf("The Moon-Angel stands before you and his silvery eyes search your soul. He speaks.\n");
  printf("\n");
  printf("Moon-Angel: \"It has been some time since the moon-house has seen visitors. I suppose you are here for the playing cards?\"\n");
  printf("\n");
  printf("How will you respond? (YES / NO)\n");
  context_.helpers_.pull(context_.global_.response_);
  printf("\n");
  if (context_.global_.response_ == "YES")
    printf("Moon-Angel: \"I figured as much. Earth children stopped dreaming of the garden behind the moon long ago. The Man-in-the-moon and I have resorted to offering rare collectible playing cards in order to get help around here. Just know that we will not part with these cards without putting you straight to work. Go and seek out the Man-in-the-moon and he will provide you with further instructions.\"\n");
  else if (context_.global_.response_ == "NO")
    printf("Moon-Angel: \"So there is hope yet for the earth dwellers. At any rate, as long as you are here why don't you make yourself useful? Go and seek out the Man-in-the-moon and he will put you to work.\"\n");
  else
    printf("Moon Angel: \"Do not bother me with such nonsense. Go and seek out the Man-in-the-moon and he will put you to work.\"\n");
  context_.helpers_.pullAnyKey();

  do
  {
    printf("\n");
    printf("*********************************************************************************\n");
    printf("| Moon-house Technician\n");
    printf("| \n");
    printf("| Name: %s ; Month: %s ; Day: %s ; Credits: $%d ;\n", context_.global_.name_.c_str(), context_.helpers_.getMonth(), context_.helpers_.getDayOfTheWeek(), context_.global_.numCredits_);
    printf("| Cards: %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[0]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[1]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[2]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[3]).c_str());
    printf("|        %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[4]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[5]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[6]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[7]).c_str());
    printf("|        %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[8]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[9]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[10]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[11]).c_str());
    printf("|\n");
    printf("| Location: MOON-HOUSE\n");
    printf("| The moon-house is quiet and still.\n");
    printf("|\n");
    printf("| Where do you want to go?\n");
    printf("|\n");
    printf("| 1. First Floor: Moon-kitchen\n");
    printf("| 2. First Floor: Moon-house Technician Quarters\n");
    printf("| 3. Second Floor: Moon-Angel\n");
    printf("| 4. Second Floor: Upstairs Windows\n");
    printf("| 5. Third Floor: Moon-house Technician Job Site\n");
    printf("| 6. Moon-garden\n");
    printf("| [CARD NAME]: Examine a card.");
    printf("|\n");
    printf("**********************************************************************************\n");
    printf("\n");
    context_.helpers_.pull(context_.global_.response_);
    printf("\n");

    if (context_.helpers_.processShowCards())
    {
      // Empty
    }
    else if (context_.global_.response_ == "1")
    {
      if (context_.global_.cards_[0].owned == false)
      {
        printf("\n");
        printf("You walk down a hallway and starlight from windows illuminates you along the stretch. You approach a plain and yet strangely otherworldly door and are welcomed to the odours of a fine broth beckoning for you to draw nearer. You hear a muffled fiddle rising to a cescendo and then cascading and resting at the center of the moon-kitchen beyond. You push the door open and enter.\n");
        printf("\n");
        printf("Old man: 'Happy Birthday! This playing card is on the house. Isn't it handsome? It's yours truly, the Man-in-the-moon! The next one is going to come at a price.'\n");
        printf("\n");
        printf("You obtained the [MAN IN THE MOON] card.\n");
        printf("\n");
        printf("The Man-in-the-moon has abandoned his fiddle for now and switches over to a match which he sparks and lowers to the bowl of a long tobacco pipe. The vein in his forehead pulsates as he puffs, and the machinery of his mind pieces together his next response. He reminds you of some amalgam of U.S. presidents Teddy Roosevelt and Rutherford B. Hayes, only older even than both of them combined...\n");
        printf("\n");
        printf("Man-in-the-moon: 'Welcome to the glorious moon-house! Are the earth children taken by playing card mania once again? We haven't had visitors in some time and those stars aren't going to polish themselves. Are you ready to get started?'\n");
        printf("\n");
        printf("How will you respond ? (YES / NO)\n");
        context_.global_.cards_[0].owned = true;
        context_.helpers_.pullAnyKey();

        printf("\n");
        printf("Man-in-the-moon: 'Well, my dear boy, I'm certain that you've had enough of the game tutorial and want to get to 'sploring this cozy lunar enclave. Here, take this README file and consult it when you have a free moment--trust me, you'll have a lot of that! As for right now, head over to your bunk at the end of the adjoining hallway and get you some shut-eye. As for me, it is about my nap time.'\n");
        printf("\n");
        printf("You accept the [README] from the curious Man-in-the-moon and tuck it into your inventory. Type READ at the menu to learn more about the moon-house.\n");
        printf("\n");
      }
      else
        printf("You've had enough of the Man-in-the-moon for one day. Come back tomorrow.\n");
    }
    else if (context_.global_.response_ == "2")
    {
      if (context_.global_.cards_[0].owned == true && context_.global_.gardenVisitationNumber_ == 1)
      {
        printf("You are in your sleeping quarters, a small compartment tucked away in the moon-house. Will you SLEEP?\n");
        printf("\n");
        context_.helpers_.pull(context_.global_.response_);
        printf("\n");
        if (context_.global_.response_ == "SLEEP" || context_.global_.response_ == "YES")
        {
          printf("\n");
          printf("You retire to your room for the night.\n");
          context_.global_.dayNumber_ = context_.global_.dayNumber_ + 1;
        }
        else if (context_.global_.response_ == "LOOK")
          context_.helpers_.processLookRoom();
      }
      else
        printf("You're not quite ready to go back to sleep. Take a look around before calling it a day.\n");
    }
    else if (context_.global_.response_ == "3")
    {
      printf("You probably should avoid the Moon-Angel right now. He seemed pretty adamant that you seek out the Man-in-the-moon first.\n");
    }
    else if (context_.global_.response_ == "4")
    {
      printf("You probably should avoid the Moon-Angel right now. He seemed pretty adamant that you seek out the Man-in-the-moon first.\n");
    }
    else if (context_.global_.response_ == "5")
    {
      printf("You really are eager to start your moon-house duties, aren't you? Think of today as orientation day. Come back tomorrow.\n");
    }
    else if (context_.global_.response_ == "6")
    {
      if (context_.global_.cards_[0].owned == false)
        printf("You don't have time to waste in some moon-garden. The Man-in-the-moon expects you in the moon-kitchen.\n");
      else
      {
        if (context_.global_.gardenVisitationNumber_ == 0)
        {
          printf("A group of small children run in the glistening grass of the garden behind the moon. A beautiful lady--their teacher presumably--calls them over and they huddle around her. They are totally captivated by her presence and listening intently to her words.\n");
          printf("\n");
          printf("Beautiful Lady: 'Welcome to our garden, %s. Do not be afraid! Children, please welcome our newest visitor!'\n", context_.global_.name_.c_str());
          printf("\n");
          printf("The children poke and prod at you and speak in amusing ways foreign to you. You spend some time running and playing with the children in the garden, hiding behind the sundial and discovering exotic terrain. The Beautiful Lady motions for you to come over, and you cannot help but listen to her every word, so taken are you by her grace.\n");
          printf("\n");
          printf("Beautiful Lady: 'You were such an expert teacher's assistant today, young one! You may come and help me any time you'd like. The door to the garden will open for you on Saturdays.'\n");
          context_.global_.gardenVisitationNumber_++;
        }
        else
          printf("The door to the garden behind the moon is locked. A sign reads: 'Moon calfs are welcome on Saturdays.'\n");
      }
    }
    else if (context_.global_.response_ == "README" || context_.global_.response_ == "READ")
      context_.helpers_.showReadme();
    else if (context_.global_.response_ == "SAVE")
    {
      saveManager_.save(1);
      printf("Game saved.\n\n");
    }
    else
      continue;

    context_.helpers_.pullAnyKey();
  } while (context_.global_.dayNumber_ == 0);
}

void Scene::working()
{
  do
  {
    if (context_.global_.windowVisitationNumber_ == 5)
    {
      printf("");
      printf("You're about to resume your daily moon-house routine, but out of nowhere you feel the silvery touch of the Moon-Angel right below your upper arm. Somehow he manages to extricate you from the moon-house and you are suspended in mid-air; presumably being escorted through the heavens! He gently sets you down in the middle of your town square without a parting word. You get the feeling that you've overstayed your welcome. Too busy looking out of windows when you should have been working!");
      printf("");
      printf("GAME OVER");
      exit(0);
    }

    printf("\n");
    printf("*********************************************************************************\n");
    printf("| Moon-house Technician\n");
    printf("| \n");
    printf("| Name: %s ; Month: %s ; Day: %s ; Credits: $%d ;\n", context_.global_.name_.c_str(), context_.helpers_.getMonth(), context_.helpers_.getDayOfTheWeek(), context_.global_.numCredits_);
    printf("| Cards: %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[0]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[1]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[2]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[3]).c_str());
    printf("|        %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[4]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[5]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[6]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[7]).c_str());
    printf("|        %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[8]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[9]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[10]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[11]).c_str());
    printf("|        %s\n", context_.helpers_.getMoonAngelMood().c_str());
    printf("|\n");
    printf("| Location: MOON-HOUSE\n");
    printf("| The moon-house is quiet and still.\n");
    printf("|\n");
    printf("| Where do you want to go?\n");
    printf("|\n");
    printf("| 1. First Floor: Moon-kitchen\n");
    printf("| 2. First Floor: Moon-house Technician Quarters\n");
    printf("| 3. Second Floor: Moon-Angel\n");
    printf("| 4. Second Floor: Upstairs Windows\n");
    printf("| 5. Third Floor: Moon-house Technician Job Site\n");
    printf("| 6. Moon-garden\n");
    printf("| README: Read the game manual.\n");
    printf("| [CARD NAME]: Examine a card.\n");
    printf("| SAVE: Save your game.\n");
    printf("|\n");
    printf("**********************************************************************************\n");
    printf("\n");
    context_.helpers_.pull(context_.global_.response_);
    printf("\n");

    if (context_.helpers_.processShowCards())
    {
      // Empty
    }
    else if (context_.global_.response_ == "1")
    {
      context_.global_.cards_[1].forSale = true;
      context_.global_.cards_[2].forSale = true;
      context_.global_.cards_[3].forSale = true;
      context_.global_.cards_[4].forSale = true;
      context_.global_.cards_[5].forSale = true;
      context_.global_.cards_[6].forSale = true;
      context_.global_.cards_[7].forSale = true;
      context_.global_.cards_[8].forSale = true;

      printf("%s\n", context_.helpers_.getManInTheMoonText().c_str());
      printf("\n");
      printf("Man-in-the-moon: 'Any playing card catch your eye today?'\n");
      printf("\n");
      printf("1. Moon-calf: %s\n",       context_.helpers_.getPrice(context_.global_.cards_[1]).c_str());
      printf("2. Master Cobbler:  %s\n", context_.helpers_.getPrice(context_.global_.cards_[2]).c_str());
      printf("3. Baby: %s\n",            context_.helpers_.getPrice(context_.global_.cards_[3]).c_str());
      printf("4. Phyllis: %s\n",         context_.helpers_.getPrice(context_.global_.cards_[4]).c_str());
      printf("5. Old Woman: %s\n",       context_.helpers_.getPrice(context_.global_.cards_[5]).c_str());
      printf("6. Black Horse: %s\n",     context_.helpers_.getPrice(context_.global_.cards_[6]).c_str());
      printf("7. Iron Man: %s\n",        context_.helpers_.getPrice(context_.global_.cards_[7]).c_str());
      printf("8. King: %s\n",            context_.helpers_.getPrice(context_.global_.cards_[8]).c_str());
      printf("\n");
      printf("Select a card (1-8) to purchase.\n");
      printf("\n");
      context_.helpers_.pull(context_.global_.response_);
      printf("\n");
      if (int response = std::atoi(context_.global_.response_.c_str()))
      {
        Card& card = context_.global_.cards_[response];
        if (context_.global_.numCredits_ >= card.cost)
        {
          printf("%s\n", context_.textStrings_.getManInTheMoonCardResponse(response-1).c_str());
          context_.global_.numCredits_ -= card.cost;
          card.owned = true;
        }
        else
          printf("Looks like you're a little short on the credits!\n");
      }
    }
    else if (context_.global_.response_ == "2")
    {
      printf("You are in your sleeping quarters, a small compartment tucked away in the moon-house. Will you SLEEP?\n");
      printf("\n");
      context_.helpers_.pull(context_.global_.response_);
      printf("\n");
      if (context_.global_.response_ == "SLEEP" || context_.global_.response_ == "YES")
      {
        printf("\n");
        printf("It was a long day and you are sleepy. Goodnight!\n");
        context_.global_.dayNumber_ = context_.global_.dayNumber_ + 1;
      }
      else if (context_.global_.response_ == "LOOK")
      {
        context_.helpers_.processLookRoom();
      }
    }
    else if (context_.global_.response_ == "3")
    {
      if (context_.global_.moonAngelCadence_ != context_.global_.dayNumber_)
      {
        printf("The Moon-Angel is seen gazing out of the window at the cosmos. He is in deep thought and hardly notices your presence.\n");
        printf("\n");
        printf("You stand before the Moon-Angel. He spends a lot of his time before this window engaging in some sort of creative design. Will you TALK with him?\n");
        printf("\n");
        context_.helpers_.pull(context_.global_.response_);
        printf("\n");
        if (context_.global_.response_ == "TALK")
        {
          context_.global_.moonAngelCadence_ = context_.global_.dayNumber_;
          context_.global_.moonAngelMood_ = context_.global_.moonAngelMood_ + 1;
          if (context_.global_.moonAngelMood_ == 26)
          {
            printf("Moon-Angel: 'Here.'\n");
            printf("\n");
            printf("The Moon-Angel reveals a holographic [MOON ANGEL] playing card from under his robe and places it in your hand. While this gesture left you star-struck, you are more surprised by a short burst of smile radiating out of his face. For a brief moment in time, the Moon-Angel willingly decided that he might lower himself down to the human level in order to empathize with you. He then dissapears down the hallway and leaves you to your chores.\n");
            context_.global_.cards_[9].owned = true;
          }
          else
          {
            int idx = context_.global_.moonAngelMood_ / 6;
            idx = std::min(idx, 5);
            printf("%s\n", context_.textStrings_.getMoonAngel(idx).c_str());
          }
        }
      }
      else
      {
        printf("It's probably best to leave the Moon-Angel alone.\n");
      }
    }
    else if (context_.global_.response_ == "4")
    {
      printf("The twelve moon-windows are brilliant in their design and very unlike a common house window; for these windows allow one to see things close at hand. Will you LOOK out the window?\n");
      printf("\n");
      context_.helpers_.pull(context_.global_.response_);  
      printf("\n");
      if (context_.global_.response_ == "LOOK" || context_.global_.response_ == "YES")
      {
        printf("You get lost in the complex tapestry of scenes--of people, places, colors and sounds too plentiful to name here. While it is tempting to devote oneself to a life of complete sensory abandonment right there in front of the windows, you are on a mission to gather every playing card in the moon-house. You had better get going now.\n");
        context_.global_.windowVisitationNumber_++;
      }
    }
    else if (context_.global_.response_ == "5")
    {
      if (context_.global_.workCadence_ != context_.global_.dayNumber_)
      {
        printf("You stand on the top floor of the moon-house. There is nothing above you aside from a hollow, empty sky.\n");
        printf("\n");
        printf("A basket of brilliantly shining stars of red, white, and blue welcome you to your day's labor. A bundle of lamb's-wool rests next to the basket. Will you POLISH the stars and set them in the sky?\n");
        printf("\n");
        context_.helpers_.pull(context_.global_.response_);
        printf("\n");
        if (context_.global_.response_ == "POLISH" || context_.global_.response_ == "YES" || context_.global_.response_ == "WORK")
        {
          printf("You sit on the wooden bench and pick up the first star, rubbing it with the lamb's-wool. As you rub the star it grows brighter and brighter until it throbs with light as if alive. You repeat this process with the remaining stars before casting them into the sky.\n");
          printf("\n");
          printf("  *           *             *\n");
          context_.helpers_.sleep(500);
          context_.helpers_.playNote(context_.constant_.F_SHARP, context_.constant_.QUARTER);
          printf("*   *       *   *         *   *\n");
          context_.helpers_.sleep(500);
          context_.helpers_.playNote(context_.constant_.G_SHARP, context_.constant_.QUARTER);
          printf("  *           *             *\n");
          context_.helpers_.sleep(500);
          context_.helpers_.playNote(context_.constant_.E, context_.constant_.QUARTER);
          context_.global_.numCredits_ += 5;
          context_.global_.workCadence_ = context_.global_.dayNumber_;
        }
        else if (context_.global_.response_ == "NO")
          printf("You slacker...\n");
      }
      else
        printf("You've already done your share of today's work. Take the rest of the day off!\n");
    }
    else if (context_.global_.response_ == "6")
    {
      if (context_.helpers_.getDayOfTheWeek() == "Saturday")
      {
        if (context_.global_.gardenCadence_ != context_.global_.dayNumber_)
        {
          printf("%s\n", context_.helpers_.getGardenText().c_str());
          context_.global_.gardenVisitationNumber_++;
          context_.global_.gardenCadence_ = context_.global_.dayNumber_;
          if (context_.global_.gardenVisitationNumber_ == 10)
          {
            printf("\n");
            printf("Beautiful Lady: %s, you have been so much of a good helper! Here is your [BEAUTIFUL LADY] playing card for all of your hard work. You take care of it now.'\n", context_.global_.name_.c_str());
            printf("\n");
            context_.global_.cards_[10].owned = true;
          }
        }
        else
          printf("The door to the garden is closed for the evening. Come back next week!\n");
      }
      else
        printf("The door to the garden behind the moon is locked. A sign reads: 'Moon calfs are welcome on Saturdays.'\n");
    }
    else if (context_.global_.response_ == "README" || context_.global_.response_ == "READ")
      context_.helpers_.showReadme();
    else if (context_.global_.response_ == "SAVE")
    {
      saveManager_.save(2);
      printf("Game saved.\n\n");
    }
    else
      continue;

    context_.helpers_.pullAnyKey();
  }
  while (context_.helpers_.getMonth() != "Happy Birthday!");
}

void Scene::ending()
{
  printf("Can you believe that today is your last day in the moon-house? You spend it with friends exploring every field, statue, row of cabbage, and game parlour. Everybody laughs and shares jokes, including the Beautiful Lady who has as good a riddle as any. You argue over which tree is the elder of the bunch, how many bands an armadillo has, and other epiphanies set at random like the smattering of the stars above. You give each child a hug before a final embrace with the Beautiful Lady, and so it ends.\n");
  printf("\n");
  printf("You head back to your bunk and fall fast asleep.\n");
  printf("\n");
  context_.helpers_.pullAnyKey();
  printf("ZZZZzzzz\n");
  context_.helpers_.playNote(context_.constant_.B, context_.constant_.WHOLE);
  printf("\n");
  context_.helpers_.sleep(500);
  printf("ZZZZzzzzZZZZzzzz\n");
  context_.helpers_.playNote(context_.constant_.B, context_.constant_.WHOLE);
  printf("\n");
  context_.helpers_.sleep(500);
  context_.helpers_.playNote(context_.constant_.B, context_.constant_.WHOLE);
  printf("ZZZZZZzzzzzZZZZzzzzz\n");
  printf("\n");
  context_.helpers_.sleep(500);
  printf("You awaken from your bunk to silver moonlight pouring through your portal into the cosmos. Today is a special day, for it is your one-year moon-house anniversary! More importantly, however, it is your twelfth birthday, meaning you get a complementary card from the Man-in-the-moon.\n");
  printf("\n");
  printf("You fling open the door and make your way through the corridor--there isn't a moment to lose! You arrive before the moon-kitchen and knock in the same manner that you always had, a rap and a tap and a tap. The Man-in-the-moon opens the door, revealing a face more glum than any you had witnessed before or after. He speaks.\n");
  printf("\n");
  printf("Man-in-the-moon: 'Happy Birthday my dear %s! You have made it one year in the moon-house.'\n", context_.global_.name_.c_str());
  printf("\n");
  printf("The old little man of whimsy hands you a card. You feel a course of energy connect with your palm and reverberate down your arm. This [PRINCESS AURELIA] card has a special energy about it! The Man-in-the-moon allows you a moment of celebration before introducing a more delicate topic.\n");
  printf("\n");
  printf("Man-in-the-moon: 'Do you remember what I told you when you first arrived at the moon-house?'\n");
  printf("\n");
  printf("You were hoping that he wouldn't bring up that detail.\n");
  printf("\n");
  printf("Man-in-the-moon: 'You must go back now, and grow up.'\n");
  context_.global_.cards_[11].owned = true;
  context_.helpers_.pullAnyKey();

  printf("\n");
  printf("The unmistakable figure of the Moon-Angel slips into the moon-kitchen, his silver robe fluttering behind him and the minute stars within the fabric glistening brilliantly. His eyes search your soul, and you realize, instinctively, that you are about to awaken from the moon-house dream. While the Moon-Angel did not vocalize this with you, he was able to transfer innumerable ideas and concepts from his mind to yours... and suddenly now you understand.\n");
  printf("\n");
  context_.helpers_.pullAnyKey();

  printf("Now\n");
  context_.helpers_.sleep(500);
  printf("    you\n");
  context_.helpers_.sleep(500);
  printf("        understand...\n");
  context_.helpers_.pullAnyKey();

  printf("\n");
  printf("Moon-Angel: '%s, come to me.'\n", context_.global_.name_.c_str());
  printf("\n");
  printf("You glance at the Man-in-the-moon and he returns a little wink. You are going to greatly miss these two strange caretakers of the moon-house. You refocus back on the Moon-Angel.\n");
  printf("\n");
  printf("His massive arms wrap around you and an electric current grabs hold of your entire body. You feel the sensation of being thrusted into the air and ejected into a new reality--a sensation both foreign and incomprehensible. You are detethered from the moon-house realm. You are being transported through the interstitial regions between worlds.\n");
  printf("\n");
  context_.helpers_.pullAnyKey();

  printf("        *\n");
  context_.helpers_.sleep(500);
  printf("       ***\n");
  context_.helpers_.sleep(500);
  printf("     *******\n");
  context_.helpers_.sleep(500);
  printf("       ***\n");
  context_.helpers_.sleep(500);
  printf("        *\n");
  context_.helpers_.pullAnyKey();

  do
  {
    printf("\n");
    printf("*********************************************************************************\n");
    printf("| Moon-house Technician\n");
    printf("| \n");
    printf("| Name: %s ; Month: %s ; Day: %s ; Credits: $%d ;\n", context_.global_.name_.c_str(), context_.helpers_.getMonth(), context_.helpers_.getDayOfTheWeek(), context_.global_.numCredits_);
    printf("| Cards: %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[0]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[1]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[2]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[3]).c_str());
    printf("|        %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[4]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[5]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[6]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[7]).c_str());
    printf("|        %s ; %s ; %s ; %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[8]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[9]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[10]).c_str(), context_.helpers_.getCardName(context_.global_.cards_[11]).c_str());
    printf("|        %s ;\n", context_.helpers_.getCardName(context_.global_.cards_[12]).c_str());
    printf("|\n");
    printf("| Location: MOON-HOUSE\n");
    printf("| The moon-house is quiet and still.\n");
    printf("|\n");
    printf("| Where do you want to go?\n");
    printf("|\n");
    printf("| 1. First Floor: Your Kitchen\n");
    printf("| 2. First Floor: Your Sleeping Quarters\n");
    printf("| 3. Second Floor: Manny the Moon Angel\n");
    printf("| 4. Second Floor: Upstairs Windows\n");
    printf("| 5. Third Floor: Your Job Site\n");
    printf("| 6. Your Garden\n");
    printf("| [CARD NAME]: Examine a card.\n");
    printf("| SAVE: Save your game.\n");
    printf("|\n");
    printf("**********************************************************************************\n");
    printf("\n");
    context_.helpers_.pull(context_.global_.response_);
    printf("\n");

    if (context_.helpers_.processShowCards())
    {
      // Empty
    }
    else if (context_.global_.response_ == "1")
    {
      printf("You are in your kitchen. A familiar sight is spread before you, and yet it feels quite unfamiliar... A kitchen is supposed to be a place where music is played, stories are told, and almanacs are read by candle light, right?\n");
    }
    else if (context_.global_.response_ == "2")
    {
      printf("You are in your room. There's more stuff here to keep a person occupied, but your moon-house living quarters were comfortable in their simplicity.\n");
      printf("\n");
      if (context_.global_.cards_[12].owned == 0 && context_.global_.engraving_ != "")
      {
        printf("Will you LOOK around?\n");
        printf("\n");
        context_.helpers_.pull(context_.global_.response_);
        printf("\n");
        if (context_.global_.response_ == "LOOK" || context_.global_.response_ == "YES")
        {
          printf("You notice something shiny under your bed. Is that a card?!\n");
          printf("\n");
          printf("You pick up the card and examine it. Well, now doesn't this look familiar? It's your moon-house bunk engraving that you did all those years ago:\n");
          printf("\n");
          printf("%s\n", context_.global_.engraving_.c_str());
          printf("\n");
          printf("You obtained the [YOU] card! YOU are the most important character in this game! It wouldn't be interactive fiction without YOU. :)\n");
          printf("\n");
          context_.global_.cards_[12].owned = true;
        }
      }
    }
    else if (context_.global_.response_ == "3")
    {
      printf("Your dog, Manny the Moon Angel, is curled up here in the corner and deep in sleep. His silver fur glistens in the streaming window sunlight.\n");
    }
    else if (context_.global_.response_ == "4")
    {
      printf("You stand before the second-floor windows and gaze out at a dynamic, moving world of squirrels, children, and cars driving by. While the sights that the moon-house windows provide are far more vibrant in their pastel colors and hyperrealistic tendency, these earth windows will do. You rather enjoy the peaceful serenity of your neighborhood.\n");
    }
    else if (context_.global_.response_ == "5")
    {
      printf("You are sitting at your desk in your home office. You would like to have a job that is more physically demanding, like that star-polishing stint that you did back in the day. Back to work, %s.\n", context_.global_.name_.c_str());
    }
    else if (context_.global_.response_ == "6")
    {
      printf("You are in your backyard garden. The tomatoes, green peppers, and eggplant are coming along nicely! You catch a sweet whiff of kitchen herbs and it activates a memory of another time--perhaps a past life? Ah, now that's it... The sundial looks similar to the one along the garden behind the moon! But alas, I am alone now.\n");
      printf("\n");
      printf(" _____|\\____\n");
      printf(" \\___   ___/\n");
      printf("   ou| |grabe\n");
      printf("     | |  LLC\n");
      printf("     | |\n");
      printf("    /   \\\n");
      printf("   /-----\\\n");
    }
    else if (context_.global_.response_ == "README" || context_.global_.response_ == "READ")
      context_.helpers_.showReadme();
    else if (context_.global_.response_ == "SAVE")
    {
      saveManager_.save(3);
      printf("Game saved.\n\n");
    }
    else
      continue;

    context_.helpers_.pullAnyKey();
  } while (true);
}
