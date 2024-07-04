#include "SaveManager.h"

#include "Context.h"

#include <iostream>
#include <fstream>

SaveManager::SaveManager(Context& context)
	: context_{ context }
{
	// Empty
}

void SaveManager::save(int sceneNum)
{
	std::ofstream file{ FILENAME };
	
	file << static_cast<uint8_t>(sceneNum);

	file << static_cast<uint8_t>(context_.global_.cards_[0].forSale) << static_cast<uint8_t>(context_.global_.cards_[0].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[1].forSale) << static_cast<uint8_t>(context_.global_.cards_[1].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[2].forSale) << static_cast<uint8_t>(context_.global_.cards_[2].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[3].forSale) << static_cast<uint8_t>(context_.global_.cards_[3].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[4].forSale) << static_cast<uint8_t>(context_.global_.cards_[4].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[5].forSale) << static_cast<uint8_t>(context_.global_.cards_[5].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[6].forSale) << static_cast<uint8_t>(context_.global_.cards_[6].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[7].forSale) << static_cast<uint8_t>(context_.global_.cards_[7].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[8].forSale) << static_cast<uint8_t>(context_.global_.cards_[8].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[9].forSale) << static_cast<uint8_t>(context_.global_.cards_[9].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[10].forSale) << static_cast<uint8_t>(context_.global_.cards_[10].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[11].forSale) << static_cast<uint8_t>(context_.global_.cards_[11].owned);
	file << static_cast<uint8_t>(context_.global_.cards_[12].forSale) << static_cast<uint8_t>(context_.global_.cards_[12].owned);

	file << static_cast<uint8_t>(context_.global_.dayNumber_);

	file << static_cast<uint8_t>(context_.global_.engraving_.length());
	for (uint8_t c : context_.global_.engraving_)
	{
		file << c;
	}

	file << static_cast<uint8_t>(context_.global_.gardenCadence_);

	file << static_cast<uint8_t>(context_.global_.gardenVisitationNumber_);

	file << static_cast<uint8_t>(context_.global_.moonAngelCadence_);

	file << static_cast<uint8_t>(context_.global_.moonAngelMood_);

	file << static_cast<uint8_t>(context_.global_.moonAngelVisitationNumber_);

	file << static_cast<uint8_t>(context_.global_.name_.length());
	for (auto c : context_.global_.name_)
	{
		file << c;
	}

	file << static_cast<uint16_t>(context_.global_.numCredits_);

	file << static_cast<uint8_t>(context_.global_.windowVisitationNumber_);

	file << static_cast<uint8_t>(context_.global_.workCadence_);

	file.close();
}

int SaveManager::load()
{
	std::ifstream file{ FILENAME };
	file >> std::noskipws;

	uint8_t temp;
	uint16_t temp2;

	file >> temp;
	int sceneNum = static_cast<int>(temp);

	file >> temp;
	context_.global_.cards_[0].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[0].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[1].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[1].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[2].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[2].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[3].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[3].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[4].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[4].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[5].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[5].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[6].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[6].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[7].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[7].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[8].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[8].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[9].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[9].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[10].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[10].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[11].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[11].owned = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[12].forSale = static_cast<bool>(temp);
	file >> temp;
	context_.global_.cards_[12].owned = static_cast<bool>(temp);

	file >> temp;
	context_.global_.dayNumber_ = static_cast<int>(temp);

	char length = 0;
	file >> length;
	for (int i = 0; i < length; ++i)
	{
		file >> temp;
		context_.global_.engraving_ += static_cast<char>(temp);
	}

	file >> temp;
	context_.global_.gardenCadence_ = static_cast<int>(temp);

	file >> temp;
	context_.global_.gardenVisitationNumber_ = static_cast<int>(temp);

	file >> temp;
	context_.global_.moonAngelCadence_ = static_cast<int>(temp);

	file >> temp;
	context_.global_.moonAngelMood_ = static_cast<int>(temp);

	file >> temp;
	context_.global_.moonAngelVisitationNumber_ = static_cast<int>(temp);

	file >> length;
	for (int i = 0; i < length; ++i)
	{
		file >> temp;
		context_.global_.name_ += static_cast<char>(temp);
	}

	file >> temp2;
	context_.global_.numCredits_ = static_cast<int>(temp2);

	file >> temp;
	context_.global_.windowVisitationNumber_ = static_cast<int>(temp);

	file >> temp;
	context_.global_.workCadence_ = static_cast<int>(temp);

	file.close();

	return sceneNum;
}

bool SaveManager::promptLoad()
{
	std::ifstream file{ FILENAME };
	if (!file)
		return false;

	printf("Do you want to LOAD a previous save?\n");
	context_.helpers_.pull(context_.global_.response_);
	if (context_.global_.response_ == "LOAD" ||
		  context_.global_.response_ == "YES" ||
		  context_.global_.response_ == "Y")
	{
		return true;
	}

	return false;
}