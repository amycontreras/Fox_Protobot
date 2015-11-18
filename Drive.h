#include "Macros.h"

void setDriveMotors(int right, int left)
{
	motor[left_drive_motor] = left;
	motor[right_drive_motor] = right;
}

void drive()
{
	if(abs(driveY) > DEADZONE)
	{
		setDriveMotors(-driveY, -driveY);
	}
	else if(abs(driveX) > DEADZONE)
	{
		setDriveMotors(driveX, -driveX);
	}
	else
	{
		setDriveMotors(0, 0);
	}
}

void arm()
{
	if(vexRT[Btn5U] == 1)
	{
		motor[arm_motor] = 63;
	}
	else if(vexRT[Btn5D] == 0)
	{
		motor[arm_motor] = 0;
	}
	else if(vexRT[Btn5D] == 1)
	{
		motor[arm_motor] = -63;
	}
	else if(vexRT[Btn5U] == 0)
	{
		motor[arm_motor] = 0;
	}
}

void claw()
{
	if(vexRT[Btn6U] == 1)
	{
		motor[claw_motor] = -80;
	}
	else if(vexRT[Btn6D] == 1)
	{
		motor[claw_motor] = 80;
	}
	else
	{
		motor[claw_motor] = 0;
	}
}

void updateDrive()
{
	drive();
	arm();
	claw();
}
