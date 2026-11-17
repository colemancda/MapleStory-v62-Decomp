/* FUN_00705489 - 0x00705489 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00705489(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_2 / 10) % 10;
  iVar3 = iVar2 + -1;
  if ((-1 < iVar3) && (iVar1 = (**(code **)(*param_1 + 8))(), iVar3 < iVar1)) {
    param_1[iVar2 + 2] = 1;
    return 1;
  }
  return 0;
}


