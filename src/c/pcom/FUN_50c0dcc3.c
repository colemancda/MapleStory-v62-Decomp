/* FUN_50c0dcc3 - 0x50c0dcc3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall FUN_50c0dcc3(void *this,undefined4 *param_1,void *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = FUN_50c07552((ushort *)*param_1);
    for (iVar3 = *(int *)(*(int *)((int)this + 4) + (uVar2 % *(uint *)((int)this + 8)) * 4);
        iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      bVar1 = FUN_50c085af((void *)(iVar3 + 8),(wchar_t *)*param_1);
      if (bVar1) {
        if (param_2 != (void *)0x0) {
          FUN_50c0dbf1(param_2,iVar3 + 0xc);
        }
        return iVar3 + 0xc;
      }
    }
  }
  return 0;
}


