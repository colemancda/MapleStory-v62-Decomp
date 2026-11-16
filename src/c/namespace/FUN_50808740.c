/* FUN_50808740 - 0x50808740 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50808740(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar4 = *(uint *)((int)this + 8);
  }
  else {
    if (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) goto LAB_50808770;
    uVar4 = *(int *)((int)this + 8) * 2 + 1;
  }
  if (uVar4 != 0) {
    FUN_50808eef(this,uVar4,0);
  }
LAB_50808770:
  uVar4 = FUN_508052c7(param_1);
  uVar4 = uVar4 % *(uint *)((int)this + 8);
  puVar5 = *(undefined4 **)(*(int *)((int)this + 4) + uVar4 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 4);
  while( true ) {
    if (puVar5 == (undefined4 *)0x0) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      puVar5 = (undefined4 *)FUN_5080956d();
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[1] = *puVar1;
        *puVar5 = &PTR_LAB_508178ac;
        iVar2 = *param_1;
        puVar5[2] = iVar2;
        if (iVar2 != 0) {
          InterlockedIncrement((LONG *)(iVar2 + 8));
        }
        *puVar5 = &PTR_FUN_508178a8;
      }
      if (param_2 != (undefined4 *)0x0) {
        puVar5[3] = *param_2;
      }
      *puVar1 = puVar5;
      return puVar5;
    }
    bVar3 = FUN_50803f09(puVar5 + 2,param_1);
    if (bVar3) break;
    puVar5 = (undefined4 *)puVar5[1];
  }
  if (param_2 == (undefined4 *)0x0) {
    return puVar5;
  }
  puVar5[3] = *param_2;
  return puVar5;
}


