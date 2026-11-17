/* FUN_007e5e5a - 0x007e5e5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e5e5a(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x3c;
  for (; (iVar2 = *param_2, iVar2 != 0 && (param_1 < *(uint *)(iVar2 + -4))); param_1 = param_1 + 1)
  {
    piVar1 = (int *)(iVar3 + 8 + iVar2);
    *piVar1 = *piVar1 + 1;
    iVar3 = iVar3 + 0x3c;
  }
  return;
}


