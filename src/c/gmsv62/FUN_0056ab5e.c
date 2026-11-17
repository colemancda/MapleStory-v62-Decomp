/* FUN_0056ab5e - 0x0056ab5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0056ab5e(int *param_1,int param_2)

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
  FUN_0056bd06(local_8 + 1,2,(int)&param_2 + 3);
  iVar1 = iVar4 * 0x20;
  iVar2 = (iVar4 + 1) * 0x20;
  FUN_0087a3a0(*param_1 + iVar2,iVar1 + *param_1,(iVar4 * 0x7ffffff + local_8) * 0x20);
  iVar4 = *param_1;
  for (uVar3 = iVar1 + iVar4; uVar3 < (uint)(iVar2 + iVar4); uVar3 = uVar3 + 0x20) {
    FUN_0056bfce(uVar3);
  }
  return iVar1 + *param_1;
}


