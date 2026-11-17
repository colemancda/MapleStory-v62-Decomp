/* FUN_005dee77 - 0x005dee77 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005dee77(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *puVar5;
  int unaff_EBP;
  undefined1 *puStack_f4;
  int *piStack_f0;
  undefined *puStack_ec;
  undefined4 *puStack_e8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x44) = extraout_ECX;
  puStack_e8 = (undefined4 *)0x5dee9e;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_e8 = (undefined4 *)0x5deeac;
  FUN_00403191();
  puStack_e8 = (undefined4 *)0x0;
  puStack_ec = (undefined *)(unaff_EBP + -0x90);
  piStack_f0 = (int *)(unaff_EBP + -0x80);
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_f4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_f4 = extraout_ECX_00;
  FUN_00679e4e(&puStack_f4,0xeac);
  iVar2 = unaff_EBP + -0xd0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_ec = (undefined *)0x5deefc;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x5c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    puStack_e8 = (undefined4 *)0x5def12;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_e8 = (undefined4 *)0x5def23;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_e8 = (undefined4 *)0x5def33;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_e8 = (undefined4 *)0x5def3e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_e8 = (undefined4 *)0x5def4b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_e8 = (undefined4 *)0x5def56;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_e8 = (undefined4 *)0x5def66;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_e8 = (undefined4 *)0x5def71;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_e8 = (undefined4 *)0x5def80;
    FUN_00878dfb();
  }
  puStack_e8 = (undefined4 *)0x5def8c;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_e8 = (undefined4 *)0x5def99;
  FUN_004035f5();
  FUN_004027b3();
  puStack_e8 = (undefined4 *)0x5defab;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x34) == 0) {
      puStack_e8 = (undefined4 *)0x5defc4;
      FUN_00878dfb();
    }
    piStack_f0 = *(int **)(unaff_EBP + -0x34);
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x70);
    puStack_ec = (undefined *)0x1;
    puStack_f4 = (undefined1 *)0x5defd7;
    iVar2 = (**(code **)(*piStack_f0 + 0xc))();
    if (iVar2 != 0) break;
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x24);
    puStack_ec = (undefined *)0x5defec;
    FUN_00405a23();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_e8 = (undefined4 *)0x5df005;
    iVar2 = FUN_0087a208();
    *(int *)(unaff_EBP + -0x28) = iVar2;
    iVar2 = (iVar2 + -0x2450e0) / 1000;
    puStack_e8 = (undefined4 *)0x0;
    puStack_ec = (undefined *)0x3e8;
    *(undefined ***)(unaff_EBP + -0x10) = &puStack_ec;
    piStack_f0 = (int *)(unaff_EBP + -0x24);
    puStack_f4 = (undefined1 *)0x5df029;
    FUN_004059fd();
    piStack_f0 = (int *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_f4 = (undefined1 *)0x5df03c;
    FUN_0040263d();
    puStack_f4 = (undefined1 *)0x5df043;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_ec = (undefined *)0x5df04e;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x60) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar3 != 0) {
      puStack_e8 = (undefined4 *)0x5df064;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_e8 = (undefined4 *)0x5df075;
        FUN_00878dfb();
      }
    }
    puVar5 = (undefined *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_e8 = (undefined4 *)0x5df085;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_e8 = (undefined4 *)0x5df090;
      FUN_00878dfb();
      puVar5 = extraout_ECX_01;
    }
    puStack_e8 = (undefined4 *)0x0;
    puStack_f4 = (undefined1 *)&puStack_ec;
    *(undefined ***)(unaff_EBP + -0x10) = &puStack_ec;
    piStack_f0 = (int *)0x3b4;
    puStack_ec = puVar5;
    FUN_00679e4e();
    piStack_f0 = (int *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_f4 = (undefined1 *)0x5df0bd;
    FUN_0040263d();
    puStack_f4 = (undefined1 *)0x5df0c4;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_ec = (undefined *)0x5df0cf;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x4c) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar3 != 0) {
      puStack_e8 = (undefined4 *)0x5df0e5;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_e8 = (undefined4 *)0x5df0f6;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_e8 = (undefined4 *)0x5df106;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_e8 = (undefined4 *)0x5df111;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    FUN_005e056f();
    puStack_e8 = *(undefined4 **)(unaff_EBP + -0x18);
    piStack_f0 = (int *)&puStack_e8;
    *puStack_e8 = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_e8;
    puStack_ec = (undefined *)0x63f;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_f4 = (undefined1 *)0x5df13c;
    FUN_00679e4e();
    puStack_ec = (undefined *)(unaff_EBP + -0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_f0 = (int *)0x5df14f;
    FUN_0040263d();
    piStack_f0 = (int *)0x5df156;
    puStack_e8 = (undefined4 *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_ec = (undefined *)0x5df160;
    uVar4 = FUN_00412550();
    iVar3 = FUN_005e04d3();
    *(undefined4 *)(iVar3 + 4) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_e8 = (undefined4 *)0x5df17f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_e8 = (undefined4 *)0x5df18a;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x44);
    *(int *)(*(int *)(unaff_EBP + -0x18) + 8) = iVar2;
    iVar1 = *(int *)(iVar3 + 4 + iVar2 * 4);
    *(int *)(unaff_EBP + -0x10) = iVar3 + 4 + iVar2 * 4;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + -4);
    }
    puStack_ec = *(undefined **)(unaff_EBP + -0x18);
    puStack_e8 = (undefined4 *)0x0;
    puStack_f4 = (undefined1 *)&puStack_ec;
    *(undefined4 *)(puStack_ec + 0xc) = uVar4;
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
    piStack_f0 = (int *)0x63a;
    FUN_00679e4e();
    piStack_f0 = (int *)(unaff_EBP + -0xe0);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_f4 = (undefined1 *)0x5df1da;
    FUN_0040263d();
    puStack_f4 = (undefined1 *)0x5df1e1;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_ec = (undefined *)0x5df1ec;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
    puStack_e8 = (undefined4 *)0x5df1fe;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_e8 = (undefined4 *)0x5df20f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_e8 = (undefined4 *)0x5df21f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_e8 = (undefined4 *)0x5df22a;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)0x5df235;
    iVar2 = FUN_005d90ec();
    *(int *)(unaff_EBP + -0x3c) = iVar2;
    if (iVar2 != 0) {
      puStack_e8 = (undefined4 *)0x5df247;
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_e8 = (undefined4 *)0x5df261;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      while( true ) {
        puStack_e8 = (undefined4 *)0x0;
        puStack_ec = &DAT_00964364;
        piStack_f0 = (int *)0x5df275;
        iVar2 = FUN_004538dc();
        if (iVar2 == -1) break;
        puStack_e8 = (undefined4 *)&DAT_00964364;
        puStack_ec = (undefined *)(unaff_EBP + -0x48);
        piStack_f0 = (int *)0x5df28c;
        FUN_005e03fa();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_e8 = (undefined4 *)0x5df299;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00414ebb();
      }
      puStack_e8 = (undefined4 *)(unaff_EBP + -0x14);
      puStack_ec = (undefined *)0x5df2b8;
      FUN_005e0a8a();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00414ebb();
    }
    puStack_e8 = (undefined4 *)0x5df2d0;
    iVar2 = FUN_005e0740();
    FUN_005e05a2();
    FUN_005e05bf();
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x18);
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x5df2f7;
    FUN_005e0824();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x28) + -0x50e0;
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x30);
    puStack_ec = (undefined *)0x5df312;
    FUN_005e0963();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x28) + -0x50e0;
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x10);
    puStack_ec = (undefined *)0x5df32d;
    FUN_005e0963();
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      puStack_e8 = (undefined4 *)0x5df342;
      FUN_005dd104();
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_e8 = (undefined4 *)0x5df357;
      FUN_005e064d();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      puStack_e8 = (undefined4 *)0x5df36b;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      puStack_e8 = (undefined4 *)0x5df37c;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    puStack_e8 = (undefined4 *)0x5df398;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_e8 = (undefined4 *)0x5df3a7;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_e8 = (undefined4 *)0x5df3b9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_e8 = (undefined4 *)0x5df3c4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    puStack_e8 = (undefined4 *)0x5df3d5;
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    puStack_e8 = (undefined4 *)0x5df3e6;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


