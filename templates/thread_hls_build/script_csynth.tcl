<<reconos_preproc>>

open_project hls
set_top rt_imp
add_files reconos_calls.h
add_files reconos_thread.h
add_files [ glob *.cpp ] -cflags "-I/opt/ros/dashing/include/ <<MSGINCLUDEDIR>> -m32"
open_solution sol
set_part {<<PART>>}
create_clock -period <<CLKPRD>> -name default
source directives.tcl
csynth_design
export_design
exit