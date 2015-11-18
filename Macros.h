int driveY = 0;
int DEADZONE = 15;
int driveX = 0;

void updateOI()
{
	driveX = vexRT[Ch2];
	driveY = vexRT[Ch4];
}
