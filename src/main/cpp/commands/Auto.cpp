// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include <frc2/command/WaitCommand.h>
#include <frc2/command/CommandPtr.h>

#include "commands/Auto.h"
#include "commands/Drive.h"
#include "Constants.h"

Auto::Auto(DriveSubsystem* drive, WristSubsystem* wrist, ArmSubsystem* arm, GrabberSubsystem* grabber) {
    /*AddCommands(
        Drive(drive, 1_mps, 0_mps, (units::radians_per_second_t) 0, true),
        frc2::WaitCommand(3_s),
        Drive(drive, 0_mps, 0_mps, (units::radians_per_second_t) 0, true)
    );*/
}
