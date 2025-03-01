#ifndef WEAPON_H
#define WEAPON_H
namespace WeaponEngine {
    class WeaponPhysics {
    private:
        float weaponMass, weaponVelocity, weaponAcceleration, weaponMomentum, weaponForce, weaponDeceleration, weaponVolume, weaponDensity;
    public:
        WeaponPhysics();
        void calculateWeaponForce(float velocity, float time);
        void calculateWeaponVelocity(float initialVelocity, float time);
        void calculateWeaponAcceleration(float initialVelocity, float finalVelocity, float time);
        void calculateWeaponDeceleration(float initialVelocity, float finalVelocity, float time);
        void calculateWeaponMomentum(float mass, float velocity);
        void calculateWeaponMass(float density, float volume);
    };
}
 
#endif
