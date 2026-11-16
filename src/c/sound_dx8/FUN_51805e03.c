/* FUN_51805e03 - 0x51805e03 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __fastcall FUN_51805e03(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_5180602f(param_1,1);
  iVar2 = (*DAT_5181fad4)();
  iVar3 = *(int *)((int)param_1 + 0x10);
  if (iVar3 != -1) {
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (*DAT_5181f9c0)(iVar3);
    }
    if ((iVar3 == 0) || (iVar1 == 0)) {
      iVar1 = 0;
      if (iVar2 == 0) {
        iVar2 = (*DAT_5181fad4)();
      }
    }
    else {
      iVar1 = 1;
    }
    *(undefined4 *)((int)param_1 + 0x10) = 0xffffffff;
  }
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  (*DAT_5181fad8)(iVar2);
  return iVar1;
}


