#include "Weapon.h";
WeaponPhysics::WeaponPhysics() : weaponMass(0), weaponVelocity(0), weaponAcceleration(0), weaponMomentum(0), weaponForce(0) {};
void WeaponPhysics::calculateWeaponAcceleration(float initialVelocity, float finalVelocity, float time){
    WeaponPhysics::weaponAcceleration = (finalVelocity - initialVelocity) / time;
}

void WeaponPhysics::calculateWeaponVelocity(float initialVelocity, float time){
    WeaponPhysics::weaponVelocity = initialVelocity + (WeaponPhysics::weaponAcceleration * time);
}

void WeaponPhysics::calculateWeaponMomentum(float mass, float velocity){
    weaponPhysics::weaponMomentum = mass * velocity;
}

void WeaponPhysics::calculateWeaponForce(float mass, float acceleration){
    weaponPhysics::weaponForce = mass * acceleration;
}

void WeaponPhysics::CalculateWeaponMass(float mass){
    weaponPhyiscs::weaponMass = mass;
}

