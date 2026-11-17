/* FUN_00755c88 - 0x00755c88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00755c88(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int *piVar4;
  undefined1 *puStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int *piStack_68;
  int iStack_64;
  undefined1 *puStack_60;
  int iStack_5c;
  undefined1 *puStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  if (((*(int *)(extraout_ECX + 0x10) == 0) ||
      (*(int *)(extraout_ECX + 0x14) != *(int *)(unaff_EBP + 8))) ||
     (*(int *)(extraout_ECX + 0x18) != iVar2)) {
    iStack_54 = 0x8e;
    puStack_58 = (undefined1 *)0x122;
    iStack_5c = 0xb;
    puStack_60 = (undefined1 *)0x755cca;
    FUN_0074d72a();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_54 = 0;
    puStack_58 = (undefined1 *)0x1;
    puStack_60 = *(undefined1 **)(unaff_EBP + 8);
    iStack_64 = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_68 = (int *)0x755ce3;
    iStack_5c = iVar2;
    FUN_0075699b();
    puStack_58 = &stack0xffffffb0;
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffb0;
    iStack_54 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_5c = 0x755cf7;
    FUN_00756efd();
    iStack_54 = *(undefined4 *)(unaff_EBP + 0x10);
    puStack_58 = (undefined1 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_5c = 0x755d07;
    FUN_00724127();
    iStack_5c = 0x755d0e;
    FUN_00598ef0();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_54 = 0x755d19;
    iStack_54 = FUN_00449713();
    puStack_58 = (undefined1 *)0xa;
    iStack_5c = 0x755d23;
    FUN_007585ac();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    iStack_54 = 1;
    puStack_60 = (undefined1 *)&puStack_58;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_58;
    iStack_5c = 7;
    iStack_64 = 0x755d42;
    FUN_00756efd();
    iStack_5c = 0x10ae;
    puStack_60 = (undefined1 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_64 = 0x755d5b;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_5c = 0x755d66;
    iStack_5c = FUN_00449713();
    puStack_60 = (undefined1 *)0x1b;
    iStack_64 = *(int *)(extraout_ECX + 0xc) + -0x14;
    piStack_68 = (int *)0xf;
    iStack_6c = 0x755d79;
    FUN_00757d85();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_54 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_58 = (undefined1 *)0x755d9c;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_54 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_58 = (undefined1 *)(unaff_EBP + -0x10);
    iStack_5c = 0x755daf;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00414ebb();
    iStack_54 = 0x755dca;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_54 = unaff_EBP + -0x3c;
    puStack_58 = (undefined1 *)0x755dd8;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_54 = 0x755de4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_54 = 0x755dee;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_54 = unaff_EBP + -0x2c;
    puStack_58 = (undefined1 *)0x755dfc;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_54 = 0x755e08;
      FUN_00878dfb();
    }
    iStack_54 = 0;
    puStack_58 = (undefined1 *)0xffffffff;
    iStack_5c = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_60 = (undefined1 *)0x0;
    iStack_64 = 0;
    piStack_68 = (int *)0x755e1b;
    (*DAT_0097b4c8)();
    piStack_68 = (int *)0x755e28;
    FUN_0087a1b0();
    piStack_68 = (int *)0x0;
    iStack_6c = 0;
    iStack_70 = unaff_EBP + -0x3c;
    iStack_74 = unaff_EBP + -0x2c;
    puStack_78 = (undefined1 *)0xffffffff;
    uVar3 = FUN_00449713(&iStack_64);
    uVar3 = FUN_00456ad5(uVar3);
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_78;
    FUN_004033a1(uVar3);
    iVar2 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_70 = 0x755e78;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    piStack_68 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x14) = &piStack_68;
    if (*(int *)(unaff_EBP + 8) != 0) {
      iStack_6c = unaff_EBP + 8;
      iStack_70 = 0x755e91;
      iStack_6c = FUN_0041a581();
      if ((iStack_6c < 0) && (iStack_6c != -0x7fffbffe)) {
        iStack_70 = 0x755ea2;
        FUN_00878dfb();
      }
    }
    iStack_6c = 0x39;
    iStack_70 = 10;
    iStack_74 = 0x755ead;
    FUN_00757b97();
    piStack_68 = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_6c = 0x755eba;
    piStack_68 = (int *)FUN_00402bc3();
    if ((int)piStack_68 < 0) {
      iStack_6c = 0x755ec5;
      FUN_00878dfb();
    }
    piStack_68 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_6c = 0x755ed2;
    piStack_68 = (int *)FUN_00402bc3();
    if ((int)piStack_68 < 0) {
      iStack_6c = 0x755edd;
      FUN_00878dfb();
    }
    piStack_68 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_6c = 0x755eea;
    piStack_68 = (int *)FUN_00402bc3();
    if ((int)piStack_68 < 0) {
      iStack_6c = 0x755ef5;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piVar4 = (int *)0x0;
    do {
      iStack_6c = *(undefined4 *)(unaff_EBP + 0x10);
      iStack_70 = 0x755f0d;
      piStack_68 = piVar4;
      piStack_68 = (int *)FUN_00598e2f();
      iVar2 = extraout_ECX_00;
      if (piStack_68 != (int *)0x0) {
        iStack_6c = 0x755f1d;
        iVar2 = FUN_0064d61f();
        piStack_68 = (int *)(iVar2 + 4);
        iStack_6c = unaff_EBP + -0x14;
        iStack_70 = 0x755f2d;
        FUN_0045e02d();
        piStack_68 = (int *)&DAT_0096b140;
        iStack_6c = unaff_EBP + 8;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_70 = 0x755f41;
        piStack_68 = (int *)FUN_004653c5();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_6c = 0x755f4e;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_68 = (int *)0x755f5a;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        piStack_68 = (int *)0x755f66;
        FUN_00414ebb();
        iVar2 = extraout_ECX_01;
      }
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((int)piVar4 < 3);
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      piStack_68 = (int *)0x0;
      iStack_6c = 1;
      puStack_78 = (undefined1 *)&iStack_70;
      *(int **)(unaff_EBP + 0x10) = &iStack_70;
      iStack_74 = 10;
      iStack_70 = iVar2;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_74 = 0x755f90;
      iStack_74 = FUN_00449713();
      puStack_78 = (undefined1 *)0x39;
      FUN_00757d85(0x5c,*(int *)(extraout_ECX + 0xc) + -0x14);
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_68 = (int *)0x755faf;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_68 = (int *)0x755fbb;
    FUN_00414ebb();
    piStack_68 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_68 != (int *)0x0) {
      iStack_6c = 0x755fcb;
      (**(code **)(*piStack_68 + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_68 = (int *)0x755fd7;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


