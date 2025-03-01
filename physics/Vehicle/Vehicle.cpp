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
Vehicle::Vehicle() : brakeForce(0), vehicleMass(0), vehicleVelocity(0), vehicleAcceleration(0), vehicleDeceleration(0) {}

void Vehicle::calculateBrakeForce(float velocity, float time) {
	float deceleration = (0 - velocity) / time;
	float brakeForce = Vehicle::vehicleMass * deceleration;
	Vehicle::vehicleDeceleration = deceleration;
	Vehicle::brakeForce = brakeForce;
}

void Vehicle::calculateVelocity(float initialVelocity, float time) {
	Vehicle::vehicleAcceleration = initialVelocity + (Vehicle::vehicleAcceleration * time);
}

void Vehicle::calculateAcceleration(float initialVelocity, float finalVelocity, float time){
	Vehicle::vehicleAcceleration = (finalVelocity - initialVelocity) / time
}

void Vehicle::calculateDeceleration(float initialVelocity, float finalVelocity, float time){
	Vehicle::vehicleDeceleration = (finalVelocity - initialVelocity) / time;
}

/// Calculates the momentum of the vehicle based on its mass and velocity.
/// @param mass The mass of the vehicle.
/// @param velocity The current velocity of the vehicle.
void Vehicle::calculateVehicleMomentum(){
	Vehicle::vehicleMomentum = Vehicle::vehicleMass * Vehicle::vehicleVelocity;
}

void Vehicle::calculateVehicleCollision(){
	Vehicle::vehicleCollisionForce = Vehicle::vehicleMass * Vehicle::vehicleAcceleration;
}

void Vehicle::calculateVehicleMass(float mass){
	Vehicle:vehicleMass = mass;
}
