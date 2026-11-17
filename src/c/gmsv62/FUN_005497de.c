/* FUN_005497de - 0x005497de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005497de(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  int unaff_EBP;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined *puStack_94;
  int *piStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  int iStack_84;
  int *piStack_80;
  undefined4 *puVar6;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  piStack_80 = (int *)0x5497fb;
  FUN_0081622a();
  piStack_80 = (int *)0x54980a;
  iVar1 = FUN_00455c59();
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(unaff_EBP + -0x28) = iVar1;
  FUN_0045e4a2();
  piStack_80 = (int *)0x549823;
  FUN_00448dc6();
  iVar2 = *(int *)(extraout_ECX + 0x578);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = *(int *)(iVar1 + 0x3e3 + iVar2 * 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x574);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  iVar1 = extraout_ECX;
  while( true ) {
    iVar2 = *(int *)(iVar1 + 0x574) + 0x18;
    if (*(int *)(unaff_EBP + -0x14) <= iVar2) {
      iVar2 = *(int *)(unaff_EBP + -0x14);
    }
    if (iVar2 <= *(int *)(unaff_EBP + -0x10)) break;
    iStack_84 = unaff_EBP + -0x30;
    piStack_80 = *(int **)(iVar1 + 0x578);
    iStack_88 = 0x54987c;
    iVar2 = FUN_00458c4f();
    piVar4 = *(int **)(iVar2 + 4);
    FUN_0046575e();
    if (piVar4 != (int *)0x0) {
      *(int **)(unaff_EBP + -0x20) = piVar4 + 3;
      uVar3 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      piStack_80 = *(int **)(unaff_EBP + -0x10);
      iStack_84 = 0x5498ab;
      FUN_00549d20();
      iVar2 = (**(code **)(*piVar4 + 0x10))();
      if (iVar2 == 3) {
        piStack_80 = (int *)0x0;
        iStack_84 = 0;
        iStack_88 = 0x5498c3;
        iStack_88 = FUN_0048b3b8();
        puStack_8c = (undefined4 *)0x0;
        piStack_90 = (int *)0x0;
        puStack_94 = *(undefined **)(unaff_EBP + -0x3c);
        uStack_98 = *(undefined4 *)(unaff_EBP + -0x48);
        iStack_9c = *(int *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x18) = &iStack_a0;
        iStack_a0 = extraout_ECX_00;
        FUN_0046fc23(unaff_EBP + 8);
      }
      else {
        piStack_80 = (int *)0x0;
        iStack_84 = 0;
        iStack_88 = 0;
        puStack_8c = (undefined4 *)0x0;
        piStack_90 = (int *)0x5498f0;
        piStack_90 = (int *)(**(code **)(*piVar4 + 4))();
        puStack_94 = *(undefined **)(unaff_EBP + -0x3c);
        uStack_98 = *(undefined4 *)(unaff_EBP + -0x48);
        iStack_9c = *(int *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x18) = &iStack_a0;
        iStack_a0 = extraout_ECX_01;
        FUN_0046fc23(unaff_EBP + 8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      FUN_005558b0();
      iVar2 = *(int *)(iVar1 + 0x578);
      if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
        iVar2 = (**(code **)(*piVar4 + 0x18))();
        iStack_84 = iVar1 + 0x57c;
        *(int ***)(unaff_EBP + -0x18) = &piStack_80;
        iStack_88 = 0x54994b;
        piStack_80 = extraout_ECX_02;
        FUN_00424dbc();
        iStack_88 = *(int *)(unaff_EBP + -0x3c) + -0xc;
        puStack_8c = *(undefined4 **)(unaff_EBP + -0x48);
        puStack_94 = (undefined *)(unaff_EBP + 8);
        *(int ***)(unaff_EBP + -0x18) = &piStack_90;
        uStack_98 = 0x549965;
        piStack_90 = extraout_ECX_03;
        iStack_84 = iVar2;
        FUN_0046fc23();
        puStack_94 = (undefined *)0x54996a;
        FUN_007d3201();
      }
      iVar2 = FUN_0045e2eb();
      if (iVar2 != *(int *)(iVar1 + 0x588)) {
        piVar4 = *(int **)(unaff_EBP + 8);
        if (piVar4 == (int *)0x0) {
          piStack_80 = (int *)0x54998e;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar4;
        piStack_80 = (int *)0x20;
        iStack_84 = 0x20;
        iStack_88 = *(int *)(unaff_EBP + -0x44);
        *(int **)(unaff_EBP + -0x20) = piVar4;
        puStack_8c = *(undefined4 **)(unaff_EBP + -0x48);
        puStack_94 = (undefined *)0x5499ac;
        piStack_90 = piVar4;
        iVar2 = (**(code **)(iVar2 + 0x8c))();
        if (iVar2 < 0) {
          piStack_80 = *(int **)(unaff_EBP + -0x20);
          iStack_88 = 0x5499bf;
          iStack_84 = iVar2;
          FUN_00878e09();
        }
      }
      if (*(int *)(unaff_EBP + -0x10) == *(int *)(iVar1 + 0x580)) {
        piVar4 = *(int **)(unaff_EBP + 8);
        if (piVar4 == (int *)0x0) {
          piStack_80 = (int *)0x5499e6;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        piStack_80 = (int *)0x20;
        iStack_84 = 0x20;
        iStack_88 = *(int *)(unaff_EBP + -0x44);
        *(int **)(unaff_EBP + -0x20) = piVar4;
        puStack_8c = *(undefined4 **)(unaff_EBP + -0x48);
        puStack_94 = (undefined *)0x549a05;
        piStack_90 = piVar4;
        iVar1 = (**(code **)(iVar1 + 0x8c))();
        if (iVar1 < 0) {
          puStack_94 = &DAT_00963cc8;
          uStack_98 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_a0 = 0x549a13;
          iStack_9c = iVar1;
          FUN_00878e09();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        if (piVar4 == (int *)0x0) {
          puStack_94 = (undefined *)0x80004003;
          uStack_98 = 0x549a24;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        puStack_94 = (undefined *)0xaa1030cc;
        uStack_98 = 2;
        iStack_9c = 0x20;
        iStack_a0 = *(int *)(unaff_EBP + -0x44) + -1;
        *(int **)(unaff_EBP + -0x20) = piVar4;
        iVar1 = (**(code **)(iVar1 + 0x8c))(piVar4,*(undefined4 *)(unaff_EBP + -0x48));
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        if (piVar4 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        *(int **)(unaff_EBP + -0x20) = piVar4;
        iVar1 = (**(code **)(iVar1 + 0x8c))
                          (piVar4,*(undefined4 *)(unaff_EBP + -0x48),
                           *(int *)(unaff_EBP + -0x3c) + -1,0x20,2,0xaa1030cc);
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        if (piVar4 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        *(int **)(unaff_EBP + -0x20) = piVar4;
        iVar1 = (**(code **)(iVar1 + 0x8c))
                          (piVar4,*(int *)(unaff_EBP + -0x48) + -1,
                           *(undefined4 *)(unaff_EBP + -0x44),2,0x20,0xaa1030cc);
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        iVar1 = (**(code **)(*piVar4 + 0x8c))
                          (piVar4,*(int *)(unaff_EBP + -0x40) + -1,
                           *(undefined4 *)(unaff_EBP + -0x44),2,0x20,0xaa1030cc);
        if (iVar1 < 0) {
          iStack_88 = 0x549af6;
          iStack_84 = iVar1;
          piStack_80 = piVar4;
          FUN_00878e09();
        }
        iVar1 = *(int *)(unaff_EBP + -0x1c);
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  if ((*(int *)(iVar1 + 0x578) == 2) && (DAT_00978358 != 0)) {
    piStack_80 = (int *)0x0;
    iStack_84 = 0;
    iStack_88 = 0;
    puStack_8c = (undefined4 *)0x0;
    piStack_90 = (int *)0x549b2b;
    piStack_80 = (int *)FUN_007a22a3();
    if (piStack_80 != (int *)0x0) {
      iStack_84 = 0x549b3f;
      iVar1 = FUN_00549d20();
      if (iVar1 != 0) {
        piStack_80 = (int *)0x549b53;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        piStack_80 = (int *)(unaff_EBP + -0x38);
        iStack_84 = 0x549b62;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          piStack_80 = (int *)0x549b70;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_80 = (int *)0x549b7a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        piStack_80 = (int *)(unaff_EBP + -0x48);
        puVar6 = &DAT_00980690;
        iStack_84 = 0x549b84;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          piStack_80 = (int *)0x549b90;
          FUN_00878dfb();
          puVar6 = extraout_ECX_04;
        }
        piStack_80 = (int *)0x0;
        iStack_84 = unaff_EBP + -0x38;
        iStack_88 = unaff_EBP + -0x48;
        puStack_94 = (undefined *)&puStack_8c;
        *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_8c;
        piStack_90 = (int *)0x73d;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_98 = 0x549bb4;
        puStack_8c = puVar6;
        FUN_00679e4e();
        piStack_90 = (int *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        puStack_94 = (undefined *)0x549bc1;
        FUN_00405a1d();
        puStack_94 = (undefined *)0x549bc8;
        FUN_00402660();
        puStack_94 = (undefined *)0x549bcf;
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_84 = 0x549bda;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x28) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar1 != 0) {
          piStack_80 = (int *)0x549bf0;
          iVar1 = FUN_0041a581();
          if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
            piStack_80 = (int *)0x549c01;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_80 = (int *)0x549c0e;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_80 = (int *)0x549c19;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        piStack_80 = (int *)0x549c26;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_80 = (int *)0x549c31;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_80 = (int *)0x549c3e;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_80 = (int *)0x549c49;
          FUN_00878dfb();
        }
        piStack_80 = (int *)0xff;
        iStack_84 = 0x549c58;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_80 = (int *)0x549c6c;
          FUN_00878dfb();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_80 = (int *)0x549c77;
            FUN_00878dfb();
          }
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_80 = (int *)0x549c85;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + -0x1c) = piVar4;
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
        iVar2 = FUN_0040eed0();
        iVar1 = *(int *)(unaff_EBP + -0x54);
        iVar5 = FUN_0040eea9();
        puStack_8c = *(undefined4 **)(unaff_EBP + -0x20);
        puStack_94 = (undefined *)(*(int *)(unaff_EBP + -0x58) - iVar5);
        iStack_88 = *(int *)(unaff_EBP + -0x68);
        iStack_84 = *(int *)(unaff_EBP + -100);
        piStack_80 = *(int **)(unaff_EBP + -0x60);
        uStack_98 = *(undefined4 *)(unaff_EBP + -0x1c);
        iStack_9c = 0x549cc3;
        piStack_90 = (int *)(iVar1 - iVar2);
        iVar1 = (**(code **)(*piVar4 + 0x80))();
        if (iVar1 < 0) {
          piStack_80 = *(int **)(unaff_EBP + -0x1c);
          iStack_88 = 0x549cd5;
          iStack_84 = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_80 = (int *)0x549ce2;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_80 = (int *)0x549ced;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          piStack_80 = (int *)0x549cfe;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_80 = (int *)0x549d0f;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


