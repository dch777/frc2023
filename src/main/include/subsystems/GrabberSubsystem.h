// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "rev/CANSparkMax.h"
#include "ctre/Phoenix.h"

#include "Constants.h"

using namespace GrabberConstants;

class GrabberSubsystem : public frc2::SubsystemBase {
 public:
  GrabberSubsystem();

  void Periodic() override;

  void SetSpeed(double speed);
 private:
  ctre::phoenix::motorcontrol::can::VictorSPX m_grabberMotor;
};
