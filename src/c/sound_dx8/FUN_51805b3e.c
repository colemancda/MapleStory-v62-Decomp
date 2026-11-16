/* FUN_51805b3e - 0x51805b3e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51805b3e(void *this,uint param_1)

{
  int iVar1;
  
  *(uint *)((int)this + 0xc) = param_1;
  iVar1 = FUN_51805b70((void *)((int)this + 0x4c),param_1);
  *(int *)((int)this + 8) = iVar1;
  return;
}


