#ifndef WEAPON_H
#define WEAPON_H
class WeaponPhysics{
    private:
          float weaponMass, weaponVelocity, weaponAcceleration, weaponMomentum, weaponForce;
    public:
           WeaponPhysics();
           void calculateWeaponForce(float velocity, float time);
           void calculateWeaponVelocity(float initialVelocity, float time);
           void calculateWeaponAcceleration(float initialVelocity, float finalVelocity, float time);
           void calculateWeaponMomentum(float mass, float velocity);
           void calculateWeaponMass(float mass);
};
#endif
