# Nerdbot
Ender 3 4.2.7 firmware configuration files for marlin 2.1.x that include input shaping, firmware retraction, BLtouch, a BQ H2V2 extruder, dual z screws, and UBL auto bed leveling
# Overview
## 📏 Motion & Calibration

[ ] Steps/mm: Calibrate X, Y, Z, and E with M92 and M500.

[ ] Max feedrates: M203 X200 Y200 Z10 E25

[ ] Accelerations: M201 and M204 tuned for stiffer springs and new motors.

[ ] Junction deviation: M205 J0.08 as a starting point.

[ ] Input shaping: Enable M593, calibrate with resonance test prints.

[ ] Linear advance: Enable LIN_ADVANCE, tune M900 K with calibration pattern.

## 🔍 Probing & Bed Leveling

[ ] BLTouch:

#define BLTOUCH

#define NOZZLE_TO_PROBE_OFFSET { -34, -2, 0 }

#define USE_PROBE_FOR_Z_HOMING

[ ] UBL leveling:

#define AUTO_BED_LEVELING_UBL

#define Z_SAFE_HOMING

#define UBL_SAVE_ACTIVE_ON_M500

#define G26_MESH_VALIDATION

[ ] EEPROM:

#define EEPROM_SETTINGS

#define EEPROM_AUTO_INIT

## 🛡️ Safety & Reliability

[ ] Thermal runaway protection: Confirm enabled for hotend and bed.

[ ] Min/Max temps: Set safe ranges for hotend and bed.

[ ] Power‑loss recovery: #define POWER_LOSS_RECOVERY if you want resume after outage.

[ ] Babystepping: #define BABYSTEPPING for live Z adjustment.

[ ] Nozzle park: #define NOZZLE_PARK_FEATURE for safe filament changes.

## 🎛️ Quality of Life

[ ] Advanced pause: #define ADVANCED_PAUSE_FEATURE (enables M600).

[ ] Preheat presets: Adjust PLA/PETG/ABS temps in Configuration.h.

[ ] Arc support: #define ARC_SUPPORT (enables G2/G3 arcs, smoother curves).

[ ] Firmware retraction: #define FWRETRACT (lets slicer use G10/G11).

[ ] SD card sorting: #define SDCARD_SORT_ALPHA.

[ ] Speaker: #define SPEAKER if you want audible feedback.

## 🌡️ Material Profiles (in slicer, but firmware limits help)

PLA: 200–210 °C hotend, 60 °C bed, 100% fan.

PETG: 235–245 °C hotend, 70–80 °C bed, 30–50% fan.

ABS: 240–250 °C hotend, 100–110 °C bed, fan off.

## 📚 Resources You’ll Need

Official Marlin Configuration Guide: Marlin docs

Matching Configurations repo: Marlin Configurations GitHub

Recommended features overview: OctoPrint community guide

Advanced features reference: DeepWiki Marlin advanced features

# Usage

To use these configuration files first clone marlin 2.1.x bugfix and then cd into the Marlin/Marlin folder and then copy the configuration files from this repository. After building then copy the binary to the root of your sd card and insert the card into the printer while turned off. When you turn on the printer the screen should remain blank for a moment before flashing the boot screen and taking you to the main menu. 
