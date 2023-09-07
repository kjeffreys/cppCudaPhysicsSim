#include "free_fall_simulation.h"

/**
 * @brief Constructs a FreeFallSimulation object.
 * 
 * @param dt Time step for the simulation (in seconds).
 * @param initial_height Initial height from which the object is falling (in meters).
 */
FreeFallSimulation::FreeFallSimulation(double dt, double initial_height)
    : Simulation(dt), position(initial_height), timeStep(dt) {}

/**
 * @brief Runs the simulation until the object hits the ground (position reaches zero or below).
 */
void FreeFallSimulation::run() {
    while (position > 0) {
        updateState();
    }
}

/**
 * @brief Updates the state of the simulation at each time step.
 * 
 * This method calculates the new position of the object at each time step 
 * based on the current velocity and acceleration due to gravity.
 */
void FreeFallSimulation::updateState() {
    double velocity = gravity * currentTime;
    position -= velocity * timeStep;
    currentTime += timeStep;
}