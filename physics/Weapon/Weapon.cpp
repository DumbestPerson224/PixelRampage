#include "Weapon.h";
WeaponPhysics::WeaponPhysics() : weaponMass(0), weaponVelocity(0), weaponAcceleration(0), weaponMomentum(0), weaponForce(0) {};
void WeaponPhysics::calculateWeaponAcceleration(float initialVelocity, float finalVelocity, float time){
    WeaponPhysics::weaponAcceleration = (finalVelocity - initialVelocity) / time;
}
