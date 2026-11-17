/* FUN_0072813b - 0x0072813b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072813b(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puStack_1f4;
  int iStack_1f0;
  undefined1 *puStack_1ec;
  int *piStack_1e4;
  undefined1 *puStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  iStack_1cc = 0x72815b;
  FUN_0081622a();
  iStack_1cc = 0x728168;
  FUN_00728bce();
  iStack_1cc = 0x728173;
  FUN_00448dc6();
  iStack_1cc = unaff_EBP + -0x1c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_1d0 = 0x728183;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_1cc = 0x72819a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_1cc = 0x7281aa;
  FUN_00403191();
  iStack_1cc = 0;
  iStack_1d0 = unaff_EBP + -0x184;
  iStack_1d4 = unaff_EBP + -0xe4;
  puStack_1e0 = (undefined1 *)&uStack_1d8;
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1d8;
  iStack_1dc = 0xb31;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_1e4 = (int *)0x7281d6;
  FUN_00679e4e();
  iStack_1dc = unaff_EBP + -0x1a4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_1e0 = (undefined1 *)0x7281e6;
  FUN_00405a1d();
  puStack_1e0 = (undefined1 *)0x7281ed;
  FUN_00402660();
  puStack_1e0 = (undefined1 *)0x7281f4;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_1d0 = 0x7281ff;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (iVar3 != 0) {
    iStack_1cc = 0x728215;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_1cc = 0x728226;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_1cc = 0x728236;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x728241;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_1cc = 0x728251;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x72825c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_1cc = 0x72826c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x728277;
    FUN_00878dfb();
  }
  iStack_1cc = 0x728283;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_1cc = 0x728293;
  FUN_00403191();
  iStack_1cc = 0;
  iStack_1d0 = unaff_EBP + -0x174;
  iStack_1d4 = unaff_EBP + -0x114;
  puStack_1e0 = (undefined1 *)&uStack_1d8;
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1d8;
  iStack_1dc = 0xb32;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_1e4 = (int *)0x7282ba;
  FUN_00679e4e();
  iStack_1dc = unaff_EBP + -0x1b4;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_1e0 = (undefined1 *)0x7282ca;
  FUN_00405a1d();
  puStack_1e0 = (undefined1 *)0x7282d1;
  FUN_00402660();
  puStack_1e0 = (undefined1 *)0x7282d8;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_1d0 = 0x7282e3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -100) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar3 != 0) {
    iStack_1cc = 0x7282f9;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_1cc = 0x72830a;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_1cc = 0x72831a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x728325;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_1cc = 0x728335;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x728340;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_1cc = 0x728350;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x72835b;
    FUN_00878dfb();
  }
  iStack_1cc = 0x728367;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_1cc = 0x728377;
  FUN_00403191();
  iStack_1cc = 0;
  iStack_1d0 = unaff_EBP + -0x194;
  iStack_1d4 = unaff_EBP + -0x134;
  puStack_1e0 = (undefined1 *)&uStack_1d8;
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1d8;
  iStack_1dc = 0xb33;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_1e4 = (int *)0x72839e;
  uStack_1d8 = extraout_ECX_00;
  FUN_00679e4e();
  iStack_1dc = unaff_EBP + -0x1c4;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_1e0 = (undefined1 *)0x7283ae;
  FUN_00405a1d();
  puStack_1e0 = (undefined1 *)0x7283b5;
  FUN_00402660();
  puStack_1e0 = (undefined1 *)0x7283bc;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_1d0 = 0x7283c7;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x5c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (iVar3 != 0) {
    iStack_1cc = 0x7283dd;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_1cc = 0x7283ee;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_1cc = 0x7283fe;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x728409;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_1cc = 0x728419;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x728424;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_1cc = 0x728434;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1cc = 0x72843f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x60) = DAT_00978368;
  iStack_1cc = 0x728451;
  iVar3 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(iVar3 + 4);
  FUN_0045e4a2();
  iStack_1cc = 0x728469;
  iVar3 = FUN_007295d1();
  *(int *)(unaff_EBP + -0x50) = iVar3;
  if (iVar3 != 0) {
    iVar5 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x2c) + 0x7c) + 0x38);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    iVar9 = iVar5 << 3;
    *(int *)(unaff_EBP + -0x6c) = iVar5;
    *(int *)(unaff_EBP + -0x4c) = iVar9;
    *(undefined4 *)(unaff_EBP + -0x14) = 0x78;
    while ((iVar2 = *(int *)(iVar3 + 8), iVar2 != 0 &&
           (uVar4 = iVar5 + *(int *)(unaff_EBP + -0x38), uVar1 = *(uint *)(iVar2 + -4),
           *(uint *)(unaff_EBP + -0x30) = uVar4, uVar4 < uVar1))) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar9 + 4 + iVar2);
      iStack_1cc = 0x7284ce;
      iVar5 = FUN_008345ae();
      if ((iVar5 == 1) &&
         (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0xbc) !=
          **(int **)(iVar9 + 4 + *(int *)(iVar3 + 8)))) {
        *(undefined4 *)(unaff_EBP + -0x3c) = 1;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      }
      iStack_1cc = **(undefined4 **)(unaff_EBP + -0x24);
      iStack_1d0 = *(undefined4 *)(unaff_EBP + -0x74);
      iStack_1d4 = 0x72850b;
      uVar6 = FUN_00650dae();
      iStack_1cc = 0xff;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
      iStack_1d0 = 0x728520;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puVar7 = (undefined4 *)(unaff_EBP + -0x44);
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        puVar7 = (undefined4 *)(unaff_EBP + -0x40);
      }
      *(undefined4 *)(unaff_EBP + -0x20) = *puVar7;
      piVar8 = *(int **)(unaff_EBP + 8);
      if (piVar8 == (int *)0x0) {
        iStack_1cc = 0x728546;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + 8);
      }
      iVar3 = *piVar8;
      uStack_1d8 = *(undefined4 *)(unaff_EBP + -0x20);
      iStack_1d4 = *(int *)(unaff_EBP + -0x154);
      iStack_1d0 = *(int *)(unaff_EBP + -0x150);
      iStack_1dc = *(int *)(unaff_EBP + -0x14) + -0x15;
      iStack_1cc = *(undefined4 *)(unaff_EBP + -0x14c);
      puStack_1e0 = (undefined1 *)0x7;
      *(int **)(unaff_EBP + -0x10) = piVar8;
      piStack_1e4 = piVar8;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_1ec = *(undefined1 **)(unaff_EBP + -0x10);
        puStack_1f4 = (undefined1 *)0x728582;
        iStack_1f0 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_1ec = (undefined1 *)0x728592;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_1ec = (undefined1 *)0x72859d;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      puStack_1ec = (undefined1 *)0x7285b0;
      FUN_00414f8b();
      iStack_1f0 = unaff_EBP + -0x1c;
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1ec;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_1f4 = (undefined1 *)0x7285c5;
      FUN_0046fcc9();
      iStack_1f0 = unaff_EBP + -0x28;
      puStack_1f4 = (undefined1 *)0x7285ce;
      FUN_007d3a22();
      puStack_1ec = (undefined1 *)0x7285dd;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_1ec = (undefined1 *)0x7285ed;
      FUN_00403191();
      puStack_1ec = (undefined1 *)(unaff_EBP + -0xf4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_1f0 = 0x728607;
      iStack_1f0 = FUN_004458be();
      puStack_1f4 = (undefined1 *)0x728610;
      uVar6 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1f4;
      FUN_00448a17(uVar6);
      iVar5 = *(int *)(unaff_EBP + -0x14);
      iVar3 = iVar5 + -0x12;
      uVar6 = 0x2f;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_0044974c(0x2f,iVar3);
      FUN_005c1d2c(uVar6,iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_1ec = (undefined1 *)0x728648;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_1ec = (undefined1 *)0x728653;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_1ec = (undefined1 *)0x728663;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_1ec = (undefined1 *)0x72866e;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0xbc) == **(int **)(unaff_EBP + -0x24)) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        puStack_1ec = (undefined1 *)(unaff_EBP + -0x70);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        iStack_1f0 = 0x728748;
        puVar7 = (undefined4 *)FUN_00679d22();
        puStack_1ec = (undefined1 *)*puVar7;
        iStack_1f0 = unaff_EBP + -0x20;
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        puStack_1f4 = (undefined1 *)0x72875a;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        FUN_00414ebb();
        puStack_1ec = (undefined1 *)0x728778;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
        puStack_1ec = (undefined1 *)(unaff_EBP + -0x84);
        iStack_1f0 = 0x728785;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x728791;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_0087a1b0();
        iVar3 = *(int *)(unaff_EBP + -0x18) + -1;
        puStack_1f4 = (undefined1 *)0x7287b3;
        iStack_1f0 = iVar3;
        puStack_1ec = (undefined1 *)&piStack_1e4;
        iStack_1f0 = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1ec;
        puStack_1f4 = (undefined1 *)0x7287bf;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iStack_1f0 = 0x7287cb;
        FUN_0044974c();
        iStack_1f0 = 0x7287d2;
        uVar6 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        puStack_1ec = (undefined1 *)0x7287e5;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_1ec = (undefined1 *)0x7287f0;
          FUN_00878dfb();
        }
        puStack_1ec = (undefined1 *)0x7287f9;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
        puStack_1ec = (undefined1 *)(unaff_EBP + -0xc4);
        iStack_1f0 = 0x728806;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          puStack_1ec = (undefined1 *)0x728812;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        puStack_1ec = (undefined1 *)0x72881f;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
        puStack_1ec = (undefined1 *)(unaff_EBP + -0xa4);
        iStack_1f0 = 0x72882c;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          puStack_1ec = (undefined1 *)0x728838;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        FUN_0087a1b0();
        *(int ***)(unaff_EBP + -0x10) = &piStack_1e4;
        puStack_1ec = (undefined1 *)(unaff_EBP + -0xa4);
        iStack_1f0 = 0x72885d;
        iStack_1f0 = FUN_004458be();
        puStack_1f4 = *(undefined1 **)(unaff_EBP + -0x10);
        uVar6 = FUN_00412335(iVar3);
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1f4;
        FUN_004033a1(uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        FUN_007d4a9a(unaff_EBP + -0x54,4);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x14);
        uVar10 = 0x2f;
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_0044974c(0x2f,uVar6);
        FUN_005c1d2c(uVar10,uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
          puStack_1ec = (undefined1 *)0x7288ac;
          (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        puStack_1ec = (undefined1 *)0x7288bc;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x7288c7;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        puStack_1ec = (undefined1 *)0x7288d7;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x7288e2;
          FUN_00878dfb();
        }
        puStack_1ec = (undefined1 *)0x7288eb;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
        puStack_1ec = (undefined1 *)(unaff_EBP + -0xb4);
        iStack_1f0 = 0x7288f8;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x728904;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        puStack_1ec = (undefined1 *)0x728911;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
        puStack_1ec = (undefined1 *)(unaff_EBP + -0x94);
        iStack_1f0 = 0x72891e;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x72892a;
          FUN_00878dfb();
        }
        puStack_1ec = (undefined1 *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        iStack_1f0 = 0x728944;
        iStack_1f0 = FUN_004458be();
        puStack_1f4 = (undefined1 *)0x72894d;
        uVar6 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1f4;
        puStack_1f4 = extraout_ECX_01;
        FUN_00448a17(uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_007d4a9a(unaff_EBP + -0x58,0x20);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x14);
        iVar3 = *(int *)(unaff_EBP + -0x18) + 0x33;
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_0044974c(iVar3,uVar6);
        FUN_005c1d2c(iVar3,uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
          puStack_1ec = (undefined1 *)0x728997;
          (**(code **)(**(int **)(unaff_EBP + -0x58) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        puStack_1ec = (undefined1 *)0x7289a7;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x7289b2;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        puStack_1ec = (undefined1 *)0x7289c2;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x7289cd;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00414ebb();
      }
      else {
        puStack_1ec = (undefined1 *)0x72868e;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        puStack_1ec = (undefined1 *)0x72869e;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        FUN_0087a1b0();
        puStack_1ec = (undefined1 *)(unaff_EBP + -0x124);
        iStack_1f0 = 0x7286c2;
        iStack_1f0 = FUN_004458be();
        puStack_1f4 = (undefined1 *)&piStack_1e4;
        uVar6 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x18));
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1f4;
        FUN_004033a1(uVar6);
        uVar6 = 0x2f;
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        FUN_0044974c(0x2f,iVar5);
        FUN_005c1d2c(uVar6,iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        puStack_1ec = (undefined1 *)0x7286fe;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x728709;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        puStack_1ec = (undefined1 *)0x728719;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_1ec = (undefined1 *)0x728728;
          FUN_00878dfb();
        }
      }
      piVar8 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0x8c + *(int *)(unaff_EBP + -0x3c) * 4);
      *(int **)(unaff_EBP + -0x18) = piVar8;
      if (piVar8 != (int *)0x0) {
        puStack_1ec = (undefined1 *)0x7289f5;
        (**(code **)(*piVar8 + 4))();
      }
      puStack_1ec = (undefined1 *)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_1f0 = 0x728a0b;
      FUN_004031b7();
      piVar8 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      if (piVar8 == (int *)0x0) {
        puStack_1ec = (undefined1 *)0x728a20;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + 8);
      }
      iVar3 = *piVar8;
      puStack_1f4 = *(undefined1 **)(unaff_EBP + -0x164);
      iStack_1f0 = *(int *)(unaff_EBP + -0x160);
      puStack_1ec = *(undefined1 **)(unaff_EBP + -0x15c);
      *(int **)(unaff_EBP + -0x10) = piVar8;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar8,9,*(int *)(unaff_EBP + -0x14) + -0x13,
                         *(undefined4 *)(unaff_EBP + -0x18));
      if (iVar3 < 0) {
        iStack_1cc = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_1d4 = 0x728a5c;
        iStack_1d0 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_1cc = 0x728a6c;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1cc = 0x728a77;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) < 0xf0) {
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x50) + 8);
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = *(int *)(iVar3 + -4);
        }
        if (*(uint *)(unaff_EBP + -0x30) < iVar5 - 1U) {
          iStack_1cc = 0x728aa8;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xd4));
          iStack_1cc = unaff_EBP + -0xd4;
          iStack_1d0 = 0x728ab5;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_1cc = 0x728ac1;
            FUN_00878dfb();
          }
          piVar8 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          if (piVar8 == (int *)0x0) {
            iStack_1cc = 0x728ad6;
            FUN_00878dfb();
            piVar8 = *(int **)(unaff_EBP + 8);
          }
          iVar3 = *piVar8;
          uStack_1d8 = *(undefined4 *)(unaff_EBP + -0x48);
          iStack_1d4 = *(int *)(unaff_EBP + -0xd4);
          iStack_1d0 = *(int *)(unaff_EBP + -0xd0);
          iStack_1dc = *(int *)(unaff_EBP + -0x14) + 0x10;
          iStack_1cc = *(undefined4 *)(unaff_EBP + -0xcc);
          puStack_1e0 = (undefined1 *)0x7;
          *(int **)(unaff_EBP + -0x30) = piVar8;
          piStack_1e4 = piVar8;
          iVar3 = (**(code **)(iVar3 + 0x80))();
          if (iVar3 < 0) {
            iStack_1cc = *(undefined4 *)(unaff_EBP + -0x30);
            iStack_1d4 = 0x728b12;
            iStack_1d0 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          iStack_1cc = 0x728b22;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_1cc = 0x728b2d;
            FUN_00878dfb();
          }
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        iStack_1cc = 0x728b3e;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x28;
      *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
      *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 8;
      if (0x117 < *(int *)(unaff_EBP + -0x14)) break;
      iVar3 = *(int *)(unaff_EBP + -0x50);
      iVar9 = *(int *)(unaff_EBP + -0x4c);
      iVar5 = *(int *)(unaff_EBP + -0x6c);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    iStack_1cc = 0x728b73;
    (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    iStack_1cc = 0x728b84;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    iStack_1cc = 0x728b95;
    (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_1cc = 0x728ba6;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_1cc = 0x728bb7;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


