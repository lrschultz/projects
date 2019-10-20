when(STARTED){
	wait(1, seconds);
	
	LeftMotor.setVelocity(50, percent);
	RightMotor.setVelocity(50, percent);
	
	LeftMotor.spin(forward);
	RightMotor.spin(reverse);
	wait(30, seconds);
	
	LeftMotor.stop();
	RightMotor.stop();
	
  wait(30, seconds);
	
	LeftMotor.spin(reverse);
	RightMotor.spin(forward);
	wait(45, seconds);
	
	LeftMotor.stop();
	RightMotor.stop();
}
	