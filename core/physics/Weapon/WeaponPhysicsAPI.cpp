#include "WeaponPhysics.h";
using namespace WeaponEngine;
WeaponEngine::WeaponPhysics::WeaponPhysics() : weaponDeceleration(0), weaponMass(0), weaponVelocity(0), weaponAcceleration(0), weaponMomentum(0), weaponForce(0),  weaponDensity(0) {};
// Calculates the acceleration of the weapon
void WeaponEngine::WeaponPhysics::calculateWeaponAcceleration(float initialVelocity, float finalVelocity, float time) {
    WeaponEngine::WeaponPhysics::weaponAcceleration = (finalVelocity - initialVelocity) / time;
}

// Calculates the velocity of the weapon
void WeaponEngine::WeaponPhysics::calculateWeaponVelocity(float initialVelocity, float time) {
    WeaponEngine::WeaponPhysics::weaponVelocity = initialVelocity + (WeaponEngine::WeaponPhysics::weaponAcceleration * time);
}

// Calculates the deceleration of the weapon
void WeaponEngine::WeaponPhysics::calculateWeaponDeceleration(float initialVelocity, float finalVelocity, float time) {
    WeaponEngine::WeaponPhysics::weaponDeceleration = (finalVelocity - initialVelocity) / time;
}

// Calculates the mass of the weapon
void WeaponEngine::WeaponPhysics::calculateWeaponMass(float density, float volume) {
    WeaponEngine::WeaponPhysics::weaponDensity = density * volume;
}
