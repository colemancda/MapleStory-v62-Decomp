/* FUN_50004c13 - 0x50004c13 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall
FUN_50004c13(void *this,int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(int *)((int)this + 0x18) = param_3;
  *(int *)((int)this + 0x1c) = param_4;
  if (param_5 == 0) {
    bVar2 = (byte)param_2;
    iVar1 = 1 << (bVar2 & 0x1f);
    iVar3 = ((uint)(iVar1 + -1 + param_3) >> (bVar2 & 0x1f)) << ((byte)param_1 & 0x1f);
    *(int *)((int)this + 0x20) = iVar3;
    iVar1 = FUN_50005b04((void *)((int)this + 0x28),
                         (((uint)(iVar1 + -1 + param_4) >> (bVar2 & 0x1f)) /
                         (((param_1 != 0x402) - 1 & 3) + 1)) * iVar3);
    *(int *)((int)this + 0x24) = iVar1;
  }
  else {
    *(int *)((int)this + 0x24) = param_5;
    *(undefined4 *)((int)this + 0x20) = param_6;
  }
  return;
}


