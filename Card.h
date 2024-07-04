#pragma once

#include <cstring>

struct Card
{
	char name[17];
	int cost;
	bool forSale;
	bool owned;

	Card(const char name[17], int cost = -1)
		: forSale{false}
		, owned{false}
	{
		strncpy_s(this->name, name, 17);
		this->cost = cost;
	}
};