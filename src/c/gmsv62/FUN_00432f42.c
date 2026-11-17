/* FUN_00432f42 - 0x00432f42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_00432f42(int *param_1)

{
  int iVar1;
  
  if (((int *)*param_1 != (int *)0x0) && (iVar1 = *(int *)*param_1, iVar1 != 0)) {
    return *(uint *)(iVar1 + -4) >> 1;
  }
  return 0;
}


