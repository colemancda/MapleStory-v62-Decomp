/* FUN_007a934b - 0x007a934b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007a934b(undefined4 *param_1)

{
  int *piVar1;
  
  FUN_00402aba();
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  piVar1 = param_1 + 7;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[6] = 0;
  }
  return;
}


