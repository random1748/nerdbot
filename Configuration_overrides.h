/**
 * Nerdbot Configuration Overrides
 * Marlin 2.1.3-b3
 * Ender-3 V2 + Creality 4.2.7 + BLTouch (PB1) + BIQU H2 V2S
 */

#pragma once

// ---------------------------
// Machine Identity
// ---------------------------
#define CUSTOM_MACHINE_NAME "nerdbot"
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define CUSTOM_STATUS_SCREEN_IMAGE

// ---------------------------
// Board & Extruder
// ---------------------------
#define MOTHERBOARD BOARD_CREALITY_V4
#define EXTRUDERS 1
#define TEMP_SENSOR_0 5          // BIQU H2V2S (adjust if PT1000 vs Semitec)
#define TEMP_SENSOR_BED 1
#define HEATER_0_MAXTEMP 275
#define DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 400, 932 }  // X, Y, Z, E

// ---------------------------
// Probe / BLTouch
// ---------------------------
#define BLTOUCH
#define Z_MIN_PROBE_PIN PB1
#define NOZZLE_TO_PROBE_OFFSET { -34, -2, 0 }
#define USE_PROBE_FOR_Z_HOMING
#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT (X_BED_SIZE / 2)
#define Z_SAFE_HOMING_Y_POINT (Y_BED_SIZE / 2)

// ---------------------------
// Bed Leveling
// ---------------------------
#define AUTO_BED_LEVELING_UBL
#define RESTORE_LEVELING_AFTER_G28
#define ENABLE_LEVELING_FADE_HEIGHT
#define UBL_SAVE_ACTIVE_ON_M500
#define G26_MESH_VALIDATION

// ---------------------------
// Motion / Calibration
// ---------------------------
#define S_CURVE_ACCELERATION
#define DEFAULT_MAX_FEEDRATE { 200, 200, 10, 25 }   // X, Y, Z, E
#define DEFAULT_MAX_ACCELERATION { 1000, 1000, 100, 2000 }
#define DEFAULT_ACCELERATION 1000
#define DEFAULT_TRAVEL_ACCELERATION 1200
#define DEFAULT_RETRACT_ACCELERATION 2500
#define JUNCTION_DEVIATION_MM 0.08

// Input Shaping (tune with test prints)
#define INPUT_SHAPING_X
#define INPUT_SHAPING_Y
#define SHAPING_FREQ_X 40.0
#define SHAPING_FREQ_Y 40.0
#define SHAPING_DAMPING_X 0.1
#define SHAPING_DAMPING_Y 0.1

// Linear Advance (tune K with test pattern)
#define LIN_ADVANCE
#define LIN_ADVANCE_K 0.05

// ---------------------------
// Quality of Life
// ---------------------------
#define EEPROM_SETTINGS
#define EEPROM_AUTO_INIT
#define BABYSTEPPING
#define NOZZLE_PARK_FEATURE
#define ADVANCED_PAUSE_FEATURE
#define ARC_SUPPORT
#define FWRETRACT
#define SDCARD_SORT_ALPHA
#define SPEAKER
#define LCD_BED_TRAMMING
#define LCD_BED_LEVELING
