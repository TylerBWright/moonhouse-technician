#pragma once

#include "Global.h"

#include <array>
#include <format>

class Constant
{
public:

	typedef int Note;
	typedef int NoteDuration;

	const Note G_SHARP = 415;
	const Note F_SHARP = 370;
	const Note E = 330;
	const Note B = 247;

	const NoteDuration QUARTER = 500;
	const NoteDuration HALF = 1000;
	const NoteDuration WHOLE = 2000;
};