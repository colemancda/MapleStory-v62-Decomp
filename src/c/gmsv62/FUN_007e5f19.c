/* FUN_007e5f19 - 0x007e5f19 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e5f19(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 <= param_2) {
    iVar5 = param_1 * 0x3c;
    iVar3 = (param_2 - param_1) + 1;
    do {
      iVar4 = *param_5;
      piVar1 = (int *)(iVar4 + 0x28 + iVar5);
      iVar2 = *(int *)(iVar4 + 0x24 + iVar5);
      iVar4 = iVar4 + iVar5;
      iVar5 = iVar5 + 0x3c;
      iVar3 = iVar3 + -1;
      *(uint *)(iVar4 + 0x1c) = ((-(uint)(*piVar1 != -1) & 10) - iVar2) + param_3 + param_4;
      *(int *)(iVar4 + 0x2c) = iVar2 + 1;
    } while (iVar3 != 0);
  }
  return;
}


