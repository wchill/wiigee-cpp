#ifndef ACCEL_LISTEN_H
#define ACCEL_LISTEN_H

class AccelerationListener {
public:
	virtual void accelerationReceived(AccelerationEvent event) = 0;
	virtual void motionStartReceived(MotionStartEvent event) = 0;
	virtual void motionStopReceived(MotionStopEvent event) = 0;
};

#endif