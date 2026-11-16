/* FUN_518011d6 - 0x518011d6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_518011d6(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int extraout_ECX;
  uint uVar7;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar1 = (undefined4 *)(extraout_ECX + 0xc);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_51801b43((void *)(extraout_ECX + 0x20),(ulong *)(unaff_EBP + 8),
                         (void *)(unaff_EBP + -0x18));
    if (iVar4 == 0) {
      FUN_5180194f(unaff_EBP + -0x18);
      FUN_51801833(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 8));
      FUN_51801b97((void *)(extraout_ECX + 0x20),(ulong *)(unaff_EBP + 8),unaff_EBP + -0x18);
    }
    else {
      FUN_51807d63((void *)(extraout_ECX + 0x38),*(int *)(*(int *)(unaff_EBP + -0x14) + 0xc));
    }
    iVar4 = *(int *)(unaff_EBP + 0x10);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8) = *(undefined4 *)(unaff_EBP + 0xc);
    if (iVar4 == -1) {
      pvVar5 = (void *)FUN_51801d97((void *)(extraout_ECX + 0x38));
      FUN_51801920(pvVar5,unaff_EBP + -0x18);
      *(void **)(*(int *)(unaff_EBP + -0x14) + 0xc) = pvVar5;
    }
    else {
      iVar4 = *(int *)(unaff_EBP + -0x14);
      iVar6 = (*DAT_5181fadc)();
      *(int *)(iVar4 + 0x10) = iVar6 + *(int *)(unaff_EBP + 0x10);
      if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) == -1) {
        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10) = 0;
      }
      uVar7 = *(uint *)(extraout_ECX + 0x44);
      while (uVar7 != 0) {
        if ((*(int *)(*(int *)(uVar7 + 4) + 0x10) == -1) ||
           (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) - *(int *)(*(int *)(uVar7 + 4) + 0x10) < 0)
           ) {
          pvVar5 = (void *)FUN_51801fbb((void *)(extraout_ECX + 0x38),uVar7);
          FUN_51801920(pvVar5,unaff_EBP + -0x18);
          *(void **)(*(int *)(unaff_EBP + -0x14) + 0xc) = pvVar5;
          break;
        }
        iVar4 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
        uVar7 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      }
      iVar4 = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(iVar4 + 0xc) == 0) {
        pvVar5 = FUN_5180189d((void *)(extraout_ECX + 0x38),unaff_EBP + -0x18);
        *(void **)(iVar4 + 0xc) = pvVar5;
      }
    }
    *(int *)(extraout_ECX + 0x1c) = *(int *)(extraout_ECX + 0x1c) + 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_51801991(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar2 = (int *)(extraout_ECX + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    (*DAT_5181fa10)(*(undefined4 *)(extraout_ECX + 0x18));
    uVar3 = 1;
  }
  else {
    piVar2 = (int *)(extraout_ECX + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


