/* FUN_004984ea - 0x004984ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004984ea(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  int *piVar5;
  int unaff_EBP;
  undefined1 *puStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x1c);
  *(undefined4 *)(extraout_ECX + 0x28) = *puVar1;
  *(undefined4 *)(extraout_ECX + 0x60) = puVar1[1];
  *(undefined4 *)(extraout_ECX + 100) = puVar1[2];
  uVar2 = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined4 *)(extraout_ECX + 0x48) = 0;
  *(undefined4 *)(extraout_ECX + 0x4c) = uVar2;
  *(undefined4 *)(extraout_ECX + 0x50) = 0;
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  *(undefined4 *)(extraout_ECX + 0x80) = 0;
  piStack_78 = (int *)0x498538;
  FUN_00414f29();
  piStack_78 = (int *)0x498543;
  FUN_00414f29();
  piStack_78 = (int *)0x49854e;
  FUN_0074d6fb();
  piStack_78 = &DAT_00980690;
  uStack_7c = 0x49855c;
  FUN_00403191();
  piStack_78 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_7c = 0x498568;
  FUN_00403191();
  piStack_78 = (int *)0x0;
  uStack_7c = 0;
  puStack_80 = (undefined1 *)(unaff_EBP + -0x54);
  iStack_84 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_88 = (undefined1 *)0x498581;
  uVar2 = FUN_00411641();
  *(undefined1 ***)(unaff_EBP + 0x18) = &puStack_88;
  FUN_004033a1(uVar2);
  iVar3 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_80 = (undefined1 *)0x4985b3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 != 0) {
    piStack_78 = (int *)(unaff_EBP + -0x28);
    uStack_7c = 0x4985c9;
    piStack_78 = (int *)FUN_00404b30();
    if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
      uStack_7c = 0x4985da;
      FUN_00878dfb();
    }
  }
  piStack_78 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_7c = 0x4985e7;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    uStack_7c = 0x4985f2;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_7c = 0x4985ff;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    uStack_7c = 0x49860a;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0x498617;
  iVar3 = FUN_00402bc3();
  piVar5 = piStack_78;
  if (iVar3 < 0) {
    uStack_7c = 0x498622;
    piStack_78 = (int *)iVar3;
    FUN_00878dfb();
    piVar5 = (int *)extraout_ECX_00;
  }
  piStack_78 = (int *)0x0;
  uStack_7c = 0;
  puStack_88 = (undefined1 *)&puStack_80;
  *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_80;
  iStack_84 = 0x59d;
  puStack_80 = (undefined1 *)piVar5;
  FUN_00679e4e();
  iStack_84 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_88 = (undefined1 *)0x49864c;
  FUN_0040263d();
  puStack_88 = (undefined1 *)0x498653;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_80 = (undefined1 *)0x49865e;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  piStack_78 = (int *)(unaff_EBP + 0x18);
  uStack_7c = 0x49866d;
  piStack_78 = (int *)FUN_00404b30();
  if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
    uStack_7c = 0x49867e;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0x49868b;
  iVar3 = FUN_00402bc3();
  piVar5 = piStack_78;
  if (iVar3 < 0) {
    uStack_7c = 0x498696;
    piStack_78 = (int *)iVar3;
    FUN_00878dfb();
    piVar5 = (int *)extraout_ECX_01;
  }
  piStack_78 = (int *)0x0;
  uStack_7c = 0;
  puStack_88 = (undefined1 *)&puStack_80;
  *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_80;
  iStack_84 = 0x59f;
  puStack_80 = (undefined1 *)piVar5;
  FUN_00679e4e();
  iStack_84 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_88 = (undefined1 *)0x4986bb;
  FUN_0040263d();
  puStack_88 = (undefined1 *)0x4986c2;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_80 = (undefined1 *)0x4986cd;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  piStack_78 = (int *)(unaff_EBP + 0x18);
  uStack_7c = 0x4986dc;
  piStack_78 = (int *)FUN_00404b30();
  if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
    uStack_7c = 0x4986ed;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0x4986fa;
  iVar3 = FUN_00402bc3();
  piVar5 = piStack_78;
  if (iVar3 < 0) {
    uStack_7c = 0x498705;
    piStack_78 = (int *)iVar3;
    FUN_00878dfb();
    piVar5 = (int *)extraout_ECX_02;
  }
  piStack_78 = (int *)0x0;
  uStack_7c = 0;
  puStack_88 = (undefined1 *)&puStack_80;
  *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_80;
  iStack_84 = 0x5a1;
  puStack_80 = (undefined1 *)piVar5;
  FUN_00679e4e();
  iStack_84 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_88 = (undefined1 *)0x49872a;
  FUN_0040263d();
  puStack_88 = (undefined1 *)0x498731;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_80 = (undefined1 *)0x49873c;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  piStack_78 = (int *)(unaff_EBP + 0x18);
  uStack_7c = 0x49874b;
  piStack_78 = (int *)FUN_00404b30();
  if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
    uStack_7c = 0x49875c;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0x498769;
  iVar3 = FUN_00402bc3();
  piVar5 = piStack_78;
  if (iVar3 < 0) {
    uStack_7c = 0x498774;
    piStack_78 = (int *)iVar3;
    FUN_00878dfb();
    piVar5 = (int *)extraout_ECX_03;
  }
  piStack_78 = (int *)0x0;
  uStack_7c = 0;
  puStack_88 = (undefined1 *)&puStack_80;
  *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_80;
  iStack_84 = 0x5a3;
  puStack_80 = (undefined1 *)piVar5;
  FUN_00679e4e();
  iStack_84 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_88 = (undefined1 *)0x498799;
  FUN_0040263d();
  puStack_88 = (undefined1 *)0x4987a0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_80 = (undefined1 *)0x4987ab;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  piStack_78 = (int *)(unaff_EBP + 0x18);
  uStack_7c = 0x4987ba;
  piStack_78 = (int *)FUN_00404b30();
  if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
    uStack_7c = 0x4987cb;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0x4987d8;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    uStack_7c = 0x4987e3;
    FUN_00878dfb();
  }
  piStack_78 = (int *)0x0;
  uStack_7c = 0x4987eb;
  FUN_00498f74();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x70;
  *(undefined4 *)(unaff_EBP + -0x24) = 4;
  do {
    if (**(int **)(unaff_EBP + -0x14) == 0) {
      piStack_78 = (int *)0x80004003;
      uStack_7c = 0x49880f;
      FUN_00878dfb();
    }
    piStack_78 = (int *)0x498819;
    iVar3 = FUN_0040cf4d();
    *(int *)(unaff_EBP + -0x30) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (0 < iVar3) {
      do {
        piStack_78 = (int *)0x49882f;
        FUN_0087a1b0();
        piStack_78 = (int *)0x0;
        uStack_7c = 0;
        iStack_84 = *(undefined4 *)(unaff_EBP + -0x18);
        puStack_88 = (undefined1 *)0x49883c;
        puStack_80 = &stack0xffffff8c;
        iStack_84 = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_80;
        puStack_88 = (undefined1 *)0x498848;
        FUN_004033a1();
        iStack_84 = unaff_EBP + -0x74;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_88 = (undefined1 *)0x498858;
        FUN_0040263d();
        puStack_88 = (undefined1 *)0x49885f;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_80 = (undefined1 *)0x49886a;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x2c) = iVar3;
        *(undefined4 *)(unaff_EBP + 0x18) = 0;
        if (iVar3 != 0) {
          piStack_78 = (int *)(unaff_EBP + -0x2c);
          uStack_7c = 0x498880;
          piStack_78 = (int *)FUN_0041a581();
          if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
            uStack_7c = 0x498891;
            FUN_00878dfb();
          }
        }
        piStack_78 = (int *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        uStack_7c = 0x49889e;
        piStack_78 = (int *)FUN_00402bc3();
        if ((int)piStack_78 < 0) {
          uStack_7c = 0x4988a9;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x18) == 0) {
          piStack_78 = (int *)0x80004003;
          uStack_7c = 0x4988b8;
          FUN_00878dfb();
        }
        piStack_78 = (int *)0x4988c0;
        uVar4 = FUN_0040e48b();
        if (*(uint *)(unaff_EBP + -0x20) < uVar4) {
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            piStack_78 = (int *)0x80004003;
            uStack_7c = 0x4988d4;
            FUN_00878dfb();
          }
          piStack_78 = (int *)0x4988dc;
          uVar2 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
        }
        if (*(int *)(unaff_EBP + 0x18) == 0) {
          piStack_78 = (int *)0x80004003;
          uStack_7c = 0x4988ee;
          FUN_00878dfb();
        }
        piStack_78 = (int *)0x4988f6;
        uVar4 = FUN_0040e53d();
        if (*(uint *)(unaff_EBP + -0x1c) < uVar4) {
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            piStack_78 = (int *)0x80004003;
            uStack_7c = 0x49890a;
            FUN_00878dfb();
          }
          piStack_78 = (int *)0x498912;
          uVar2 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
        }
        piStack_78 = *(int **)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piStack_78 != (int *)0x0) {
          uStack_7c = 0x498926;
          (**(code **)(*piStack_78 + 8))();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x30));
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
    piVar5 = (int *)(unaff_EBP + -0x24);
    *piVar5 = *piVar5 + -1;
  } while (*piVar5 != 0);
  piStack_78 = (int *)0x0;
  uStack_7c = 0;
  puStack_88 = (undefined1 *)&puStack_80;
  *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_80;
  iStack_84 = 0x5a5;
  FUN_00679e4e();
  iStack_84 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_88 = (undefined1 *)0x498967;
  FUN_0040263d();
  puStack_88 = (undefined1 *)0x49896e;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_80 = (undefined1 *)0x498979;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  piStack_78 = (int *)(unaff_EBP + 0x18);
  uStack_7c = 0x498988;
  piStack_78 = (int *)FUN_00404b30();
  if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
    uStack_7c = 0x498999;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0x4989a6;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    uStack_7c = 0x4989b1;
    FUN_00878dfb();
  }
  piStack_78 = *(int **)(unaff_EBP + 0x1c);
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x1c);
  puStack_80 = *(undefined1 **)(unaff_EBP + -0x20);
  iStack_84 = *(undefined4 *)(unaff_EBP + 0x14);
  puStack_88 = *(undefined1 **)(unaff_EBP + 0x10);
  FUN_004b388f(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  piStack_78 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_78 != (int *)0x0) {
    uStack_7c = 0x4989de;
    (**(code **)(*piStack_78 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


