#ifndef ACTION_START_EVENT_H
#define ACTION_START_EVENT_H
#include "EventObject.h"
class ActionStartEvent : public EventObject {
protected:
	bool trainButton;
	bool recognitionButton;
	bool closeGestureButton;
public:
	bool isRecognitionInitEvent();
	bool isTrainInitEvent();
	bool isCloseGestureInitEvent();
};

#endif