/* FUN_007ce67c - 0x007ce67c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ce67c(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int extraout_ECX_01;
  int *piVar6;
  int unaff_EBP;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 *puStack_94;
  int iStack_90;
  int iStack_8c;
  code *pcStack_88;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  pcStack_88 = (code *)0x7ce696;
  uVar1 = FUN_007d1e08();
  puVar3 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x1c) = *puVar3;
  }
  pcStack_88 = *(code **)(unaff_EBP + 0x1c);
  iStack_90 = extraout_ECX + 0x4c0;
  *(int **)(unaff_EBP + 0x1c) = &iStack_8c;
  puStack_94 = (undefined4 *)0x7ce6c1;
  iStack_8c = extraout_ECX_00;
  FUN_004059fd();
  iStack_90 = *(int *)(unaff_EBP + 0x10);
  iStack_98 = unaff_EBP + -0x14;
  uStack_9c = 0x7ce6ce;
  puStack_94 = puVar3;
  FUN_007938b4();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*piVar6 + -4) >> 1;
  }
  if (uVar2 != 0) {
    pcStack_88 = (code *)0x0;
    iStack_8c = 0x7ce6fb;
    iStack_8c = FUN_007a9209();
    puStack_94 = (undefined4 *)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + 0x1c) = &iStack_90;
    iStack_98 = 0x7ce70b;
    FUN_004059fd();
    puStack_94 = *(undefined4 **)(unaff_EBP + 0x14);
    iStack_98 = *(undefined4 *)(unaff_EBP + 0x18);
    uStack_9c = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_a0 = 0x7ce71b;
    FUN_0078ceed();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    pcStack_88 = (code *)0x1;
    iStack_8c = unaff_EBP + -0x3c;
    iStack_90 = 0x7ce734;
    FUN_0043f3d6();
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar7 = extraout_ECX;
    while( true ) {
      piVar6 = *(int **)(unaff_EBP + 0x20);
      iVar5 = *piVar6;
      if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= *(uint *)(unaff_EBP + 0x1c))) break;
      puStack_94 = *(undefined4 **)(unaff_EBP + -0x3c);
      iStack_90 = *(int *)(unaff_EBP + -0x38);
      iStack_8c = *(int *)(unaff_EBP + -0x34);
      iStack_98 = unaff_EBP + -0x2c;
      *(int *)(unaff_EBP + -0x24) = iVar5 + *(int *)(unaff_EBP + -0x10);
      pcStack_88 = *(code **)(unaff_EBP + -0x30);
      uStack_9c = 0x7ce76a;
      puVar3 = (undefined4 *)FUN_005c5bbc();
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x98;
      iVar7 = *(int *)(unaff_EBP + -0x20);
      iVar5 = *(int *)(unaff_EBP + -0x24);
      *(undefined4 *)(iVar5 + 0x90) = *puVar3;
      *(undefined4 *)(iVar5 + 0x94) = puVar3[1];
    }
    iStack_8c = *piVar6;
    if (iStack_8c == 0) {
      iStack_90 = 0;
    }
    else {
      iStack_90 = *(int *)(iStack_8c + -4);
    }
    iStack_98 = *(undefined4 *)(iVar7 + 0x4a4);
    pcStack_88 = (code *)0x0;
    puStack_94 = *(undefined4 **)(unaff_EBP + 0x14);
    uStack_9c = *(undefined4 *)(unaff_EBP + 0x10);
    iStack_a0 = *(int *)(unaff_EBP + 0xc);
    FUN_0064ba86();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    while ((iVar7 = *piVar6, iVar7 != 0 && (*(uint *)(unaff_EBP + 0x1c) < *(uint *)(iVar7 + -4)))) {
      iVar5 = *(int *)(unaff_EBP + 0x10);
      puVar3 = (undefined4 *)(iVar5 + iVar7);
      *(undefined4 *)(unaff_EBP + 0xc) = *puVar3;
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      if (0 < *(int *)(unaff_EBP + 8)) {
        puVar8 = puVar3 + 6;
        do {
          pcStack_88 = (code *)0x0;
          iStack_8c = 0;
          iStack_90 = 0;
          puStack_94 = (undefined4 *)0x0;
          iStack_98 = 1;
          uStack_9c = 0;
          *(int **)(unaff_EBP + -0x24) = &iStack_a0;
          iStack_a0 = iVar5;
          FUN_0067d25d(&iStack_a0,*(undefined4 *)(unaff_EBP + 0x1c));
          uVar1 = puVar3[0x25];
          uVar16 = puVar3[0x24];
          uVar15 = *(undefined4 *)(unaff_EBP + 0x14);
          uVar14 = puVar8[0xf];
          uVar13 = *puVar8;
          uVar12 = *(undefined4 *)(unaff_EBP + 0x18);
          uVar11 = puVar3[1];
          uVar10 = *(undefined4 *)(unaff_EBP + -0x18);
          uVar9 = *(undefined4 *)(unaff_EBP + -0x1c);
          uVar4 = FUN_0067e5d1(uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar1);
          FUN_005cbf42(uVar4,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar1);
          *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
          puVar8 = puVar8 + 1;
          iVar5 = extraout_ECX_01;
        } while (*(int *)(unaff_EBP + 0x14) < *(int *)(unaff_EBP + 8));
        piVar6 = *(int **)(unaff_EBP + 0x20);
      }
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x98;
    }
    pcStack_88 = FUN_00403621;
    iStack_8c = 0xf;
    iStack_90 = 4;
    puStack_94 = (undefined4 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_98 = 0x7ce873;
    FUN_0087a0b8();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined ***)(unaff_EBP + -0x84) = &PTR_LAB_008e84a0;
  }
  if (piVar6 != (int *)0x0) {
    pcStack_88 = (code *)0x7ce889;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


