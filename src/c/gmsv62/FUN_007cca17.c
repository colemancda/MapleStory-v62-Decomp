/* FUN_007cca17 - 0x007cca17 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007cca17(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined *puVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  undefined4 *puStack_268;
  int *piStack_264;
  uint uStack_260;
  code *pcStack_25c;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x18) = extraout_ECX;
  pcStack_25c = (code *)0x7cca34;
  uVar1 = FUN_007d1e08();
  puVar5 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
  }
  pcStack_25c = (code *)0x7cca51;
  iVar2 = (**(code **)(*extraout_ECX + 4))();
  pcStack_25c = *(code **)(iVar2 + 0x3a4);
  uStack_260 = iVar2 + 0x39c;
  piStack_264 = (int *)0x7cca62;
  iVar2 = FUN_00413367();
  pcStack_25c = *(code **)(unaff_EBP + 0x1c);
  uStack_260 = (uint)(iVar2 != 0);
  piStack_264 = extraout_ECX + 0x130;
  *(uint *)(unaff_EBP + -0x14) = uStack_260;
  *(uint **)(unaff_EBP + 0x1c) = &uStack_260;
  puStack_268 = (undefined4 *)0x7cca83;
  FUN_004059fd();
  piStack_264 = *(int **)(unaff_EBP + 0x10);
  iStack_26c = unaff_EBP + -0x20;
  iStack_270 = 0x7cca90;
  puStack_268 = puVar5;
  FUN_007938b4();
  piVar6 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*piVar6 + -4) >> 1;
  }
  if (uVar3 == 0) goto LAB_007ccef1;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
LAB_007ccb26:
    if (*(int *)(unaff_EBP + -0x10) == 0x12a191) {
      uStack_260 = 0x11;
    }
    else {
      uStack_260 = *(uint *)(unaff_EBP + 0x14);
    }
    piStack_264 = (int *)(unaff_EBP + -0x3c);
    puStack_268 = (undefined4 *)(unaff_EBP + -0x20);
    *(int ***)(unaff_EBP + 0x1c) = &piStack_264;
    iStack_26c = 0x7ccb4b;
    pcStack_25c = (code *)piStack_264;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_268 = (undefined4 *)0x7ccb54;
    FUN_0079d484();
    puStack_268 = (undefined4 *)0x7ccb5b;
    FUN_0041145f();
  }
  else {
    pcStack_25c = *(code **)(unaff_EBP + 0x10);
    uStack_260 = 0x7ccad1;
    pcStack_25c = (code *)FUN_006509a1();
    uStack_260 = 0x7ccadd;
    iVar2 = FUN_007a3fab();
    pcStack_25c = (code *)(iVar2 + 0x16c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_260 = 0x7ccaec;
    iVar2 = FUN_006155ca();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pcStack_25c = (code *)0x7ccb04;
    FUN_006575e6();
    if (iVar2 != 0) goto LAB_007ccb26;
    pcStack_25c = *(code **)(unaff_EBP + 0x10);
    uStack_260 = 0x7ccb13;
    iVar2 = FUN_006509a1();
    pcStack_25c = (code *)(iVar2 + 0x16c);
    uStack_260 = unaff_EBP - 0x3c;
    piStack_264 = (int *)0x7ccb22;
    FUN_00411537();
  }
  iVar2 = *(int *)(unaff_EBP + 0x14);
  puVar8 = &DAT_00978678 + iVar2 * 0x18;
  *(undefined **)(unaff_EBP + -0x2c) = puVar8;
  if (*(code **)(unaff_EBP + -0x10) == ptr_004f5c6a) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x78;
  }
  else {
    pcStack_25c = (code *)0x7ccb7e;
    uVar3 = FUN_0043f6fe();
    *(int *)(unaff_EBP + -0x1c) =
         (extraout_ECX[(uint)(uVar3 < 0x80000000) * 0xfd + 0x14f] * (&DAT_00978688)[iVar2 * 6]) /
         (int)(&DAT_00978684)[iVar2 * 6];
    pcStack_25c = (code *)0x0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      pcStack_25c = (code *)0x7ccbac;
      iVar2 = (**(code **)(*extraout_ECX + 4))();
      pcStack_25c = *(code **)(iVar2 + 0x3b0);
      uStack_260 = iVar2 + 0x3a8;
      piStack_264 = (int *)0x7ccbbd;
      pcStack_25c = (code *)FUN_00413367();
    }
    uStack_260 = 0x7ccbc7;
    uStack_260 = FUN_007a9209();
    puStack_268 = (undefined4 *)(unaff_EBP + -0x20);
    *(int ***)(unaff_EBP + 0x1c) = &piStack_264;
    iStack_26c = 0x7ccbd7;
    piStack_264 = extraout_ECX_00;
    FUN_004059fd();
    puStack_268 = *(undefined4 **)(unaff_EBP + 0x14);
    iStack_26c = *(int *)(unaff_EBP + 0x18);
    iStack_270 = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x24);
    iStack_274 = 0x7ccbed;
    FUN_0078ceed();
  }
  if ((*(byte *)(extraout_ECX + 0x14b) & 1) == 0) {
    pcStack_25c = *(code **)(unaff_EBP + -0x30);
    uStack_260 = -*(int *)(unaff_EBP + -0x3c);
    piStack_264 = *(int **)(unaff_EBP + -0x38);
    puStack_268 = (undefined4 *)-*(int *)(unaff_EBP + -0x34);
    iStack_26c = unaff_EBP + -0x3c;
    iStack_270 = 0x7ccc1b;
    (*DAT_0097b504)();
  }
  pcStack_25c = (code *)0x7ccc26;
  iVar2 = (**(code **)(extraout_ECX[1] + 0x10))();
  pcStack_25c = *(code **)(iVar2 + 4);
  uStack_260 = 0x7ccc30;
  puVar4 = (uint *)(**(code **)(extraout_ECX[1] + 0x10))();
  uStack_260 = *puVar4;
  piStack_264 = (int *)(unaff_EBP + -0x3c);
  puStack_268 = (undefined4 *)0x7ccc3c;
  (*DAT_0097b54c)();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  piVar6 = extraout_ECX;
  while( true ) {
    puVar4 = *(uint **)(unaff_EBP + 0x20);
    uVar3 = *puVar4;
    if ((uVar3 == 0) || (*(uint *)(uVar3 - 4) <= *(uint *)(unaff_EBP + 0x1c))) break;
    puStack_268 = *(undefined4 **)(unaff_EBP + -0x3c);
    piStack_264 = *(int **)(unaff_EBP + -0x38);
    iVar2 = *(int *)(unaff_EBP + -0x28) + uVar3;
    uStack_260 = *(uint *)(unaff_EBP + -0x34);
    iStack_26c = unaff_EBP + -0x44;
    pcStack_25c = *(code **)(unaff_EBP + -0x30);
    iStack_270 = 0x7ccc75;
    puVar5 = (undefined4 *)FUN_005c5bbc();
    *(undefined4 *)(iVar2 + 0x90) = *puVar5;
    *(undefined4 *)(iVar2 + 0x94) = puVar5[1];
    pcStack_25c = (code *)0x7ccc91;
    piVar6 = (int *)(**(code **)(*(int *)(*(int *)(unaff_EBP + -0x18) + 4) + 0x10))();
    puVar8 = *(undefined **)(unaff_EBP + -0x2c);
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + (*(int *)(iVar2 + 0x90) - *piVar6);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x98;
    piVar6 = *(int **)(unaff_EBP + -0x18);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0x40413c) {
    uStack_260 = *puVar4;
    if (uStack_260 == 0) {
      pcStack_25c = (code *)0x0;
    }
    else {
      pcStack_25c = *(code **)(uStack_260 - 4);
    }
    piStack_264 = (int *)(uint)(0 < *(int *)(unaff_EBP + -0x14));
    puStack_268 = (undefined4 *)0x7cccd4;
    FUN_007a9375();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0x40684f) {
    iVar2 = *(int *)(puVar8 + 0xc) + *(int *)(unaff_EBP + -0x24);
    piVar6[0x5ed] = iVar2;
    if (iVar2 == 0) {
      piVar6[0x5ed] = 1;
    }
  }
  uStack_260 = *puVar4;
  if (uStack_260 == 0) {
    piStack_264 = (int *)0x0;
  }
  else {
    piStack_264 = *(int **)(uStack_260 - 4);
  }
  iStack_26c = piVar6[0x129];
  pcStack_25c = (code *)0x0;
  puStack_268 = *(undefined4 **)(unaff_EBP + 0x14);
  iStack_270 = *(int *)(unaff_EBP + 0x10);
  iStack_274 = *(int *)(unaff_EBP + 0xc);
  FUN_0064ba86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  while ((uVar3 = *puVar4, uVar3 != 0 && (*(uint *)(unaff_EBP + 0x1c) < *(uint *)(uVar3 - 4)))) {
    iVar2 = *(int *)(unaff_EBP + 0xc);
    puVar5 = (undefined4 *)(iVar2 + uVar3);
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
    if (*(int *)(unaff_EBP + -0x10) == 0x40413e) {
      iVar2 = 0;
      if (0 < (int)puVar5[5]) {
        iVar10 = *(int *)(unaff_EBP + -0x24);
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x1c) + iVar10;
        puVar9 = puVar5 + 6;
        do {
          pcStack_25c = (code *)0x0;
          uStack_260 = 0;
          piStack_264 = (int *)0x0;
          puStack_268 = (undefined4 *)0x0;
          iStack_26c = 1;
          iStack_270 = 0;
          *(int **)(unaff_EBP + -0x2c) = &iStack_274;
          iStack_274 = iVar10;
          FUN_004033a1(&DAT_0097812c);
          uVar1 = puVar5[0x25];
          uVar17 = puVar5[0x24];
          *(undefined1 *)(unaff_EBP + -4) = 3;
          uVar16 = 0;
          uVar15 = *puVar9;
          uVar14 = *(undefined4 *)(unaff_EBP + 0x18);
          uVar13 = puVar5[1];
          uVar12 = *(undefined4 *)(unaff_EBP + 0x14);
          uVar11 = 0x40413e;
          iVar10 = iVar2;
          uVar7 = FUN_0067e5d1(0x40413e,uVar12,uVar13,uVar14,uVar15,0,iVar2,uVar17,uVar1);
          FUN_005cbf42(uVar7,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,iVar10,uVar17,uVar1);
          iVar2 = iVar2 + 1;
          puVar9 = puVar9 + 1;
          iVar10 = extraout_ECX_01;
        } while (iVar2 < (int)puVar5[5]);
      }
    }
    else {
      iVar10 = 0x118;
      if (*(int *)(unaff_EBP + 0x10) < 0x118) {
        iVar10 = *(int *)(unaff_EBP + 0x10);
      }
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      iVar10 = iVar10 + *(int *)(unaff_EBP + -0x1c);
      if (0 < *(int *)(unaff_EBP + 8)) {
        puVar9 = puVar5 + 6;
        do {
          if (*(int *)(unaff_EBP + -0x10) == 0x406849) {
            iVar10 = iVar10 + (-(uint)(*(int *)(unaff_EBP + 0x14) != 1) & 0xffffff60) + 0xf0;
          }
          else if (*(int *)(unaff_EBP + -0x10) == 0x4dd5cb) {
            iVar10 = (-(uint)(*(int *)(unaff_EBP + 0x14) != 1) & 0xffffff60) + 0xf0;
          }
          else if (*(int *)(unaff_EBP + -0x10) == 0x4e23ef) {
            pcStack_25c = *(code **)(unaff_EBP + 0x14);
            uStack_260 = 0x7cce4c;
            iVar10 = FUN_0079d2cf();
            iVar2 = extraout_ECX_02;
          }
          pcStack_25c = (code *)0x0;
          uStack_260 = 0;
          piStack_264 = (int *)0x0;
          puStack_268 = (undefined4 *)0x0;
          iStack_26c = 1;
          iStack_270 = 0;
          *(int **)(unaff_EBP + -0x2c) = &iStack_274;
          iStack_274 = iVar2;
          FUN_0067d25d(&iStack_274,*(undefined4 *)(unaff_EBP + 0x1c));
          uVar1 = puVar5[0x25];
          uVar17 = puVar5[0x24];
          uVar15 = *(undefined4 *)(unaff_EBP + 0x14);
          iVar2 = *(int *)(unaff_EBP + -0x24) + iVar10;
          uVar14 = puVar9[0xf];
          *(undefined1 *)(unaff_EBP + -4) = 3;
          uVar13 = *puVar9;
          uVar12 = *(undefined4 *)(unaff_EBP + 0x18);
          uVar7 = puVar5[1];
          uVar11 = *(undefined4 *)(unaff_EBP + -0x10);
          uVar16 = FUN_0067e5d1(uVar11,iVar2,uVar7,uVar12,uVar13,uVar14,uVar15,uVar17,uVar1);
          FUN_005cbf42(uVar16,uVar11,iVar2,uVar7,uVar12,uVar13,uVar14,uVar15,uVar17,uVar1);
          *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
          puVar9 = puVar9 + 1;
          iVar2 = extraout_ECX_03;
        } while (*(int *)(unaff_EBP + 0x14) < *(int *)(unaff_EBP + 8));
      }
    }
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x98;
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x46;
    puVar4 = *(uint **)(unaff_EBP + 0x20);
  }
  pcStack_25c = FUN_00403621;
  uStack_260 = 0xf;
  piStack_264 = (int *)0x4;
  puStack_268 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_26c = 0x7ccee2;
  FUN_0087a0b8();
  piVar6 = *(int **)(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x8c) = &PTR_LAB_008e84a0;
LAB_007ccef1:
  if (piVar6 != (int *)0x0) {
    pcStack_25c = (code *)0x7ccef8;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


