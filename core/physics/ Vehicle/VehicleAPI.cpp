/// Includes the header file for the Vehicle class.
/// 
/// Vehicle class implementation providing physics calculations for vehicle dynamics.
/// Constructor initializes all vehicle properties to zero.
///
/// @brief Calculates brake force based on velocity and time
/// @param velocity The current velocity of the vehicle
/// @param time The time period for braking
///
/// @brief Calculates new velocity based on initial velocity and acceleration over time
/// @param initialVelocity Starting velocity of the vehicle
/// @param time Duration of acceleration
///
/// @brief Calculates acceleration between two velocity points
/// @param initialVelocity Starting velocity of the vehicle
/// @param finalVelocity Ending velocity of the vehicle
/// @param time Duration of acceleration
///
/// @brief Calculates deceleration between two velocity points
/// @param initialVelocity Starting velocity of the vehicle
/// @param finalVelocity Ending velocity of the vehicle
/// @param time Duration of deceleration
///
/// @brief Calculates the momentum of the vehicle based on its mass and velocity
/// @param mass The mass of the vehicle
/// @param velocity The current velocity of the vehicle
#include "Vehicle.h"
using namespace VehicleEngine;

void VehicleEngine::Physics::calculateBrakeForce(float velocity, float time) {
	float deceleration = (0 - velocity) / time;
	float brakeForce = VehicleEngine::Physics::vehicleMass * deceleration;
	VehicleEngine::Physics::vehicleDeceleration = deceleration;
	VehicleEngine::Physics::brakeForce = brakeForce;
}

// Calculates the velocity of the vehicle based on the original velocity and time
void VehicleEngine:: Physics::calculateVelocity(float initialVelocity, float time) {
	VehicleEngine::Physics::vehicleVelocity = initialVelocity + (Physics::vehicleAcceleration * time);
}

// Calculates the acceleration of the vehicle
void VehicleEngine::Physics::calculateAcceleration(float initialVelocity, float finalVelocity, float time) {
	VehicleEngine::Physics::vehicleAcceleration = (finalVelocity - initialVelocity / time);
}

// Calculates the deceleration of the vehicle
void VehicleEngine::Physics::calculateDeceleration(float initialVelocity, float finalVelocity, float time) {
	VehicleEngine::Physics::vehicleDeceleration = (finalVelocity - initialVelocity) / time;
}

/// Calculates the momentum of the vehicle based on its mass and velocity.
/// @param mass The mass of the vehicle.
/// @param velocity The current velocity of the vehicle.
void VehicleEngine::Physics::calculateVehicleMomentum() {
	VehicleEngine::Physics::vehicleMomentum = VehicleEngine::Physics::vehicleMass + VehicleEngine::Physics::vehicleVelocity;
}

// Calculates the collision force of the vehicle
void VehicleEngine::Physics::calculateVehicleCollisionForce() {
	VehicleEngine::Physics::vehicleCollisionForce = VehicleEngine::Physics::vehicleMass * VehicleEngine::Physics::vehicleAcceleration;
}

// Sets up the vehicle's mass
void VehicleEngine::Physics::calculateVehicleMass(float density, float volume) {
	VehicleEngine::Physics::vehicleMass = density * volume;
}

void VehicleEngine::Physics::calculateFriction(float force, float mass, float acceleration, float rotation, float mu){
	/*
	Force = mass * acceleration + mu * rotation
 	Force = Force - mu = mass * acceleration
  	Force = mass * acceleration + mu * rotation;
	*/
}
