/* FUN_518135d7 - 0x518135d7 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_518135d7(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined1 local_c [4];
  int local_8;
  
  if (param_3 == (undefined4 *)0x0) {
    return in_EDX;
  }
  uVar3 = 1;
  if ((param_2 == 0) || (*(int *)(param_1 + 0x24) == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = FUN_5181287a();
    iVar1 = *(int *)(iVar1 + 4);
    uVar3 = extraout_EDX;
    if (local_8 != 0) {
      FUN_51813012((int)local_c);
      uVar3 = extraout_EDX_00;
    }
    if (iVar1 != 0) {
      return uVar3;
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    puVar2 = FUN_51805650(*(void **)(param_1 + 0x20),(undefined4 *)0x0);
    *param_3 = puVar2;
    param_3 = param_3 + 1;
    if (puVar2 == (undefined4 *)0x0) {
      return extraout_EDX_01;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar3 = 0;
  }
  if (param_2 != 0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
  }
  return uVar3;
}


