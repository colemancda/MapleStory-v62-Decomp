/* FUN_51801b43 - 0x51801b43 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_51801b43(void *this,ulong *param_1,void *param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = _lrotr(*param_1,5);
    iVar2 = *(int *)(*(int *)((int)this + 4) + (uVar1 % *(uint *)((int)this + 8)) * 4);
    if (iVar2 != 0) {
      do {
        if (*(ulong *)(iVar2 + 8) == *param_1) {
          if (param_2 != (void *)0x0) {
            FUN_51801920(param_2,iVar2 + 0xc);
          }
          return iVar2 + 0xc;
        }
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar2 != 0);
    }
  }
  return 0;
}


