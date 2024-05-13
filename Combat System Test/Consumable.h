#pragma once
#include "Item.h"

    class Consumable : public Item {
    private:
        const char* effect;

    public:
        Consumable(const char* name, const char* type, int value, const char* description, const char* effect);
        ~Consumable();

        const char* getEffect() const;
        void setEffect(const char* effect);

        void Display() const override;
    };
