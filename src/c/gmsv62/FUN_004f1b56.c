/* FUN_004f1b56 - 0x004f1b56 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004f1b56(int *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  if (*param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*param_1 + -4);
  }
  iVar1 = param_2;
  if (param_2 == -1) {
    iVar1 = local_8;
  }
  FUN_00495dce(local_8 + 1,2,(int)&param_2 + 3);
  FUN_0087a3a0(iVar1 * 8 + 8 + *param_1,iVar1 * 8 + *param_1,(iVar1 * 0x1fffffff + local_8) * 8);
  return;
}


