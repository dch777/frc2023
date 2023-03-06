// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/DriveSubsystem.h"

class Drive
    : public frc2::CommandHelper<frc2::CommandBase, Drive> {
 public:
  explicit Drive(DriveSubsystem* arm, units::meters_per_second_t xSpeed, 
                units::meters_per_second_t ySpeed, units::radians_per_second_t rot, 
                bool fieldCentric);

  void Initialize() override;
  void Execute() override;
  void End(bool interrupted) override;

 private:
  DriveSubsystem* m_drive;
  units::meters_per_second_t m_xSpeed;
  units::meters_per_second_t m_ySpeed;
  units::radians_per_second_t m_rot;
  bool m_fieldCentric;
};