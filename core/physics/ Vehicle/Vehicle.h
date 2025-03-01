/**
 * Represents a vehicle with various physical properties and methods to calculate vehicle dynamics.
 */
#ifndef VEHICLE_H
#define VEHICLE_H

namespace VehicleEngine {
    class Physics {
    private:
        float vehicleDensity, vehicleVolume, vehicleAcceleration, vehicleDeceleration, brakeForce, vehicleMass, vehicleVelocity, vehicleMomentum, vehicleCollisionForce;
    public:
        Physics() : vehicleDensity(0), vehicleVolume(0), brakeForce(0), vehicleMass(0), vehicleVelocity(0), vehicleAcceleration(0), vehicleDeceleration(0), vehicleCollisionForce(0) {}
        /**
         * Constructs a new instance of the Vehicle class.
         */

         /**
          * Calculates the brake force applied to the vehicle based on its current velocity and the time elapsed.
          * @param velocity The current velocity of the vehicle.
          * @param time The time elapsed.
          */
        void calculateBrakeForce(float velocity, float time);

        /**
         * Calculates the velocity of the vehicle based on its initial velocity and the time elapsed.
         * @param initialVelocity The initial velocity of the vehicle.
         * @param time The time elapsed.
         */
        void calculateVelocity(float initialVelocity, float time);

        /**
         * Calculates the acceleration of the vehicle based on its initial velocity, final velocity, and the time elapsed.
         * @param initialVelocity The initial velocity of the vehicle.
         * @param finalVelocity The final velocity of the vehicle.
         * @param time The time elapsed.
         */
        void calculateAcceleration(float initialVelocity, float finalVelocity, float time);

        /**
         * Calculates the deceleration of the vehicle based on its initial velocity, final velocity, and the time elapsed.
         * @param initialVelocity The initial velocity of the vehicle.
         * @param finalVelocity The final velocity of the vehicle.
         * @param time The time elapsed.
         */
        void calculateDeceleration(float initialVelocity, float finalVelocity, float time);

        /**
         * Calculates the momentum of the vehicle based on its mass and velocity.
         * @param mass The mass of the vehicle.
         * @param velocity The velocity of the vehicle.
         */
        void calculateVehicleMomentum();
        void calculateVehicleCollisionForce();
        void calculateVehicleMass(float density, float volume);
    };
}
#endif
