/* FUN_0067bb60 - 0x0067bb60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067bb60(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_0067b729(0);
  *(int *)(extraout_ECX + 0xe4) = *(int *)(extraout_ECX + 0xe4) + -0x1e;
  if (*(int *)(extraout_ECX + 0xe4) < 1) {
    iVar2 = *(int *)(extraout_ECX + 0xdc) + iVar2 * 0x14;
    iVar3 = *(int *)((-(uint)(*(int *)(extraout_ECX + 0xe0) != 0) &
                     *(int *)(extraout_ECX + 0xe0) - 0x10U) + 4);
    *(uint *)(extraout_ECX + 0xe0) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    uVar4 = *(undefined4 *)(extraout_ECX + 0xd8);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    iVar3 = FUN_00413367(extraout_ECX + 0xd0,uVar4);
    if (iVar3 < 0) {
      if (*(int *)(extraout_ECX + 0xe0) == 0) {
        *(undefined4 *)(extraout_ECX + 0xe0) = *(undefined4 *)(iVar2 + 0xc);
      }
    }
    else if (*(int *)(extraout_ECX + 0xe0) == 0) {
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x130) = 0;
      *(undefined4 *)(extraout_ECX + 0xd8) = uVar4;
      FUN_0067b45c();
      goto LAB_0067bc97;
    }
    FUN_004031b7(1,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0xc0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0xc0);
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0x10c))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_0067b86e(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(extraout_ECX + 0xe0));
  }
LAB_0067bc97:
  iVar2 = extraout_ECX + 0xec;
  iVar3 = FUN_00413367(iVar2,*(undefined4 *)(extraout_ECX + 0xf4));
  if (0 < iVar3) {
    iVar3 = FUN_00413367(iVar2,*(undefined4 *)(extraout_ECX + 0xf4));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xf4) = uVar4;
    if (iVar3 + -0x1e < 0) {
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0xf4) = uVar4;
    }
  }
  iVar3 = FUN_00413367(iVar2,*(undefined4 *)(extraout_ECX + 0xf4));
  if (iVar3 < 0) {
    iVar3 = FUN_00413367(iVar2,*(undefined4 *)(extraout_ECX + 0xf4));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xf4) = uVar4;
    if (iVar3 != -0x1e && -1 < iVar3 + 0x1e) {
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0xf4) = uVar4;
    }
  }
  iVar2 = FUN_00413367(iVar2,*(undefined4 *)(extraout_ECX + 0xf4));
  if ((iVar2 < 1) ||
     (*(int *)(extraout_ECX + 0x128) = *(int *)(extraout_ECX + 0x128) + 1,
     1 < ((byte)*(undefined4 *)(extraout_ECX + 0x128) & 3))) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xff808080;
  }
  if (*(int *)(extraout_ECX + 0xc0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xc0);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,uVar4);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


