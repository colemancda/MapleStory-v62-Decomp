/* FUN_00722452 - 0x00722452 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00722452(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  uint uVar3;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 *puStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  int iStack_bc;
  undefined *puStack_b8;
  int *piStack_b4;
  
  FUN_00879bb8();
  piStack_b4 = (int *)0x722472;
  FUN_004b2689();
  piStack_b4 = &DAT_00980690;
  puStack_b8 = (undefined *)0x722480;
  FUN_00403191();
  piStack_b4 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_b8 = (undefined *)0x72248e;
  FUN_00403191();
  piStack_b4 = (int *)0x0;
  puStack_b8 = (undefined *)0x0;
  iStack_bc = unaff_EBP + -0x60;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x70);
  puStack_cc = (undefined1 *)&uStack_c4;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c4;
  iStack_c8 = 0xa38;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_d0 = 0x7224b2;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_cc = (undefined1 *)0x7224bf;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x7224c6;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x7224cd;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_bc = 0x7224d8;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    piStack_b4 = (int *)(unaff_EBP + -0x24);
    puStack_b8 = (undefined *)0x7224ee;
    piStack_b4 = (int *)FUN_00404b30();
    if (((int)piStack_b4 < 0) && (piStack_b4 != (int *)0x80004002)) {
      puStack_b8 = (undefined *)0x7224ff;
      FUN_00878dfb();
    }
  }
  piStack_b4 = (int *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_b8 = (undefined *)0x72250c;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    puStack_b8 = (undefined *)0x722517;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_b8 = (undefined *)0x722524;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    puStack_b8 = (undefined *)0x72252f;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_b8 = (undefined *)0x72253c;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    puStack_b8 = (undefined *)0x722547;
    FUN_00878dfb();
  }
  piStack_b4 = &DAT_00980690;
  puStack_b8 = (undefined *)0x722550;
  FUN_00403191();
  piStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_b8 = (undefined *)0x72255d;
  FUN_00403191();
  piStack_b4 = (int *)0x0;
  puStack_b8 = (undefined *)0x0;
  iStack_bc = unaff_EBP + -0x40;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x50);
  puStack_cc = (undefined1 *)&uStack_c4;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c4;
  iStack_c8 = 0xa39;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_d0 = 0x722581;
  uStack_c4 = extraout_ECX_00;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_cc = (undefined1 *)0x722591;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x722598;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x72259f;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_bc = 0x7225aa;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    piStack_b4 = (int *)(unaff_EBP + -0x28);
    puStack_b8 = (undefined *)0x7225c0;
    piStack_b4 = (int *)FUN_00404b30();
    if (((int)piStack_b4 < 0) && (piStack_b4 != (int *)0x80004002)) {
      puStack_b8 = (undefined *)0x7225d1;
      FUN_00878dfb();
    }
  }
  piStack_b4 = (int *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b8 = (undefined *)0x7225e1;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    puStack_b8 = (undefined *)0x7225ec;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_b8 = (undefined *)0x7225f9;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    puStack_b8 = (undefined *)0x722604;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_b8 = (undefined *)0x722611;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    puStack_b8 = (undefined *)0x72261c;
    FUN_00878dfb();
  }
  for (uVar3 = 0;
      (*(int *)(extraout_ECX + 0x578) != 0 &&
      (uVar3 < *(uint *)(*(int *)(extraout_ECX + 0x578) + -4))); uVar3 = uVar3 + 1) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_bc = unaff_EBP + -0x10;
    puStack_b8 = &DAT_0096477c;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_c0 = (undefined1 *)0x72264b;
    piStack_b4 = (int *)uVar3;
    FUN_00434e21();
    piStack_b4 = (int *)0x0;
    puStack_b8 = (undefined *)0x0;
    iStack_bc = -1;
    puStack_c0 = *(undefined1 **)(unaff_EBP + -0x10);
    uStack_c4 = 0;
    iStack_c8 = 0;
    puStack_cc = (undefined1 *)0x72265d;
    (*DAT_0097b4c8)();
    puStack_cc = (undefined1 *)0x72266a;
    FUN_0087a1b0();
    puStack_cc = (undefined1 *)0x0;
    uStack_d0 = 0;
    uStack_d4 = 0xffffffff;
    uVar2 = FUN_00449713(&iStack_c8);
    uVar2 = FUN_00456ad5(uVar2);
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_d4;
    FUN_004033a1(uVar2);
    iVar1 = unaff_EBP + -0xb0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0040263d(iVar1);
    FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_d4 = 0x7226b1;
    uVar2 = FUN_004032b4();
    puStack_cc = (undefined1 *)0x0;
    uStack_d0 = 0;
    uStack_d4 = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
    (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x10));
    piStack_b4 = (int *)0x7226d0;
    FUN_0087a1b0();
    piStack_b4 = (int *)0x0;
    puStack_b8 = (undefined *)0x0;
    iStack_bc = -1;
    uStack_c4 = 0x7226df;
    puStack_c0 = &stack0xffffff50;
    uStack_c4 = FUN_00449713();
    iStack_c8 = 0x7226e5;
    puStack_c0 = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x20) = &iStack_bc;
    uStack_c4 = 0x7226f2;
    FUN_004033a1();
    puStack_c0 = (undefined1 *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_c4 = 0x722705;
    FUN_0040263d();
    uStack_c4 = 0x72270c;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_bc = 0x722717;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    piStack_b4 = (int *)(uint)((int)uVar3 < DAT_0096b4d8);
    iStack_bc = unaff_EBP + -0x2c;
    *(undefined ***)(unaff_EBP + -0x20) = &puStack_b8;
    puStack_c0 = (undefined1 *)0x722735;
    FUN_0048bb05();
    puStack_c0 = (undefined1 *)(unaff_EBP + -0x1c);
    *(int **)(unaff_EBP + -0x30) = &iStack_bc;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_c4 = 0x722748;
    iStack_bc = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_c0 = (undefined1 *)0x722757;
    FUN_0048b99c();
    puStack_c0 = (undefined1 *)0x72275e;
    FUN_004b22e5();
    piStack_b4 = (int *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_b8 = (undefined *)0x72276e;
    piStack_b4 = (int *)FUN_00402bc3();
    if ((int)piStack_b4 < 0) {
      puStack_b8 = (undefined *)0x722779;
      FUN_00878dfb();
    }
    piStack_b4 = (int *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_b8 = (undefined *)0x722789;
    piStack_b4 = (int *)FUN_00402bc3();
    if ((int)piStack_b4 < 0) {
      puStack_b8 = (undefined *)0x722794;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_b4 = (int *)0x7227a0;
    FUN_00414ebb();
  }
  iVar1 = *(int *)(extraout_ECX + 0x570);
  piStack_b4 = *(int **)(*(int *)(extraout_ECX + 0x580) + 0x48);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  if (iVar1 < (int)piStack_b4) {
    piStack_b4 = (int *)iVar1;
  }
  puStack_b8 = (undefined *)0x7227c7;
  FUN_004b2699();
  piStack_b4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_b4 != (int *)0x0) {
    puStack_b8 = (undefined *)0x7227d8;
    (**(code **)(*piStack_b4 + 8))();
  }
  piStack_b4 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_b4 != (int *)0x0) {
    puStack_b8 = (undefined *)0x7227e9;
    (**(code **)(*piStack_b4 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


