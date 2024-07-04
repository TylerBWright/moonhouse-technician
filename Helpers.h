#pragma once

#include "Constant.h"
#include "Global.h"
#include "TextStrings.h"

#include <string>

struct Card;

class Helpers
{
public:

	Helpers(Constant& constant, Global& global, TextStrings& textStrings)
		: constant_{ constant }
		, global_{ global }
		, textStrings_{ textStrings }
	{
		// Empty
	}

	Constant& constant_;

	Global& global_;

	TextStrings& textStrings_;

	void pullAnyKey();

	void pull(std::string& response);

	void sleep(int milli);

	void playNote(Constant::Note note, Constant::NoteDuration duration);

	std::string getManInTheMoonText();

	std::string getGardenText();

	const char* getMonth();

	const char* getDayOfTheWeek();

	std::string getCardName(Card& card);

	std::string getPrice(Card& card);

	std::string getMoonAngelMood();

	bool processShowCards();

	void processLookRoom();

	void showEngraving();

	void showReadme();
};
