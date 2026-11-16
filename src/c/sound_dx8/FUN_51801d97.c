/* FUN_51801d97 - 0x51801d97 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51801d97(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_518027aa(param_1,*(int *)((int)param_1 + 0x10),0);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 == 0) {
    *(uint *)((int)param_1 + 0xc) = uVar2;
  }
  else {
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    *(uint *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4) = uVar2;
    uVar2 = -(uint)(uVar2 != 0) & uVar2 + 0x10;
  }
  *(uint *)((int)param_1 + 0x10) = uVar2;
  return;
}


