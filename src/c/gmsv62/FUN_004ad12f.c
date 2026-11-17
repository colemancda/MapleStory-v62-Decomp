/* FUN_004ad12f - 0x004ad12f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004ad12f(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x3c) < 2) {
    return;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_00818111(-(uint)(param_1 != 0) & param_1 + 4U);
  iVar2 = FUN_004ad311(param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0x67) {
    if (*(int *)(param_1 + 0x44) != iVar2) goto LAB_004ad19e;
    uVar3 = 0xffffffff;
  }
  else {
    if (iVar1 != 0x68) {
      if (iVar1 == 0x69) {
        FUN_004ad4d6(param_2,param_3);
      }
      goto LAB_004ad19e;
    }
    if (*(int *)(param_1 + 0x44) != iVar2) goto LAB_004ad19e;
    uVar3 = 1;
  }
  FUN_004ad3e0(uVar3);
LAB_004ad19e:
  *(undefined4 *)(param_1 + 0x40) = 100;
  FUN_004b3daf();
  return;
}


