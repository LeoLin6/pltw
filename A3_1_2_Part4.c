#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
/*
  Project Title:
  Team Members:
  Date:
  Section:


  Task Description:


  Pseudocode:

*/

task main()
{  //Program begins, insert code within curly braces
	setServo(servoMotor, -127);
	wait(2);
	//Go to position –63 for 3 seconds.
	setServo(servoMotor, -63);
	wait(3);
	//Go to position 0 for 2 seconds.
	setServo(servoMotor, 0);
	wait(2);
	//Go position 63 for 3 seconds.
	setServo(servoMotor, 63);
	wait(3);
	//Go to position 127 for 2 seconds.
	setServo(servoMotor, 127);
	wait(2);
}
