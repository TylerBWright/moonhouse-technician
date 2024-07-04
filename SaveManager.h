#pragma once

class Context;

class SaveManager
{
public:
	SaveManager(Context& context);

	const char* FILENAME = "moon.sav";

	Context& context_;

	void save(int sceneNum);

	int load();

	bool promptLoad();
};
