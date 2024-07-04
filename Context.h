#pragma once

#include "Constant.h"
#include "Global.h"
#include "Helpers.h"
#include "TextStrings.h"

class Context
{
public:
	Context(Constant& constant, Global& global, Helpers& helpers, TextStrings& textStrings)
		: constant_{ constant }
		, global_{ global }
		, helpers_{ helpers }
		, textStrings_{ textStrings }
	{
		// Empty
	}

	Constant& constant_;
	Global& global_;
	Helpers& helpers_;
	TextStrings& textStrings_;

};