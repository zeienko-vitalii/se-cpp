/**
* @file Button.cpp
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#include "Button.h"
#include "Logger.h"

Button::Button(): state(false)
{
	Logger::getLogger().info("Button()");
}

Button::~Button()
{
	Logger::getLogger().info("~Button()");
}

Button::Button(const Button & btn)
{
	Logger::getLogger().info("Button(Button)");
	state = btn.state;
}

