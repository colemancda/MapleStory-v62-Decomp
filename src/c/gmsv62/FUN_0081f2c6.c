/* FUN_0081f2c6 - 0x0081f2c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0081f2c6(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  short *psVar5;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int *piStack_3c;
  
  FUN_00879bb8();
  piStack_3c = (int *)0xffffffff;
  puStack_40 = &DAT_00978474;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_44 = (undefined1 *)0x81f2ec;
  FUN_00470891();
  piStack_3c = (int *)0x0;
  puStack_40 = (undefined1 *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_44;
  FUN_00679e4e(&puStack_44,0x3b4);
  iVar2 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_44 = (undefined1 *)0x81f327;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_3c = (int *)(unaff_EBP + -0x14);
    puStack_40 = (undefined1 *)0x81f33d;
    piStack_3c = (int *)FUN_00404b30();
    if (((int)piStack_3c < 0) && (piStack_3c != (int *)0x80004002)) {
      puStack_40 = (undefined1 *)0x81f34e;
      FUN_00878dfb();
    }
  }
  piStack_3c = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_40 = (undefined1 *)0x81f35b;
  piVar3 = (int *)FUN_00402bc3();
  if ((int)piVar3 < 0) {
    puStack_40 = (undefined1 *)0x81f366;
    piStack_3c = piVar3;
    FUN_00878dfb();
    piStack_3c = extraout_ECX;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_3c = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_3c != (int *)0x0) {
      puStack_40 = (undefined1 *)0x81f37c;
      (**(code **)(*piStack_3c + 8))();
    }
    uVar4 = 0;
  }
  else {
    puStack_44 = (undefined1 *)&piStack_3c;
    *(int ***)(unaff_EBP + -0x18) = &piStack_3c;
    puStack_40 = (undefined1 *)0xf92;
    FUN_00679e4e();
    puStack_40 = (undefined1 *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_44 = (undefined1 *)0x81f3a6;
    FUN_0040263d();
    puStack_44 = (undefined1 *)0x81f3ad;
    psVar5 = (short *)FUN_004048a4();
    sVar1 = *psVar5;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (sVar1 == 8) {
      puStack_40 = *(undefined1 **)(psVar5 + 4);
    }
    else {
      puStack_40 = &DAT_0097812c;
    }
    piStack_3c = (int *)0xffffffff;
    puStack_44 = (undefined1 *)0x81f3cb;
    FUN_004184ca();
    piStack_3c = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_40 = (undefined1 *)0x81f3d8;
    piStack_3c = (int *)FUN_00402bc3();
    if ((int)piStack_3c < 0) {
      puStack_40 = (undefined1 *)0x81f3e3;
      FUN_00878dfb();
    }
    piStack_3c = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_3c != (int *)0x0) {
      puStack_40 = (undefined1 *)0x81f3f3;
      (**(code **)(*piStack_3c + 8))();
    }
    piStack_3c = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_3c != (int *)0x0) {
      puStack_40 = (undefined1 *)0x81f404;
      (**(code **)(*piStack_3c + 8))();
    }
    uVar4 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


