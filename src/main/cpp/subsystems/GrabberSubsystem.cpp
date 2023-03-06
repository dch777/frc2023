// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include <frc/smartdashboard/SmartDashboard.h>
#include <math.h>

#include "subsystems/GrabberSubsystem.h"
#include "Constants.h"

using namespace GrabberConstants;

GrabberSubsystem::GrabberSubsystem()
    : m_grabberMotor{grabberMotorID} {}


void GrabberSubsystem::Periodic() {}

void GrabberSubsystem::SetSpeed(double speed) {
    m_grabberMotor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, speed);
}