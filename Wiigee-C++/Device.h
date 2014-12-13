#ifndef DEVICE_H
#define DEVICE_H

#include "Filter.h"
#include "AccelerationListener.h"
#include "ButtonListener.h"
#include "GestureListener.h"
#include "ProcessingUnit.h"
#include <vector>

class Device {
protected:
	int recognitionButton;
	int trainButton;
	int closegestureButton;
	bool accelerationEnabled;
	std::vector<Filter> accFilters;
	std::vector<AccelerationListener> accelerationListener;
	std::vector<ButtonListener> buttonListener;
	ProcessingUnit processingunit;

public:
	static const int MOTION = 0;
	Device(bool autoFiltering);
	void addAccelerationFilter(Filter filter);
	void resetAccelerationFilters();
	void addAccelerationListener(AccelerationListener listener);
	void addButtonListener(ButtonListener listener);
	void addGestureListener(GestureListener listener);
	int getRecognitionButton();
	void setRecognitionButton(int b);
	int getTrainButton();
	void setTrainButton(int b);
	int getCloseGestureButton();
	void setCloseGestureButton(int b);
	ProcessingUnit getProcessingUnit();
	void setAccelerationEnabled(bool enabled);
	void loadGesture(std::string filename);
	void saveGesture(int id, std::string filename);
	void fireAccelerationEvent(double* vector);
	void fireButtonPressedEvent(int button);
	void fireButtonReleasedEvent(int button);
	void fireMotionStartEvent();
	void fireMotionStopEvent();
};

#endif