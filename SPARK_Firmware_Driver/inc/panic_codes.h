/*
 * panic.h
 *
 *  Created on: Jan 31, 2014
 *      Author: david_s5
 */
// Add a panic code def_panic_codes(_class, led, code)
// the panic module will send SOS followed by 900 ms delay
// followed by 300 blinks of the value of code
/// ...---...    code   ...---...

def_panic_codes(Faults,RGB_COLOR_RED,HardFault)
def_panic_codes(Faults,RGB_COLOR_RED,NMIFault)
def_panic_codes(Faults,RGB_COLOR_RED,MemManage)
def_panic_codes(Faults,RGB_COLOR_RED,BusFault)
def_panic_codes(Faults,RGB_COLOR_RED,UsageFault)

def_panic_codes(Cloud,RGB_COLOR_RED,InvalidLenth)
