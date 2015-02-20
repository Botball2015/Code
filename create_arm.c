// Created on Fri February 20 2015

int main()
{
	enable_servos();
	set_servo_position(0,1550);
	msleep(1000);
	clear_motor_position_counter(0);
	motor(0,250);
	msleep(3500);
	disable_servos();
	return 0;
}
