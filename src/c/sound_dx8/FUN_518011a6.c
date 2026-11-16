/* FUN_518011a6 - 0x518011a6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_518011a6(void *param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)param_1 + 0x14) = 2;
  (*DAT_5181fa10)(*(undefined4 *)((int)param_1 + 0x18));
  iVar1 = *(int *)((int)param_1 + 4);
  iVar2 = (*DAT_5181f9e4)();
  if (iVar2 != iVar1) {
    FUN_51802286(param_1,5000);
  }
  return;
}


