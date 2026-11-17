/* FUN_007a1d20 - 0x007a1d20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a1d20(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  byte bVar8;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar9;
  int iVar10;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 *puStack_230;
  int iStack_22c;
  int iStack_228;
  int *piStack_224;
  
  FUN_00879bb8();
  iVar10 = DAT_00978368;
  *(int *)(unaff_EBP + -0x40) = DAT_00978368;
  iVar4 = FUN_00455c59();
  piVar7 = *(int **)(iVar4 + 4);
  FUN_0045e4a2();
  FUN_00414edd();
  bVar1 = *(byte *)((int)piVar7 + 0xc9);
  bVar8 = bVar1 & 0x7f;
  *(byte *)((int)piVar7 + 0xc9) = bVar8;
  *(byte *)(unaff_EBP + -0xd) = bVar8;
  iVar3 = DAT_00979264;
  iVar4 = *(int *)(DAT_00979264 + 4);
  *(int *)(unaff_EBP + -0x18) = DAT_00979264;
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar4 + -4);
  }
  if (((char)bVar1 < '\0') ||
     (*(int *)(unaff_EBP + -0x14) <= (int)(uint)*(byte *)(unaff_EBP + -0xd))) {
    if (*(byte *)(unaff_EBP + -0xd) < 6) {
      FUN_0085c6e1();
      if ((((*(int *)(unaff_EBP + -0x4c) != 999999999) && (*(int *)(unaff_EBP + -0x50) != 999999999)
           ) && (*(int *)(unaff_EBP + -0x4c) != 0)) && (*(int *)(unaff_EBP + -0x50) != 0)) {
        iVar4 = FUN_00429303();
        if (*(int *)(iVar4 + 0x11c) == 0) {
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x48);
          uVar6 = *(undefined4 *)(unaff_EBP + -0x44);
        }
        else {
          puVar5 = (undefined4 *)FUN_004f0d80();
          uVar6 = puVar5[1];
          *(undefined4 *)(unaff_EBP + -0x20) = *puVar5;
        }
        goto LAB_007a1e42;
      }
    }
    iVar4 = _rand();
    iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 4) + 4 +
                    (iVar4 % *(int *)(unaff_EBP + -0x14)) * 8);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar4 + 0xc);
    uVar6 = *(undefined4 *)(iVar4 + 0x10);
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + 4) + 4 + (uint)*(byte *)(unaff_EBP + -0xd) * 8);
    uVar6 = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar4 + 0xc);
  }
LAB_007a1e42:
  iVar4 = *(int *)(iVar10 + 0x18);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar10 + 0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar10 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar10 + 0x14);
  }
  uVar6 = FUN_00803f45();
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar6;
  iVar4 = FUN_007b664e();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  FUN_007f113f();
  (**(code **)(**(int **)(unaff_EBP + -0x3c) + 4))();
  piStack_224 = *(int **)(extraout_ECX + 0xd74);
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xfffffde0;
  if (piStack_224 != (int *)0x0) {
    iStack_228 = 0x7a1ece;
    (**(code **)(*piStack_224 + 4))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_224 = (int *)0x7a1ed7;
  FUN_00424e82();
  piStack_224 = (int *)0x7a1ede;
  FUN_0042935a();
  FUN_007a4dec();
  *(int *)(unaff_EBP + -0x14) = DAT_00978368;
  piStack_224 = (int *)0x7a1ef9;
  uVar6 = FUN_006495c0();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0045e4b8();
  piStack_224 = *(int **)(unaff_EBP + -0x2c);
  iStack_228 = 0x7a1f1f;
  FUN_0078b670();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_224 = (int *)(iVar10 + 0x2660);
  iStack_228 = 0x7a1f35;
  iVar4 = FUN_00413367();
  piStack_224 = (int *)(uint)(iVar4 != 0);
  iStack_228 = 0x7a1f48;
  FUN_0079c68e();
  iVar4 = DAT_00978368;
  *(undefined4 *)(extraout_ECX + 0x1e3c) = *(undefined4 *)(DAT_00978368 + 0x3308);
  *(undefined4 *)(extraout_ECX + 0x1e40) = *(undefined4 *)(iVar4 + 0x330c);
  *(undefined4 *)(extraout_ECX + 0x1e44) = *(undefined4 *)(iVar4 + 0x3310);
  FUN_004c2648();
  piStack_224 = (int *)0x7a1f86;
  FUN_00445548();
  piStack_224 = (int *)(iVar10 + 0x263c);
  iStack_228 = 0x7a1f98;
  piStack_224 = (int *)FUN_00413367();
  iStack_228 = 0x7a1fa4;
  FUN_0079c757();
  FUN_007b02be();
  piStack_224 = (int *)0x7a1fb3;
  FUN_007afb90();
  FUN_007afe99();
  FUN_007b012c();
  FUN_007affe0();
  FUN_007b012c();
  if (*(int *)(iVar10 + 4) == 0) {
    iStack_228 = 0x7a1fe3;
    piStack_224 = piVar7;
    FUN_007afd71();
  }
  else {
    *(undefined4 *)(iVar10 + 4) = 0;
  }
  if (*(int *)(iVar10 + 0x32c4) != 0) {
    piStack_224 = (int *)0x7a2007;
    uVar6 = FUN_0064d61f();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
    piStack_224 = (int *)0x7a2013;
    iVar4 = FUN_0079b949();
    piStack_224 = (int *)0xff;
    iStack_228 = 3;
    puStack_230 = (undefined1 *)&iStack_22c;
    *(int **)(unaff_EBP + -0x1c) = &iStack_22c;
    uStack_234 = 0x7a202e;
    FUN_0043f93c();
    puStack_230 = (undefined1 *)0x0;
    uStack_234 = 0;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_238;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00486ada(&uStack_238);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00790038(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00424e27();
    uVar6 = FUN_0043210d();
    uVar6 = FUN_004091f9(uVar6);
    piVar7 = (int *)FUN_0042e3f0(unaff_EBP + -0x14,uVar6);
    piVar7 = (int *)*piVar7;
    piVar2 = *(int **)(iVar4 + 0x14);
    piVar9 = (int *)(iVar4 + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar2 != piVar7) {
      *piVar9 = (int)piVar7;
      FUN_00424ed4();
      if (piVar2 != (int *)0x0) {
        piStack_224 = (int *)0x7a20a5;
        (**(code **)(*piVar2 + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_224 = (int *)0x7a20b6;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      FUN_004030b1();
    }
    piStack_224 = (int *)0x7a20d2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    piStack_224 = (int *)(unaff_EBP + -0x28);
    iStack_228 = 0x7a20e0;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_224 = (int *)0x7a20ec;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 7;
    piStack_224 = (int *)0x7a20f9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    piStack_224 = (int *)(unaff_EBP + -0x50);
    iStack_228 = 0x7a2107;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_224 = (int *)0x7a2113;
      FUN_00878dfb();
    }
    iVar4 = *piVar9;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar4 == 0) {
      piStack_224 = (int *)0x7a2126;
      FUN_00878dfb();
    }
    piVar9 = (int *)*piVar9;
    iStack_22c = *(int *)(unaff_EBP + -0x28);
    iStack_228 = *(int *)(unaff_EBP + -0x24);
    iVar4 = *piVar9;
    piStack_224 = *(int **)(unaff_EBP + -0x20);
    uStack_238 = *(undefined4 *)(unaff_EBP + -0x4c);
    uStack_234 = *(undefined4 *)(unaff_EBP + -0x48);
    *(int **)(unaff_EBP + -0x34) = piVar9;
    puStack_230 = *(undefined1 **)(unaff_EBP + -0x44);
    iVar4 = (**(code **)(iVar4 + 0x110))(piVar9,0x20,*(undefined4 *)(unaff_EBP + -0x50));
    if (iVar4 < 0) {
      piStack_224 = *(int **)(unaff_EBP + -0x34);
      iStack_22c = 0x7a2160;
      iStack_228 = iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_224 = (int *)0x7a216d;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_224 = (int *)0x7a2178;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_224 = (int *)0x7a2185;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_224 = (int *)0x7a2190;
      FUN_00878dfb();
    }
    iVar10 = *(int *)(unaff_EBP + -0x40);
  }
  if (*(int *)(iVar10 + 0x2d0c) != 0) {
    iVar4 = FUN_00429303();
    if (*(int *)(iVar4 + 0x124) == 0) {
      piStack_224 = (int *)0x7a21f7;
      FUN_007a2274();
      *(undefined4 *)(unaff_EBP + -4) = 10;
      piStack_224 = (int *)0x7a2208;
      FUN_00432cfc();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00414ebb();
      iStack_228 = extraout_ECX + 0xd2c;
      *(int ***)(unaff_EBP + -0x1c) = &piStack_224;
      iStack_22c = 0x7a2228;
      FUN_00433bdf();
      iStack_22c = extraout_ECX + 0xd3c;
      *(int **)(unaff_EBP + -0x34) = &iStack_228;
      puStack_230 = (undefined1 *)0x7a223a;
      FUN_0041160e();
      puStack_230 = (undefined1 *)(unaff_EBP + -0x18);
      *(int **)(unaff_EBP + -0x2c) = &iStack_22c;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_234 = 0x7a224d;
      FUN_004059fd();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_230 = (undefined1 *)0x7a2259;
      FUN_0046f440();
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
      }
    }
    else {
      *(undefined4 *)(DAT_00978368 + 0x2d0c) = 0;
      piStack_224 = (int *)(unaff_EBP + -0x34);
      iStack_228 = 0x7a21cd;
      piStack_224 = (int *)FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -4) = 9;
      iStack_228 = 0x7a21dc;
      FUN_00471102();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


