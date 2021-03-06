#pragma once

#include "software/ai/intent/direct_primitive_intent.h"

class StopIntent : public DirectPrimitiveIntent
{
   public:
    /**
     * Creates a new Stop Intent
     *
     * Stops the robot with the option to coast to a stop rather than stop immediately
     *
     * @param robot_id The id of the Robot to run this Primitive
     * @param coast to coast to a stop or not
     * @param priority The priority of this Intent. A larger number indicates a higher
     * priority
     */
    explicit StopIntent(unsigned int robot_id, bool coast, unsigned int priority);
};
