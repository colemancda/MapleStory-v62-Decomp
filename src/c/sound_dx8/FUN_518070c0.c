/* FUN_518070c0 - 0x518070c0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518070c0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *this;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe4c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_51807500();
    return;
  }
  FUN_518060fd();
  this = (int *)(-(uint)(unaff_EBP != 0x6c) & unaff_EBP - 0x68U);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_51809406((void *)(unaff_EBP + -0x6c),unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_5180777c((undefined4 *)(unaff_EBP + -0x34),(undefined4 *)(unaff_EBP + -0x20));
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  piVar3 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*piVar3 + -4) >> 1;
  }
  if (uVar1 == 0) {
LAB_51807181:
    if ((*(byte *)(this + 2) & 0x10) == 0) {
      iVar5 = *(int *)(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar5 + 0x24);
      FUN_518017b5();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar5 + 0x30);
      *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar5 + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_5181022b((void *)(unaff_EBP + -0x1c),iVar5 + 0x38);
      FUN_5181022b((void *)(unaff_EBP + -0x28),iVar5 + 0x40);
      piVar3 = (int *)(iVar5 + 0x28);
      *piVar3 = *piVar3 + -1;
      iVar2 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar5 + 0x24) = 0;
      }
      FUN_5180f981();
      if (unaff_EBP != 0x14) {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xc);
      }
      *(undefined1 *)(unaff_EBP + 0xb) = 0;
      FUN_51807b30(this,unaff_EBP + 0xb,1);
      FUN_51807edd(this,*(int *)(unaff_EBP + -0x14));
      FUN_51807edd(this,*(int *)(unaff_EBP + -0x30));
      FUN_51807edd(this,*(int *)(unaff_EBP + -0x2c));
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        FUN_51807cf2(unaff_EBP + -0x28);
      }
      FUN_51807511(*(void **)(unaff_EBP + -0x24),this);
      goto LAB_51807204;
    }
    FUN_51807b04(this,unaff_EBP + 0xf,1);
    if (*(char *)(unaff_EBP + 0xf) != '\0') {
      *(undefined4 *)(unaff_EBP + -0x3c) = 0x570;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_5181b518);
    }
    FUN_51807e75(this,(int *)(unaff_EBP + -0x14));
    FUN_51807e75(this,(int *)(unaff_EBP + -0x30));
    FUN_51807e75(this,(int *)(unaff_EBP + -0x2c));
    FUN_51807cf2(unaff_EBP + -0x28);
    FUN_51807511(*(void **)(unaff_EBP + -0x24),this);
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_51807cbf(unaff_EBP + -0x1c);
      FUN_518057cc();
    }
  }
  else {
    if (piVar3 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_51809394(piVar3);
    }
    uVar1 = (*DAT_5181fa7c)(iVar2);
    if ((uVar1 & 0x10) != 0) goto LAB_51807181;
    piVar3 = (int *)FUN_51807aee((int *)(unaff_EBP + -0x50));
    piVar3 = FUN_51806a4d(piVar3);
    if (piVar3 != (int *)0x0) goto LAB_51807181;
    if ((*(byte *)(this + 2) & 0x10) == 0) {
      iVar5 = *(int *)(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar5 + 0x24);
      FUN_518017b5();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_5181022b((void *)(unaff_EBP + -0x1c),iVar5 + 0x38);
      piVar3 = (int *)(iVar5 + 0x28);
      *piVar3 = *piVar3 + -1;
      iVar2 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar5 + 0x24) = 0;
      }
      goto LAB_51807204;
    }
    if (*(int **)(unaff_EBP + -0x20) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_51809394(*(int **)(unaff_EBP + -0x20));
    }
    iVar2 = (*DAT_5181faa4)(iVar2,unaff_EBP + -0x1b4);
    if (iVar2 == -1) {
      uVar4 = (*DAT_5181fad4)();
      *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5181b518);
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x194);
    (*DAT_5181faac)(iVar2);
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_51807cf2(unaff_EBP + -0x28);
    }
    else {
      FUN_51807cbf(unaff_EBP + -0x1c);
      FUN_518057cc();
      iVar2 = FUN_5180f09b();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_5181022b((void *)(unaff_EBP + -0x28),iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        FUN_51813012(unaff_EBP + -0x48);
      }
    }
  }
  iVar5 = *(int *)(unaff_EBP + 8);
LAB_51807204:
  if ((*(byte *)(this + 2) & 0x10) == 0) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    if (((iVar2 != 0) && (*(int *)(unaff_EBP + -0x18) != 0)) &&
       (iVar5 = (**(code **)(*(int *)(unaff_EBP + -0x6c) + 0x18))
                          (*(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 8),iVar2), iVar2 != iVar5))
    {
      *(undefined4 *)(unaff_EBP + -0x38) = 0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x38),(ThrowInfo *)&DAT_5181b518);
    }
  }
  else {
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar5 + 0x24);
    FUN_518017b5();
    *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(unaff_EBP + -0x30);
    *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_5181022b((void *)(iVar5 + 0x40),unaff_EBP + -0x28);
    FUN_5181022b((void *)(iVar5 + 0x38),unaff_EBP + -0x1c);
    piVar3 = (int *)(iVar5 + 0x28);
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      *(undefined4 *)(iVar5 + 0x24) = 0;
    }
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar5 + 0x48);
    FUN_518017b5();
    iVar2 = *(int *)(iVar5 + 0x54);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar2 != 0) {
      FUN_51803161(iVar5 + 0x50);
      *(undefined4 *)(iVar5 + 0x54) = 0;
    }
    piVar3 = (int *)(iVar5 + 0x4c);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *(undefined4 *)(iVar5 + 0x48) = 0;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_51813012(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_51813012(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    FUN_51802c43(*(int **)(unaff_EBP + -0x34));
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    FUN_51802c43(*(int **)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51806e25();
  FUN_51807500();
  return;
}


