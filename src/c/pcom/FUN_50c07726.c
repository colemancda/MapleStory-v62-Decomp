/* FUN_50c07726 - 0x50c07726 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c07726(void *this,ulong *param_1,int *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar4 = *(uint *)((int)this + 8);
  }
  else {
    if (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) goto LAB_50c07756;
    uVar4 = *(int *)((int)this + 8) * 2 + 1;
  }
  if (uVar4 != 0) {
    FUN_50c07d41(this,uVar4,0);
  }
LAB_50c07756:
  uVar2 = _lrotr(*param_1,5);
  uVar4 = uVar2 % *(uint *)((int)this + 8);
  puVar3 = *(undefined4 **)(*(int *)((int)this + 4) + uVar4 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 4);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      if (puVar3[2] == *param_1) {
        if (param_2 == (int *)0x0) {
          return puVar3;
        }
        FUN_50c04b87(puVar3 + 3,param_2);
        return puVar3;
      }
      puVar3 = (undefined4 *)puVar3[1];
    } while (puVar3 != (undefined4 *)0x0);
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  puVar3 = (undefined4 *)FUN_50c08130();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = *puVar1;
    *puVar3 = &PTR_LAB_50c13504;
    puVar3[2] = *param_1;
    puVar3[3] = 0;
    *puVar3 = &PTR_FUN_50c13500;
  }
  if (param_2 != (int *)0x0) {
    FUN_50c04b87(puVar3 + 3,param_2);
  }
  *puVar1 = puVar3;
  return puVar3;
}


