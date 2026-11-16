/* FUN_50c0ac18 - 0x50c0ac18 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0ac18(void *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  pvVar1 = param_1;
  pvVar4 = (void *)(-(uint)(param_2 != 0) & param_2 + 4U);
  param_1 = *(void **)((int)param_1 + 8);
  FUN_50c0b8ac(pvVar4,(int *)&param_1);
  if ((*(byte *)((int)pvVar4 + 8) & 0x10) == 0) {
    uVar3 = *(uint *)((int)pvVar1 + 0xc);
    while (uVar3 != 0) {
      iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
      FUN_50c0a6bf();
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    }
  }
  else {
    FUN_50c04098((int)pvVar1);
    pvVar4 = (void *)0x0;
    if (param_1 != (void *)0x0) {
      do {
        iVar2 = FUN_50c0b92b(pvVar1);
        FUN_50c0b747(iVar2);
        FUN_50c0a6bf();
        pvVar4 = (void *)((int)pvVar4 + 1);
      } while (pvVar4 < param_1);
    }
  }
  return;
}


