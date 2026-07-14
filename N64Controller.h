#ifndef N64CONTROLLER_H
#define N64CONTROLLER_H

class N64Controller
{
  public:
	bool startButton;
	bool dPadUp;
	bool dPadDown;
	bool dPadLeft;
	bool dPadRight;
	bool zTrigger;
	bool leftBumper;
	bool rightBumper;
	bool aButton;
	bool bButton;
	bool cLeft;
	bool cRight;
	bool cUp;
	bool cDown;

	enum joystick
	{
		CENTER,
		FORWARD,
		LEFT,
		RIGHT,
		BACK,
		LEFT_FORWARD,
		RIGHT_FORWARD,
		BACK_LEFT,
		BACK_RIGHT
	};
};

#endif // N64CONTROLLER_H
