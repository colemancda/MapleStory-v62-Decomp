/* FUN_50c0de7c - 0x50c0de7c in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __thiscall FUN_50c0de7c(void *this,undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = FUN_50c07552((ushort *)*param_1);
    uVar3 = uVar3 % *(uint *)((int)this + 8);
    iVar1 = *(int *)((int)this + 4);
    puVar5 = *(undefined4 **)(iVar1 + uVar3 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      bVar2 = FUN_50c085af(puVar5 + 2,(wchar_t *)*param_1);
      if (bVar2) {
        *(undefined4 *)(iVar1 + uVar3 * 4) = puVar5[1];
LAB_50c0dee2:
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        return 1;
      }
      puVar4 = puVar5;
      for (puVar5 = (undefined4 *)puVar5[1]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        bVar2 = FUN_50c085af(puVar5 + 2,(wchar_t *)*param_1);
        if (bVar2) {
          puVar4[1] = puVar5[1];
          goto LAB_50c0dee2;
        }
        puVar4 = puVar5;
      }
    }
  }
  return 0;
}


