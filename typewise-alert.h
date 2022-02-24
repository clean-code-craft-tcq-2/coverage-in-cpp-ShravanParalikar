#pragma once

#include "Types.h"

bool sendAlertToController(BreachType breachType);
bool sendAlertToEmail(BreachType breachType);

BreachType inferBreach(double value, Limit thresholdLimits);
BreachType classifyTemperatureBreach(CoolingType coolingType, double temperatureInC);

void checkAndAlert(AlertTarget alertTarget, BatteryCharacter batteryChar, double temperatureInC);
