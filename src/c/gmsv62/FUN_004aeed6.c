/* FUN_004aeed6 - 0x004aeed6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004aeed6(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + -4);
  }
  iVar3 = param_2;
  if (param_2 == -1) {
    iVar3 = iVar1;
  }
  FUN_004af643(iVar1 + 1,2,(int)&param_2 + 3);
  iVar2 = iVar3 * 0x18;
  iVar4 = (iVar3 * 3 + 3) * 8;
  FUN_0087a3a0(*param_1 + iVar4,iVar2 + *param_1,iVar1 * 0x18 + iVar3 * -0x18);
  iVar1 = *param_1;
  for (uVar5 = iVar2 + iVar1; uVar5 < (uint)(iVar4 + iVar1); uVar5 = uVar5 + 0x18) {
    FUN_004af757(uVar5);
  }
  return iVar2 + *param_1;
}


