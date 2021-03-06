# THIS FILE IS AUTOMATICALLY GENERATED
# Project: G:\Documentos\PSoC Creator\CE95358.cydsn\CE95358.cyprj
# Date: Fri, 08 Apr 2016 17:43:55 GMT
#set_units -time ns
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {ADC_SAR_0_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 19 37} -nominal_period 545.45454545454538 [list [get_pins {ClockBlock/aclk_glb_0}]]
create_clock -name {ADC_SAR_0_theACLK(fixed-function)} -period 545.45454545454538 -waveform {0 272.727272727273} -nominal_period 545.45454545454538 [get_pins {ClockBlock/aclk_glb_ff_0}]


# Component constraints for G:\Documentos\PSoC Creator\CE95358.cydsn\TopDesign\TopDesign.cysch
# Project: G:\Documentos\PSoC Creator\CE95358.cydsn\CE95358.cyprj
# Date: Fri, 08 Apr 2016 17:43:38 GMT
