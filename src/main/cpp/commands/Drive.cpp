// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Drive.h"

#include "Constants.h"

Drive::Drive(DriveSubsystem* drive, units::meters_per_second_t xSpeed, 
            units::meters_per_second_t ySpeed, units::radians_per_second_t rot, 
            bool fieldCentric)
    : m_drive(drive), m_xSpeed(xSpeed), m_ySpeed(ySpeed), m_rot(rot), m_fieldCentric(fieldCentric) {
  AddRequirements(drive);
}

void Drive::Initialize() {
  m_drive->Drive(m_xSpeed, m_ySpeed, m_rot, m_fieldCentric);
}

void Drive::Execute() {}

void Drive::End(bool interrupted) {}