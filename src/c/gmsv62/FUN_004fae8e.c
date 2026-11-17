/* FUN_004fae8e - 0x004fae8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004fae8e(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_004f1a88();
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_004029b9(param_2 * 0x10 + 4);
    *param_1 = (int)(piVar2 + 1);
    *piVar2 = param_2;
    iVar1 = *param_1;
  }
  return iVar1;
}


