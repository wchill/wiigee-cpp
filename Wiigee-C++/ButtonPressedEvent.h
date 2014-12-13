#ifndef BUTTON_PRESS_EVENT_H
#define BUTTON_PRESS_EVENT_H

#include "Device.h"

class ButtonPressedEvent {
private:
	int button;
public:
	ButtonPressedEvent(Device source, int button);
	int getButton();
};

#endif