# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Git\microcontroller-test-code\PSOC4000S\toggle.cydsn\toggle.cyprj
# Date: Sun, 03 Sep 2017 02:36:42 GMT
#set_units -time ns
create_clock -name {CyILO} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]


# Component constraints for D:\Git\microcontroller-test-code\PSOC4000S\toggle.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Git\microcontroller-test-code\PSOC4000S\toggle.cydsn\toggle.cyprj
# Date: Sun, 03 Sep 2017 02:36:41 GMT
