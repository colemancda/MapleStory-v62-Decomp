/* FUN_50005bf0 - 0x50005bf0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_50005bf0(void *this,ushort *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = *(uint *)((int)this + 8);
  }
  else {
    if (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) goto LAB_50005c1d;
    uVar2 = *(int *)((int)this + 8) * 2 + 1;
  }
  if (uVar2 != 0) {
    FUN_50006550(this,uVar2,0);
  }
LAB_50005c1d:
  uVar3 = _lrotr((uint)*param_1,5);
  piVar1 = (int *)(*(int *)((int)this + 4) + (uVar3 % *(uint *)((int)this + 8)) * 4);
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    do {
      if (*(ushort *)(iVar4 + 8) == *param_1) {
        if (param_2 == (undefined4 *)0x0) {
          return;
        }
        *(undefined4 *)(iVar4 + 0xc) = *param_2;
        *(undefined4 *)(iVar4 + 0x10) = param_2[1];
        *(undefined4 *)(iVar4 + 0x14) = param_2[2];
        return;
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  puVar5 = (undefined4 *)FUN_5000691e();
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar4 = *piVar1;
    *puVar5 = &PTR_LAB_500144a0;
    puVar5[1] = iVar4;
    *(ushort *)(puVar5 + 2) = *param_1;
    *puVar5 = &PTR_FUN_5001449c;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar5[3] = *param_2;
    puVar5[4] = param_2[1];
    puVar5[5] = param_2[2];
  }
  *piVar1 = (int)puVar5;
  return;
}


