/* FUN_0052513d - 0x0052513d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052513d(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_2;
  if (param_1 != param_2) {
    do {
      piVar1 = param_1;
      param_1 = piVar1 + 1;
      piVar2 = param_2;
      if (param_1 == param_2) break;
      piVar2 = piVar1;
    } while (*piVar1 != *param_1);
  }
  FUN_00525a4b(piVar2,param_2,piVar2);
  return;
}


