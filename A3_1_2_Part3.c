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
	startMotor(rightMotor, 63.5);
	wait(5);
	stopMotor(rightMotor);
	startMotor(leftMotor,-95.25);
	wait(2.5);
	stopMotor(leftMotor);
	//both motor full power
	startMotor(leftMotor,127);
  startMotor(rightMotor,127);
  wait(7.25);
  stopMotor(leftMotor);
  stopMotor(rightMotor);
}
