#include "gtest/gtest.h"
#include "../src/models/free_fall_simulation.h"

class FreeFallSimulationTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Code here will be called immediately after the constructor (right before each test)
    }

    void TearDown() override {
        // Code here will be called immediately after each test (right before the destructor)
    }
};

TEST_F(FreeFallSimulationTest, TestSimulationStopsAtZeroPosition) {
    FreeFallSimulation simulation(0.1, 10.0); // Initializing with time step = 0.1s and initial height = 10m
    simulation.run();
    
    // Verifying that the final position is zero or less
    EXPECT_LE(simulation.getPosition(), 0.0);
}