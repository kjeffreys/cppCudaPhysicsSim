// simulation.h
#ifndef SIMULATION_H
#define SIMULATION_H

/**
 * @brief An abstract base class representing a generic simulation.
 * 
 * This class provides a basic structure for different simulations. Derived classes must 
 * implement the run() method to define the behavior of the simulation.
 */
class Simulation {
public:
    /**
     * @brief Constructs a Simulation object with a specified time step.
     * 
     * @param dt The time step for the simulation (in seconds).
     */
    explicit Simulation(double dt) : dt(dt) {}

    /**
     * @brief Virtual destructor to allow for proper deletion of derived class objects.
     */
    virtual ~Simulation() = default;

    /**
     * @brief A pure virtual method to run the simulation.
     * 
     * Derived classes must implement this method to define the behavior of the simulation.
     */
    virtual void run() = 0;

protected:
    double dt; ///< The time step for the simulation (in seconds).
};

#endif // SIMULATION_H
