// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "CenterLeft.h"
#include "SetAngle.h"
#include "AutoDistance.h"
#include "AutoRotate.h"
#include "AutoDriveTimed.h"
#include "SetIntake.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

CenterLeft::CenterLeft() {

	//Drive forward to switch
		AddParallel(new SetAngle(75));
		AddSequential(new AutoDistance(-10, -0.8, 0));
		AddSequential(new AutoRotate(-40));
		AddSequential(new AutoDistance(-120, -.8, -40));

		//Prepare and place cube

		AddSequential(new AutoRotate(0));
		AddSequential(new AutoDriveTimed(-0.5, 0, .5));
		AddSequential(new SetIntake(.7, .5));

		//Back up and drive to cube
		AddSequential(new AutoRotate(-40));

		AddParallel(new SetAngle(0));
		AddSequential(new AutoDistance(100, 0.8, -40));
		AddSequential(new AutoRotate(0));

		//Acquire cube
		AddSequential(new AutoDistance(-40, -0.5, 0, true));
		AddParallel(new SetIntake(-.7, .5));

		//Drive to switch
		AddSequential(new AutoRotate(-40));
		AddParallel(new SetAngle(70));
		AddSequential(new AutoDistance(-100, -0.8, -40));

		//Place cube
		AddSequential(new AutoDriveTimed(-0.3, 0, 1.25));
		AddSequential(new SetIntake(.7, .5));


}
