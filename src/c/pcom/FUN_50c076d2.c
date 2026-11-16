/* FUN_50c076d2 - 0x50c076d2 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall FUN_50c076d2(void *this,ulong *param_1,void *param_2)

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
            FUN_50c04b87(param_2,(int *)(iVar2 + 0xc));
          }
          return iVar2 + 0xc;
        }
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar2 != 0);
    }
  }
  return 0;
}


