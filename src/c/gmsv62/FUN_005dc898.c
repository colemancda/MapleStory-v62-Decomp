/* FUN_005dc898 - 0x005dc898 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005dc898(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x248;
  piStack_74 = (int *)0x5dc8bb;
  FUN_005dd132();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while( true ) {
    piStack_74 = (int *)0x5dc8cb;
    FUN_0087a1b0();
    piStack_74 = (int *)0x0;
    uStack_78 = 0;
    puStack_7c = &stack0xffffff90;
    uVar1 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_7c;
    FUN_004033a1(uVar1);
    iVar2 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_7c = (undefined1 *)0x5dc905;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      piStack_74 = (int *)(unaff_EBP + -0x18);
      uStack_78 = 0x5dc91b;
      piStack_74 = (int *)FUN_00404b30();
      if (((int)piStack_74 < 0) && (piStack_74 != (int *)0x80004002)) {
        uStack_78 = 0x5dc92c;
        FUN_00878dfb();
      }
    }
    piStack_74 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_78 = 0x5dc939;
    piStack_74 = (int *)FUN_00402bc3();
    if ((int)piStack_74 < 0) {
      uStack_78 = 0x5dc944;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) break;
    piStack_74 = (int *)0xffffffff;
    uStack_78 = 0x5dc957;
    iVar2 = FUN_005dd16d();
    piStack_74 = (int *)0x0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_78;
    puStack_7c = (undefined1 *)0x85c;
    FUN_00679e4e(&uStack_78);
    puStack_7c = (undefined1 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d();
    uStack_78 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_7c = (undefined1 *)0x5dc98e;
    uVar1 = FUN_00412550();
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
    puStack_7c = (undefined1 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_74 = (int *)FUN_00402bc3();
    if ((int)piStack_74 < 0) {
      uStack_78 = 0x5dc9ab;
      FUN_00878dfb();
    }
    piStack_74 = (int *)0x0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_78;
    puStack_7c = (undefined1 *)0x652;
    FUN_00679e4e(&uStack_78);
    puStack_7c = (undefined1 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d();
    uStack_78 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_7c = (undefined1 *)0x5dc9e0;
    uVar1 = FUN_00412550();
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    puStack_7c = (undefined1 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_74 = (int *)FUN_00402bc3();
    if ((int)piStack_74 < 0) {
      uStack_78 = 0x5dc9fd;
      FUN_00878dfb();
    }
    piStack_74 = (int *)0x1;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_78;
    puStack_7c = (undefined1 *)0x43e;
    FUN_00679e4e(&uStack_78);
    puStack_7c = (undefined1 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d();
    uStack_78 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_7c = (undefined1 *)0x5dca33;
    iVar3 = FUN_00412550();
    *(int *)(iVar2 + 0x14) = iVar3 + -1;
    puStack_7c = (undefined1 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_74 = (int *)FUN_00402bc3();
    if ((int)piStack_74 < 0) {
      uStack_78 = 0x5dca51;
      FUN_00878dfb();
    }
    piStack_74 = (int *)0x0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_78;
    puStack_7c = (undefined1 *)0x67c;
    FUN_00679e4e(&uStack_78);
    puStack_7c = (undefined1 *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d();
    uStack_78 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_7c = (undefined1 *)0x5dca86;
    uVar1 = FUN_00412550();
    *(undefined4 *)(iVar2 + 0x18) = uVar1;
    puStack_7c = (undefined1 *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_74 = (int *)FUN_00402bc3();
    if ((int)piStack_74 < 0) {
      uStack_78 = 0x5dcaa3;
      FUN_00878dfb();
    }
    piStack_74 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_74 != (int *)0x0) {
      uStack_78 = 0x5dcab3;
      (**(code **)(*piStack_74 + 8))();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  piStack_74 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_74 != (int *)0x0) {
    uStack_78 = 0x5dcacc;
    (**(code **)(*piStack_74 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


