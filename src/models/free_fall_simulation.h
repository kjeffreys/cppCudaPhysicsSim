// free_fall_simulation.h
#ifndef FREE_FALL_SIMULATION_H
#define FREE_FALL_SIMULATION_H

#include "../core/simulation.h"
#include "../utils/logger.h"

/**
 * @brief A class that simulates the free fall motion of an object.
 * 
 * This class is a child of the Simulation class and overrides the run method 
 * to simulate free fall motion. It contains methods to get the position of the 
 * object at any time and to update the state of the object at each time step.
 */
class FreeFallSimulation : public Simulation {
public:
    /**
     * @brief Constructs a FreeFallSimulation object with a given time step and initial height.
     * 
     * @param dt Time step for the simulation (in seconds).
     * @param initial_height Initial height from which the object is falling (in meters).
     */
    FreeFallSimulation(double dt, double initial_height);

    /**
     * @brief Runs the simulation until the object hits the ground (position reaches zero or below).
     */
    void run() override;

    /**
     * @brief Retrieves the current position of the falling object.
     * 
     * @return The current position of the object (in meters).
     */
    double getPosition() const { return position; }

private:
    double position; ///< Current position of the object (in meters).
    const double gravity = 9.81; ///< Acceleration due to gravity (in meters per second squared).
    double currentTime = 0.0; ///< Current time in the simulation (in seconds).
    double timeStep; ///< Time step for the simulation (in seconds).

    /**
     * @brief Updates the state of the simulation at each time step.
     * 
     * This method calculates the new position of the object at each time step 
     * based on the current velocity and acceleration due to gravity.
     */
    void updateState();
};

#endif // FREE_FALL_SIMULATION_H