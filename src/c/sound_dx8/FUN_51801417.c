/* FUN_51801417 - 0x51801417 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51801417(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0xc;
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = (*DAT_5181fadc)();
  iVar4 = *(int *)(extraout_ECX + 0x50);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  piVar3 = (int *)0x0;
  if (iVar4 != *(int *)(extraout_ECX + 0x1c)) {
    piVar3 = (int *)FUN_518022eb((void *)(extraout_ECX + 0x4c),*(int *)(extraout_ECX + 0x40) + 1,1);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *(int *)(extraout_ECX + 0x18);
      piVar3 = piVar3 + 1;
    }
  }
  uVar5 = *(uint *)(extraout_ECX + 0x44);
  while (uVar5 != 0) {
    iVar4 = *(int *)(uVar5 + 4);
    iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    uVar5 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
    if ((*(int *)(unaff_EBP + -0x14) == 0) || (iVar1 = *(int *)(iVar4 + 0x10), iVar1 == -1)) {
      if (piVar3 == (int *)0x0) goto LAB_518014e8;
    }
    else {
      uVar6 = iVar1 - *(int *)(unaff_EBP + -0x18);
      if ((int)uVar6 < 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      else if (uVar6 < *(uint *)(unaff_EBP + -0x14)) {
        *(uint *)(unaff_EBP + -0x14) = uVar6;
      }
    }
    if ((piVar3 != (int *)0x0) && (iVar4 = *(int *)(iVar4 + 8), iVar4 != 0)) {
      *piVar3 = iVar4;
      piVar3 = piVar3 + 1;
    }
  }
  if (piVar3 == (int *)0x0) {
LAB_518014e8:
    uVar5 = *(uint *)(extraout_ECX + 0x54);
  }
  else {
    uVar5 = (int)piVar3 - *(int *)(extraout_ECX + 0x4c) >> 2;
    if (0x40 < uVar5) {
      uVar5 = 0x40;
    }
    *(undefined4 *)(extraout_ECX + 0x50) = *(undefined4 *)(extraout_ECX + 0x1c);
    *(uint *)(extraout_ECX + 0x54) = uVar5;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar3 = (int *)(extraout_ECX + 0x10);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  iVar4 = (*DAT_5181fa20)(uVar5,*(undefined4 *)(extraout_ECX + 0x4c),0,
                          *(undefined4 *)(unaff_EBP + -0x14));
  if (((iVar4 == 0x102) || (iVar4 == -1)) || (iVar4 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(extraout_ECX + 0x4c) + iVar4 * 4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


