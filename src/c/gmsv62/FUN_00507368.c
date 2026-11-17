/* FUN_00507368 - 0x00507368 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00507368(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  if (*param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*param_1 + -4);
  }
  iVar4 = param_2;
  if (param_2 == -1) {
    iVar4 = local_8;
  }
  FUN_00508429(local_8 + 1,2,(int)&param_2 + 3);
  iVar1 = iVar4 * 0x10;
  iVar2 = (iVar4 + 1) * 0x10;
  FUN_0087a3a0(*param_1 + iVar2,iVar1 + *param_1,(iVar4 * 0xfffffff + local_8) * 0x10);
  iVar4 = *param_1;
  for (uVar3 = iVar1 + iVar4; uVar3 < (uint)(iVar2 + iVar4); uVar3 = uVar3 + 0x10) {
    FUN_0050852f(uVar3);
  }
  return iVar1 + *param_1;
}


