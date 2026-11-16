/* FUN_518105c9 - 0x518105c9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_518105c9(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = *(uint *)((int)this + 8);
  }
  else {
    if (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) goto LAB_518105f9;
    uVar2 = *(int *)((int)this + 8) * 2 + 1;
  }
  if (uVar2 != 0) {
    FUN_51810fd9(this,uVar2,0);
  }
LAB_518105f9:
  uVar2 = 0;
  iVar5 = 8;
  piVar4 = param_1;
  do {
    uVar2 = uVar2 + *piVar4;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = uVar2 % *(uint *)((int)this + 8);
  puVar3 = *(undefined4 **)(*(int *)((int)this + 4) + uVar2 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + uVar2 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      puVar3 = (undefined4 *)FUN_51811580();
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = *puVar1;
        *puVar3 = &PTR_LAB_51818454;
        puVar3[2] = *param_1;
        puVar3[3] = param_1[1];
        puVar3[4] = param_1[2];
        puVar3[5] = param_1[3];
        puVar3[6] = param_1[4];
        puVar3[7] = param_1[5];
        puVar3[8] = param_1[6];
        puVar3[9] = param_1[7];
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[10] = &PTR_FUN_51818450;
        *puVar3 = &PTR_FUN_5181844c;
      }
      if (param_2 != 0) {
        FUN_518103e1((int)(puVar3 + 10));
        FUN_51810e98(puVar3 + 10,param_2);
      }
      *puVar1 = puVar3;
      return puVar3;
    }
    iVar5 = FUN_518047a7(puVar3 + 2,param_1);
    if (iVar5 != 0) break;
    puVar3 = (undefined4 *)puVar3[1];
  }
  if (param_2 == 0) {
    return puVar3;
  }
  FUN_518103e1((int)(puVar3 + 10));
  FUN_51810e98(puVar3 + 10,param_2);
  return puVar3;
}


