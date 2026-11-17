/* FUN_004251cf - 0x004251cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004251cf(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (*param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*param_1 + -4);
  }
  iVar5 = param_2;
  if (param_2 == -1) {
    iVar5 = local_8;
  }
  FUN_0042634d(local_8 + 1,2,(int)&param_2 + 3);
  iVar1 = iVar5 * 4 + 4;
  iVar4 = iVar5 * 4;
  FUN_0087a3a0(*param_1 + iVar1,iVar4 + *param_1,(iVar5 * 0x3fffffff + local_8) * 4);
  iVar5 = *param_1;
  puVar2 = (undefined4 *)(iVar5 + iVar4);
  while (puVar3 = puVar2, puVar3 < (undefined4 *)(iVar1 + iVar5)) {
    puVar2 = puVar3 + 1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
  }
  return iVar4 + *param_1;
}


