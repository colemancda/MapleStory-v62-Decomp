/* FUN_004a0c25 - 0x004a0c25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_004a0c25(int param_1,char *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  FUN_0047cf76();
  for (uVar3 = 0; (iVar1 = *param_3, iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
      uVar3 = uVar3 + 1) {
    puVar2 = (undefined4 *)FUN_0047cf98();
    *puVar2 = *(undefined4 *)(iVar1 + uVar3 * 4);
  }
  *(undefined4 *)(param_1 + 0x50) = param_4;
  if (*(int *)(param_6 + 8) == 0) {
    FUN_004a2fd0();
  }
  else {
    FUN_004a2a84(param_6,param_7);
  }
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) || (*(int *)(param_1 + 0x48) != 0)) {
    FUN_004a1770();
    FUN_0045f0f3(param_2,0xffffffff);
    FUN_004a1334();
    FUN_004b3daf();
  }
  return;
}


