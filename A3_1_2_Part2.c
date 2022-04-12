#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           ServoMotor,    tmotorServoStandard, openLoop)
/*
  Project Title:
  Team Members:
  Date:
  Section:


  Task Description:


  Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces

	//Turn the rightMotor on forward at half speed for 5 seconds.
	startMotor(rightMotor, 127);
	startMotor(leftMotor, 127);

	wait(5);
	stopMotor(rightMotor);
	stopMotor(leftMotor);

  wait(2);
	startMotor(leftMotor,-127);
	motor[rightMotor]=-127;
	wait(5);
//	wait(5);
//	startMotor(leftMotor, -127);

}
