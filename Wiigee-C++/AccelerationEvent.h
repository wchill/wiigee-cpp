#ifndef ACCEL_EVENT_H
#define ACCEL_EVENT_H

class AccelerationEvent {
private:
	double x, y, z;
	double absvalue;
public:
	AccelerationEvent(Device source, double X, double Y, double Z, double absvalue);
	double getX();
	double getY();
	double getZ();
	double getAbsValue();
};

#endif