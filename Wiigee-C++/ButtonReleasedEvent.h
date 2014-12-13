#ifndef BUTTON_RELEASE_H
#define BUTTON_RELEASE_H
#include "Device.h"
#include "ActionStopEvent.h"
class ButtonReleasedEvent : public ActionStopEvent {
private:
	int button;
public:
	ButtonReleasedEvent(Device source, int button);
};
#endif