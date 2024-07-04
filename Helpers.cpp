#include "Helpers.h"

#include "Card.h"
#include "CardImages.h"
#include "Constant.h"

#include <algorithm>
#include <iostream>
#include <thread>
#include <array>
#include <string>
#include <format>

#ifdef _WIN32
#include <windows.h>
#endif

void Helpers::pullAnyKey()
{
	char myChar = ' ';
	while (myChar != '\n')
	{
		myChar = std::getchar();
	}
}

void Helpers::pull(std::string& response)
{
	std::getline(std::cin, response);
	std::transform(response.begin(), response.end(), response.begin(), [](auto c) {return std::toupper(c); });
	printf("You entered: %s\n", response.c_str());
}

void Helpers::sleep(int milli)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(milli));
}

void Helpers::playNote(Constant::Note note, Constant::NoteDuration duration)
{
#ifdef _WIN32
	Beep(static_cast<DWORD>(note), static_cast<DWORD>(duration));
#endif
}

std::string Helpers::getManInTheMoonText()
{
	std::srand(global_.dayNumber_);
	int idx = std::rand() % 23;

	return textStrings_.getManInTheMoon(idx);
}

std::string Helpers::getGardenText()
{
	return textStrings_.getGarden(min(10, global_.gardenVisitationNumber_));
}

const char* Helpers::getMonth()
{
	int monthIndex = (global_.dayNumber_ - 2) / 7;
	monthIndex = min(monthIndex, 12);
	switch (monthIndex)
	{
	case 0:
		return "September";
	case 1:
		return "October";
	case 2:
		return "November";
	case 3:
		return "December";
	case 4:
		return "January";
	case 5:
		return "February";
	case 6:
		return "March";
	case 7:
		return "April";
	case 8:
		return "May";
	case 9:
		return "June";
	case 10:
		return "July";
	case 11:
		return "August";
	case 12:
		return "Happy Birthday!";
	default:
		return "September";
	}
}

const char* Helpers::getDayOfTheWeek()
{
	int dayIndex = (global_.dayNumber_ - 1) % 7;
	switch (dayIndex)
	{
	case 0:
		return "Sunday";
	case 1:
		return "Monday";
	case 2:
		return "Tuesday";
	case 3:
		return "Wednesday";
	case 4:
		return "Thursday";
	case 5:
		return "Friday";
	case 6:
		return "Saturday";
	default:
		return "Sunday";
	}
}

std::string Helpers::getCardName(Card& card)
{
	if (card.owned == true)
		return card.name;
	else if (card.forSale == true)
	{
		char cost[10];
		sprintf_s(cost, "$%d", card.cost);
		return cost;
	}
	return "???";
}

std::string Helpers::getPrice(Card& card)
{
	if (card.owned == true)
	{
		return "SOLD";
	}
	return std::format("${0}", card.cost);
}

std::string Helpers::getMoonAngelMood()
{
	if (global_.moonAngelMood_ == 0)
	{
		return "";
	}

	std::string mood = "MOON ANGEL MOOD : ";

	int moodIndex = global_.moonAngelMood_ / 6;
	moodIndex = min(moodIndex, 5);
	switch (moodIndex)
	{
	case 0:
		mood += "Grumpy";
		break;
	case 1:
		mood += "Standoffish";
		break;
	case 2:
		mood += "Mum";
		break;
	case 3:
		mood += "Curious";
		break;
	case 4:
		mood += "Pleasant";
		break;
	case 5:
		mood += "Friendly";
		break;
	}
		
	return mood;
}

bool Helpers::processShowCards()
{
	bool match = false;

	if (global_.response_ == std::string(global_.cards_[0].name) && global_.cards_[0].owned == true)
	{
		match = true;
		CardImages::manInTheMoon();
	}
	else if (global_.response_ == std::string(global_.cards_[1].name) && global_.cards_[1].owned == true)
	{
		match = true;
		CardImages::david();
	}
	else if (global_.response_ == std::string(global_.cards_[2].name) && global_.cards_[2].owned == true)
	{
		match = true;
		CardImages::masterCobler();
	}
	else if (global_.response_ == std::string(global_.cards_[3].name) && global_.cards_[3].owned == true)
	{
		match = true;
		CardImages::baby();
	}
	else if (global_.response_ == std::string(global_.cards_[4].name) && global_.cards_[4].owned == true)
	{
		match = true;
		CardImages::phyllis();
	}
	else if (global_.response_ == std::string(global_.cards_[5].name) && global_.cards_[5].owned == true)
	{
		match = true;
		CardImages::oldWoman();
	}
	else if (global_.response_ == std::string(global_.cards_[6].name) && global_.cards_[6].owned == true)
	{
		match = true;
		CardImages::blackHorse();
	}
	else if (global_.response_ == std::string(global_.cards_[7].name) && global_.cards_[7].owned == true)
	{
		match = true;
		CardImages::ironMan();
	}
	else if (global_.response_ == std::string(global_.cards_[8].name) && global_.cards_[8].owned == true)
	{
		match = true;
		CardImages::king();
	}
	else if (global_.response_ == std::string(global_.cards_[9].name) && global_.cards_[9].owned == true)
	{
		match = true;
		CardImages::moonAngel();
	}
	else if (global_.response_ == std::string(global_.cards_[10].name) && global_.cards_[10].owned == true)
	{
		match = true;
		CardImages::beautifulLady();
	}
	else if (global_.response_ == std::string(global_.cards_[11].name) && global_.cards_[11].owned == true)
	{
		match = true;
		CardImages::princessAurelia();
	}
	else if (global_.response_ == std::string(global_.cards_[12].name) && global_.cards_[12].owned == true)
	{
		match = true;
		CardImages::you(global_.name_, global_.engraving_);
	}

	return match;
}

void Helpers::processLookRoom()
{
	printf("Your living quarters is a dull powdery-white and lacking in the sort of miscellany that young kids' rooms enjoy. Your bed emerges from the wall like bracket fungus along a log and it's quiet here. You notice engravings along the underside of the bed and they each tell you something about its prior inhabitants.\n");
	printf("\n");
	printf("Will you LOOK at the engravings?\n");
	printf("\n");
	pull(global_.response_);
	printf("\n");
	if (global_.response_ == "LOOK" || global_.response_ == "YES")
	{
		showEngraving();
		if (global_.engraving_ == "")
		{
			printf("\n");
			printf("There is just enough room to CARVE your own message to future moon-calfs technicians. Will you CARVE the bottom of the bunk?\n");
			pull(global_.response_);
			printf("\n");
			if (global_.response_ == "CARVE" || global_.response_ == "YES")
			{
				printf("\n");
				printf("You remove your red pocket knife, ready to add your unique contribution to the bottom of your bunk. What sort of message will you carve? Carve it here...\n");
				pull(global_.response_);
				printf("\n");
				global_.engraving_ = global_.response_;
				printf("\n");
				showEngraving();
				printf("\n");
			}
		}
	}
}

void Helpers::showEngraving()
{
	printf(" -----------------------------------------------------------\n");
	printf("|\n");
	printf("|Margaret frum Oklahoma wuz here! U can do this!\n");
	printf("|\n");
	printf("|Why don't they talk to me? I'm just a stupid moon-calf... Billy\n");
	printf("|\n");
	printf("|Jared Negrete (1991)\n");
	printf("|\n");
	printf("|The Moon Angel is my friend always. Wilhelm, 1904\n");
	printf("|\n");
	printf("|David & Phyllis\n");
	printf("|\n");
	printf("|%s\n", global_.engraving_.c_str());
	printf("|\n");
	printf(" ------------------------------------------------------------\n");
}

void Helpers::showReadme()
{
	printf("-----------------------------------------------------------\n");
	printf("MOON-HOUSE CHEESECRUMBS AND NUGGETS by MAN-IN-THE-MOON\n");
	printf("\n");
	printf("First thing's first--SAVE your game by entering SAVE at any time in the menu. There will be an option to LOAD your game on your next reboot. But you won't need a break, now will ya?\n");
	printf("\n");
	printf("Moon-kitchen: My humble abode! Please excuse the mess--a guy's got to have hobbies, you know.\n");
	printf("\n");
	printf("Moon-house Technician Quarters: Your room has enjoyed a good many children who found their way up here; just check the engravings under the bed if you don't believe me! They never stay beyond the age of twelve and most, I am sorry to say, eventually tire of the demands that the Moon-house Technician Apprenticeship Program places on them. I do hope that you stay the full year, but I'm a reasonable fellow.\n");
	printf("\n");
	printf("Moon-Angel: He does moon-angely things--is that a word? If not, it should be. He and I get along as much as cats and dogs, which is a reasonable amount. He's more of the spiritual type and prefers to be left alone. An aloof fella.\n");
	printf("\n");
	printf("Upstairs Windows: I like to tell the kids that the twelve moon-windows are brilliant in their design and very unlike a common house window; for these windows allow one to see things close at hand. Enjoy them while you are able for they know no equivalent in your world.\n");
	printf("\n");
	printf("Moon-house Technician Job Site: It will be your duty to polish the stars on the third floor in exchange for room and board. You will also be allotted a 5-credit daily stipend which you may exchange for the coveted playing cards.\n");
	printf("\n");
	printf("Moon-garden: You are permitted to visit the garden behind the moon on Saturdays. We have a class of children being taught by our diligent teacher. Despite being a master pedagogue, there is always room for an extra assistant! Who knows--she might even part with a rare playing card of her own.\n");
	printf("\n");
	printf("Playing cards: I'm a bit more generous than my counterpart the Moon-Angel as I offer a complementary playing card on birthdays. You're going to have to find another way to get at the Moon-Angel's card--good luck with that %s. I am also told that the beautiful lady in the garden will reward you for your service as a weekend assistant. I'm willing to sell you the other eight. Type the full CARD NAME at any time to examine it.\n", global_.name_.c_str());
	printf("\n");
	printf("Speaking of which, any time you encounter a word in ALL CAPS, treat it as a parser command. Some examples: YES, NO, LOOK, TALK, WORK, READ. You may also input numbers (1-9) for lists.\n");
	printf("\n");
	printf("Re-read this document at any time by using the READ command.\n");
	printf("\n");
	printf("Anyways, I think that's it for now! Toodles!\n");
	printf("-----------------------------------------------------------\n");
}
