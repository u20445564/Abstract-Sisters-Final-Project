#ifndef PLANTDECORATOR_H
#define PLANTDECORATOR_H

#include "PlantType.h"
#include <iostream>

class PlantDecorator {
protected:
    PlantType* decoratedPlant;  // Aggregation (not ownership)

public:
    // The decorator does not own the plant — it just references it
    PlantDecorator(PlantType* plant) : decoratedPlant(plant) {}

    virtual ~PlantDecorator() {}  // No deletion here, since it doesn't own the object

    virtual void decorate() {
        if (this->decoratedPlant)
            this->decoratedPlant->decorate();
    }

};

#endif

