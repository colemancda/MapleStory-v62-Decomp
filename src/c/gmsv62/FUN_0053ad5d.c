/* FUN_0053ad5d - 0x0053ad5d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0053ad5d(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  piVar1 = &DAT_00964178;
  do {
    FUN_0053adec(*(undefined4 *)(param_1 + 0x7d + *piVar1 * 4),0,0);
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x964188);
  return;
}


