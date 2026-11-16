/* FUN_51806c70 - 0x51806c70 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51806c70(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x20) == 0) {
    FUN_5180e990(0x80004003);
  }
  piVar1 = *(int **)((int)this + 0x20);
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_1);
  if (iVar2 < 0) {
    FUN_5180e99e(iVar2,piVar1,&DAT_5181f528);
  }
  return;
}


