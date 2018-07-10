// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVEPID_H
#define DRIVEPID_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"
#include "ctre/Phoenix.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DrivePID: public frc::PIDSubsystem {
 public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<frc::Encoder> leftEncoder;
	std::shared_ptr<frc::Encoder> rightEncoder;
	std::shared_ptr<WPI_TalonSRX> left1;
	std::shared_ptr<WPI_TalonSRX> left2;
	std::shared_ptr<WPI_TalonSRX> left3;
	std::shared_ptr<frc::SpeedControllerGroup> left;
	std::shared_ptr<WPI_TalonSRX> right1;
	std::shared_ptr<WPI_TalonSRX> right2;
	std::shared_ptr<WPI_TalonSRX> right3;
	std::shared_ptr<frc::SpeedControllerGroup> right;
	std::shared_ptr<frc::DifferentialDrive> differentialDrive1;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	DrivePID();
	double ReturnPIDInput() override;
	void UsePIDOutput(double output) override;
	void InitDefaultCommand() override;
	void TankDrive(double leftJS, double rightJS);
	void ArcadeDrive(double leftJS, double rightJS);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
