/* FUN_00750e64 - 0x00750e64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00750e64(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  int iVar7;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  
  FUN_00879bb8();
  piVar5 = (int *)(extraout_ECX + 0x10);
  puStack_44 = (undefined4 *)0x0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  uStack_48 = 0x750e89;
  cVar1 = FUN_00433bfa();
  if (((cVar1 != '\0') || (*(int *)(extraout_ECX + 0x14) != *(int *)(unaff_EBP + 8))) ||
     (*(int *)(extraout_ECX + 0x18) != *(int *)(unaff_EBP + 0xc))) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    puStack_44 = (undefined4 *)0x1;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0068684c(0);
    FUN_0074eacf(0,0,*(undefined4 *)(unaff_EBP + 0x10),0,0,0,0,0,0,0,0);
    iVar3 = *piVar5;
    *piVar5 = 0;
    puStack_44 = (undefined4 *)0x750ed6;
    FUN_00412600();
    puStack_44 = (undefined4 *)0x1;
    *(undefined4 **)(unaff_EBP + 0x10) = &uStack_4c;
    *(int *)(unaff_EBP + -0x10) = iVar3;
    uStack_48 = extraout_ECX_00;
    FUN_0068684c(0);
    uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_0074eacf(*(undefined4 *)(unaff_EBP + 8),uVar2,*(undefined4 *)(unaff_EBP + 0x14),0,0,0,0,0,0,
                 0,0);
    *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + 0x10) = uVar2;
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      if (*piVar5 == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750f29;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x750f30;
      uVar2 = FUN_0042fb0a();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      if (*piVar5 == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750f42;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x750f49;
      uVar2 = FUN_0042fb34();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    }
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      if (*piVar5 == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750f9a;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x14) = *piVar5;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750faa;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x750fb2;
      iVar3 = FUN_0042fb0a();
      puStack_44 = (undefined4 *)0x750fbc;
      iVar4 = FUN_0042fb0a();
      *(int *)(unaff_EBP + -0x14) = iVar3 + iVar4;
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750f61;
        FUN_00878dfb();
      }
      if (*piVar5 == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750f6b;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x750f75;
      uVar2 = FUN_0042fb0a();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      puStack_44 = (undefined4 *)0x750f7f;
      iVar3 = FUN_0042fb0a();
      if (*(int *)(unaff_EBP + -0x14) < iVar3) {
        *(int *)(unaff_EBP + -0x14) = iVar3;
      }
      else {
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14);
      }
    }
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x751009;
        FUN_00878dfb();
      }
      if (*piVar5 == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x751017;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x751021;
      iVar4 = FUN_0042fb34();
      puStack_44 = (undefined4 *)0x75102a;
      iVar3 = FUN_0042fb34();
      if (iVar3 <= iVar4) {
        iVar3 = iVar4;
      }
    }
    else {
      if (*piVar5 == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750fd4;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        uStack_48 = 0x750fe5;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x750fed;
      iVar3 = FUN_0042fb34();
      puStack_44 = (undefined4 *)0x750ff6;
      iVar4 = FUN_0042fb34();
      iVar3 = iVar3 + iVar4;
    }
    if (800 < *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 8)) {
      *(int *)(unaff_EBP + 0x14) = 800 - *(int *)(unaff_EBP + -0x14);
    }
    if (*(int *)(unaff_EBP + 0x14) < 0) {
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
    }
    if (600 < iVar3 + *(int *)(unaff_EBP + 0xc)) {
      *(int *)(unaff_EBP + 0x10) = 600 - iVar3;
    }
    if (*(int *)(unaff_EBP + 0x10) < 0) {
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
    }
    puStack_44 = &DAT_00980690;
    uStack_48 = 0x75107b;
    FUN_00403191();
    puStack_44 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_48 = 0x751088;
    FUN_00403191();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar5 == (int *)0x0) {
      puStack_44 = (undefined4 *)0x80004003;
      uStack_48 = 0x75109d;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
    puStack_44 = *(undefined4 **)(unaff_EBP + -0x34);
    iVar3 = *piVar5;
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    *(int **)(unaff_EBP + 0x18) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x90))
                      (piVar5,*(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + 0x14),
                       *(int *)(unaff_EBP + 0x10) + iVar4,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
    iVar3 = **(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00429607(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00424aee(&DAT_00980690);
    iVar3 = unaff_EBP + -0x30;
    iVar7 = unaff_EBP + -0x40;
    iVar4 = -iVar4;
    iVar6 = -*(int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00424e27(iVar6,iVar4,iVar7,iVar3);
    FUN_00424f2f(iVar6,iVar4,iVar7,iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_00412600();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


