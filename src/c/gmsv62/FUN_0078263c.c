/* FUN_0078263c - 0x0078263c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0078263c(int *param_1,int param_2)

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
  FUN_00783aec(iVar1 + 1,2,(int)&param_2 + 3);
  iVar2 = iVar3 * 0x50;
  iVar4 = (iVar3 * 5 + 5) * 0x10;
  FUN_0087a3a0(*param_1 + iVar4,iVar2 + *param_1,iVar1 * 0x50 + iVar3 * -0x50);
  iVar1 = *param_1;
  for (uVar5 = iVar2 + iVar1; uVar5 < (uint)(iVar4 + iVar1); uVar5 = uVar5 + 0x50) {
    FUN_0078453f(uVar5);
  }
  return iVar2 + *param_1;
}


