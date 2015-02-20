// Created on Fri Feb 20 and tested
void turnRight(double angle);
void turnLeft(double angle);
void moveForward(float distance, int speed); // create moves in cetimeters and cetimeters per second
void moveBackward(float distance, int speed);
#define clear_motor_position_counter CLEAR
#define get_motor_position_counter GET


int main()
{
	create_connect();
	moveForward(20.0,100);
	turnRight(90.0);
    moveBackward(20.0,100);
  	turnLeft(90.0);
	create_disconnect();
	return 0;
}
//How much the create turns is directly proportional to the multiplier in the if statement
void turnRight(double angle){
	set_create_total_angle(0);
    while(1){
    	if(get_create_total_angle()>-angle*0.9){
        	create_drive_direct(50,-50);
   		 msleep(1);
    	}
    	else{
        	break;
    	}
    	msleep(10);
    	printf("angle : %d\n", get_create_total_angle());
	}
}

void turnLeft(double angle){
	set_create_total_angle(0);
    while(1){
    	if(get_create_total_angle()<angle*0.9){
        	create_drive_direct(-50,50);
   		 msleep(1);
    	}
    	else{
        	break;
    	}
    	msleep(10);
    	printf("angle : %d\n", get_create_total_angle());
	}
}

void moveForward(float distance, int speed){
	distance *= 10.0;
	float time = distance/speed*1000;
	printf("time : %g\n", time);
	create_drive_direct(speed,speed);
	msleep(time);
}

void moveBackward(float distance, int speed){
	distance *= 10.0;
	create_drive_direct(-speed,-speed);
	msleep((distance/speed)*1000);
}
