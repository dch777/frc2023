// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <units/velocity.h>
#include <math.h>

namespace OIConstants {
constexpr int driverController = 0;
constexpr int shooterController = 1;

constexpr int LX = 0;
constexpr int LY = 1;
constexpr int RX = 4;
constexpr int RY = 5;

constexpr int A = 1;
constexpr int B = 2;
constexpr int X = 3;
constexpr int Y = 4;

constexpr int LB = 5;
constexpr int RB = 6;
constexpr int LT = 2;
constexpr int RT = 3;

constexpr int LPress = 9;
constexpr int RPress = 10;
}  // namespace OIConstants

namespace SwerveConstants {
namespace frontLeftModule {
constexpr int drivingMotorID = 2;
constexpr int turningMotorID = 9;
constexpr int encoderID = 3;
constexpr double offset = 0;
}  // namespace frontLeftModule
namespace backLeftModule {
constexpr int drivingMotorID = 3;
constexpr int turningMotorID = 4;
constexpr int encoderID = 2;
constexpr double offset = 7.774604;
}  // namespace backLeftModule
namespace backRightModule {
constexpr int drivingMotorID = 8;
constexpr int turningMotorID = 7;
constexpr int encoderID = 1;
constexpr double offset = -5.066090;
}  // namespace backRightModule
namespace frontRightModule {
constexpr int drivingMotorID = 5;
constexpr int turningMotorID = 6;
constexpr int encoderID = 0;
constexpr double offset = -1.841274;
}  // namespace frontRightModule

constexpr units::meters_per_second_t maxSpeed = 1.5_mps;
constexpr double turningRatio = 12.8;
constexpr units::inch_t centerDistance = 10.5_in;

constexpr double kFF = 0.005;
constexpr double kP = 0.425;
constexpr double kI = 0;
constexpr double kD = 0.005;
}  // namespace SwerveConstants

namespace WristConstants {
constexpr int wristMotorID = 11;
constexpr double kP = 0.1;
constexpr double kI = 0.0;
constexpr double kD = 0.0;
constexpr double maxSpeed = 0.75;
constexpr double minSpeed = -0.75;
} // namespace WristConstants

namespace ArmConstants {
constexpr int armMotorID = 12;
constexpr double kP = 0.1;
constexpr double kI = 0.0;
constexpr double kD = 0.0;
constexpr double maxSpeed = 0.75;
constexpr double minSpeed = -0.75;
} // namespace ArmConstants

namespace GrabberConstants {
constexpr int grabberMotorID = 10;
constexpr double kP = 0.1;
constexpr double kI = 0.0;
constexpr double kD = 0.0;
constexpr double maxSpeed = 0.75;
constexpr double minSpeed = -0.75;
} // namespace ArmConstants

namespace PoseConstants {
namespace InitialPose {
    constexpr double armRotations = 0;
    constexpr double wristRotations = 0;
}
namespace GroundPose {
    constexpr double armRotations = 0;
    constexpr double wristRotations = 174.350250;
}
namespace MidCube {
    constexpr double armRotations = 91.289627;
    constexpr double wristRotations = 244.245911;
}
namespace HumanConeLoader {
    constexpr double armRotations = 85;
    constexpr double wristRotations = 162;
}
} // namespace PoseConstants