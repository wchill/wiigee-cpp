#ifndef BUTTON_LISTEN_H
#define BUTTON_LISTEN_H

class ButtonListener {
public:
	virtual void buttonPressReceived(ButtonPressedEvent event) = 0;
	virtual void buttonReleaseReceived(ButtonReleasedEvent event) = 0;
};

#endif