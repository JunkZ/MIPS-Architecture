/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_385(char*, char *);
extern void execute_14(char*, char *);
extern void execute_15(char*, char *);
extern void execute_16(char*, char *);
extern void execute_17(char*, char *);
extern void execute_18(char*, char *);
extern void execute_19(char*, char *);
extern void execute_21(char*, char *);
extern void execute_22(char*, char *);
extern void execute_229(char*, char *);
extern void execute_24(char*, char *);
extern void execute_27(char*, char *);
extern void execute_29(char*, char *);
extern void execute_31(char*, char *);
extern void execute_33(char*, char *);
extern void execute_35(char*, char *);
extern void execute_37(char*, char *);
extern void execute_39(char*, char *);
extern void execute_41(char*, char *);
extern void execute_43(char*, char *);
extern void execute_45(char*, char *);
extern void execute_47(char*, char *);
extern void execute_49(char*, char *);
extern void execute_51(char*, char *);
extern void execute_53(char*, char *);
extern void execute_55(char*, char *);
extern void execute_57(char*, char *);
extern void execute_59(char*, char *);
extern void execute_61(char*, char *);
extern void execute_63(char*, char *);
extern void execute_65(char*, char *);
extern void execute_67(char*, char *);
extern void execute_69(char*, char *);
extern void execute_71(char*, char *);
extern void execute_73(char*, char *);
extern void execute_75(char*, char *);
extern void execute_77(char*, char *);
extern void execute_79(char*, char *);
extern void execute_81(char*, char *);
extern void execute_83(char*, char *);
extern void execute_85(char*, char *);
extern void execute_87(char*, char *);
extern void execute_89(char*, char *);
extern void execute_92(char*, char *);
extern void execute_222(char*, char *);
extern void execute_223(char*, char *);
extern void execute_95(char*, char *);
extern void execute_96(char*, char *);
extern void execute_225(char*, char *);
extern void execute_226(char*, char *);
extern void execute_228(char*, char *);
extern void execute_231(char*, char *);
extern void execute_233(char*, char *);
extern void execute_235(char*, char *);
extern void execute_237(char*, char *);
extern void execute_243(char*, char *);
extern void execute_244(char*, char *);
extern void execute_245(char*, char *);
extern void execute_382(char*, char *);
extern void execute_248(char*, char *);
extern void execute_384(char*, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[63] = {(funcp)execute_385, (funcp)execute_14, (funcp)execute_15, (funcp)execute_16, (funcp)execute_17, (funcp)execute_18, (funcp)execute_19, (funcp)execute_21, (funcp)execute_22, (funcp)execute_229, (funcp)execute_24, (funcp)execute_27, (funcp)execute_29, (funcp)execute_31, (funcp)execute_33, (funcp)execute_35, (funcp)execute_37, (funcp)execute_39, (funcp)execute_41, (funcp)execute_43, (funcp)execute_45, (funcp)execute_47, (funcp)execute_49, (funcp)execute_51, (funcp)execute_53, (funcp)execute_55, (funcp)execute_57, (funcp)execute_59, (funcp)execute_61, (funcp)execute_63, (funcp)execute_65, (funcp)execute_67, (funcp)execute_69, (funcp)execute_71, (funcp)execute_73, (funcp)execute_75, (funcp)execute_77, (funcp)execute_79, (funcp)execute_81, (funcp)execute_83, (funcp)execute_85, (funcp)execute_87, (funcp)execute_89, (funcp)execute_92, (funcp)execute_222, (funcp)execute_223, (funcp)execute_95, (funcp)execute_96, (funcp)execute_225, (funcp)execute_226, (funcp)execute_228, (funcp)execute_231, (funcp)execute_233, (funcp)execute_235, (funcp)execute_237, (funcp)execute_243, (funcp)execute_244, (funcp)execute_245, (funcp)execute_382, (funcp)execute_248, (funcp)execute_384, (funcp)transaction_0, (funcp)vhdl_transfunc_eventcallback};
const int NumRelocateId= 63;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/MIPS_tb_behav/xsim.reloc",  (void **)funcTab, 63);
	iki_vhdl_file_variable_register(dp + 20000);
	iki_vhdl_file_variable_register(dp + 20056);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/MIPS_tb_behav/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/MIPS_tb_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/MIPS_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/MIPS_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/MIPS_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
