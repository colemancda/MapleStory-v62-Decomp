/* ptr_00879d44 - 0x00879d44 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00879d44(int param_1,int param_2)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -8 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -8 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -4 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -4 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x00879d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_00879c55::switchdataD_00879d68)[param_2])();
  return;
}


