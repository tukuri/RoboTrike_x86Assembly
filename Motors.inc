;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;                                                                            ;
;                                Motors.inc                                  ;
;                                Homework 6                                  ;
;                               Sunghoon Choi                                ;
;                                                                            ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Description: 
;  This file contains the definitions for the Motors functions for RoboTrike.
;
; Revision History:
;    11/06/2016 Sunghoon Choi     Created
;    11/24/2016 Sunghoon Choi     Added MAX_SPEED, MIN_SPEED, and MAX_TURRET_ELEVATION.
;    11/26/2016 Sunghoon Choi     Changed the constant name MIN_ANGLE TO STRAIGHT_ANGLE.

INIT_PULSE_WIDTH    EQU 0         ;Initial pulse width
INIT_PULSE_COUNTER  EQU 0         ;Initial pulse width counter
INIT_SPEED          EQU 0         ;Initial speed
INIT_ANGLE          EQU 0         ;Initial angle
INIT_LASER_STAT     EQU 0         ;Initial laser status
LASER_ON            EQU 1         ;laserStatus value to turn laser on
LASER_OFF           EQU 0         ;laserStatus value to turn laser off


NUM_MOTORS          EQU 3         ;Total number of DC motors for omniwheels on RoboTrike.
LASER_POWER_MASK    EQU 10000000B ;Mask to turn the laser on.
PARALLEL_B_ADDR     EQU 181H      ;The address of parallel port B
COUNTER_MAX         EQU 128       ;Maximum value of the pulse width counter.

IGNORE_SPEED        EQU 65535     ;The speed when RoboTrike won't change its current speed
IGNORE_ANGLE        EQU -32768    ;The angle when RoboTrike won't change its current angle

FULL_ANGLE          EQU 360       ;Full angle. The angle will be normalized to
                                  ;[MIN_ANGLE, FULL_ANGLE-1]
STRAIGHT_ANGLE      EQU 0         ;The angle of moving straightforward.

NUM_SHIFT_ERASE_SIGN  EQU 1       ;Number of bit shift required to erase a sign value.
NUM_SHIFT_DOUBLE      EQU 1       ;Number of bit shift required to double a value.
NUM_SHIFT_HALF        EQU 1       ;Number of bit shift required to halve a value.
DUPSIGN_0DOT15_MUL2   EQU 2       ;Number of duplicated extra sign bits generated by
                                  ;multiplying three Q0.15 values. Since we have 
                                  ;three sign bits, we must remove two extra sign bits
                                  ;from them.
MAX_SPEED              EQU 65534  ;Maximum speed of RoboTrike
MIN_SPEED              EQU 0      ;Minimum speed of RoboTrike

POS_TURRET_ELEV_BOUND  EQU 60     ;The positive bound of turret elevation angle
NEG_TURRET_ELEV_BOUND  EQU -60    ;The negative bound of turret elevation angle
