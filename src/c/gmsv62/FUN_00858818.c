/* FUN_00858818 - 0x00858818 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00858818(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_8;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + -4);
  }
  if (param_2 == -1) {
    param_2 = iVar1;
  }
  uStack_8 = param_1;
  FUN_00859851(iVar1 + 1,2,(int)&uStack_8 + 3);
  iVar4 = param_2 * 0x2a;
  iVar2 = (param_2 + 1) * 0x2a;
  FUN_0087a3a0(*param_1 + iVar2,iVar4 + *param_1,iVar1 * 0x2a + param_2 * -0x2a);
  iVar1 = *param_1;
  for (uVar3 = iVar4 + iVar1; uVar3 < (uint)(iVar2 + iVar1); uVar3 = uVar3 + 0x2a) {
    FUN_00859a69(uVar3);
  }
  return iVar4 + *param_1;
}


