/* FUN_0060f019 - 0x0060f019 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0060f221) */

void FUN_0060f019(void)

{
  int *piVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar7;
  undefined1 *puStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0xc0);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  if ((((iVar4 == 0) || (uVar6 = *(uint *)(unaff_EBP + 8), (int)uVar6 < 0)) ||
      (*(int *)(extraout_ECX + 0x18c) == 0)) ||
     (*(uint *)(*(int *)(extraout_ECX + 0x18c) + -4) <= uVar6)) goto LAB_0060f3cd;
  puStack_44 = (undefined1 *)0x0;
  iStack_48 = 500;
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978368;
  iStack_4c = 0x60f074;
  iVar4 = FUN_004becbc();
  if (iVar4 == 0) goto LAB_0060f3cd;
  puStack_54 = *(undefined1 **)(extraout_ECX + 0x18c);
  piVar1 = (int *)(puStack_54 + uVar6 * 0x14);
  if (*(int *)(puStack_54 + uVar6 * 0x14) < 1) {
    iStack_4c = extraout_ECX + 0x6c;
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_54;
    uVar7 = 0x1b9;
  }
  else {
    puStack_44 = (undefined1 *)piVar1[4];
    if (puStack_44 == (undefined1 *)0x0) goto LAB_0060f3cd;
    iStack_48 = 0x60f0bb;
    iVar4 = FUN_004c24cb();
    puStack_54 = puStack_44;
    if (iVar4 == 0) {
      if (*(int *)(extraout_ECX + 0x70) != 0) goto LAB_0060f3cd;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      puStack_44 = (undefined1 *)0x69c;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_48 = 0x60f133;
      iVar4 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        puStack_44 = (undefined1 *)0x0;
      }
      else {
        puStack_44 = (undefined1 *)0x60f145;
        puStack_44 = (undefined1 *)FUN_007e62e9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_48 = 0x60f155;
      iVar4 = FUN_005154ad();
      puStack_44 = *(undefined1 **)(iVar4 + 4);
      *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x6c;
      iStack_48 = 0x60f164;
      FUN_0057bb37();
      puStack_44 = (undefined1 *)0x0;
      iStack_48 = 1;
      puStack_54 = (undefined1 *)&iStack_4c;
      *(int **)(unaff_EBP + -0x10) = &iStack_4c;
      iStack_50 = 0x341;
      FUN_00679d22();
      iStack_50 = 0;
      puStack_54 = (undefined1 *)0x2;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004c2677();
      FUN_007eddac();
      iStack_50 = *piVar1 * piVar1[1];
      puStack_44 = (undefined1 *)0x0;
      iStack_48 = 10;
      iStack_4c = 0;
      puStack_54 = (undefined1 *)0x1;
      FUN_007edf4a(1);
      puStack_44 = (undefined1 *)0x60f1b3;
      FUN_007e6e3c();
      puStack_44 = (undefined1 *)0x60f1bb;
      uVar7 = FUN_004bc6a2();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar7;
      puStack_44 = (undefined1 *)0x60f1c6;
      FUN_0045e621();
      if (*(int *)(unaff_EBP + -0x10) == 1) {
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0xbc);
        puVar2 = (undefined1 *)piVar1[1];
        *(int *)(unaff_EBP + -0x10) = iVar4;
        if (iVar4 % (int)puVar2 == 0) {
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) / (int)puVar2;
          if ((longlong)piVar1[2] * (longlong)*(int *)(unaff_EBP + -0x10) < 0x80000000) {
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            puStack_44 = (undefined1 *)0x1b2;
            iStack_48 = unaff_EBP + -0x18;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iStack_4c = 0x60f250;
            puVar5 = (undefined4 *)FUN_00679d22();
            puStack_44 = (undefined1 *)(piVar1[2] * *(int *)(unaff_EBP + -0x10));
            iStack_48 = *puVar5;
            iStack_4c = unaff_EBP + -0x14;
            *(undefined1 *)(unaff_EBP + -4) = 4;
            iStack_50 = 0x60f268;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 3;
            puStack_44 = (undefined1 *)0x60f277;
            FUN_00414ebb();
            puStack_44 = (undefined1 *)0x0;
            iStack_48 = 0;
            iStack_4c = 0;
            iStack_50 = 0;
            *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_54;
            puStack_54 = extraout_ECX_01;
            FUN_00450368(unaff_EBP + -0x14);
            iVar4 = FUN_007db791();
            if (iVar4 == 6) {
              if (DAT_00979178 != 0) {
                *(undefined1 *)(unaff_EBP + -4) = 0;
                puStack_44 = (undefined1 *)0x60f2e5;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                puStack_44 = (undefined1 *)0x60f2f1;
                FUN_004c26e1();
                goto LAB_0060f2f1;
              }
              puStack_44 = (undefined1 *)0x0;
              iStack_48 = 0;
              iStack_4c = 0;
              iStack_50 = 0;
              *(undefined1 ***)(unaff_EBP + 8) = &puStack_54;
              puStack_54 = extraout_ECX_02;
              FUN_00679d22(&puStack_54,0xd46);
              FUN_007db3ad();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            puStack_44 = (undefined1 *)0x60f2c9;
            FUN_00414ebb();
            goto LAB_0060f2c9;
          }
          iStack_4c = 0;
          *(undefined1 ***)(unaff_EBP + 8) = &puStack_54;
          uVar7 = 0xf15;
        }
        else {
          iStack_4c = *(int *)(unaff_EBP + -0x18);
          *(undefined1 ***)(unaff_EBP + 8) = &puStack_54;
          uVar7 = 0x1b1;
        }
        puStack_44 = (undefined1 *)0x0;
        iStack_48 = 0;
        iStack_50 = 0;
        puStack_54 = puVar2;
        FUN_00679d22(&puStack_54,uVar7);
        FUN_007db3ad();
      }
LAB_0060f2c9:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_44 = (undefined1 *)0x60f2d5;
      FUN_004c26e1();
      goto LAB_0060f3cd;
    }
    puStack_44 = (undefined1 *)0x0;
    iStack_48 = 0;
    iStack_4c = 0;
    iStack_50 = 0;
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_54;
    FUN_00679d22(&puStack_54,0x340);
    iVar4 = FUN_007db791();
    if (iVar4 != 6) goto LAB_0060f3cd;
    if (DAT_00979178 == 0) {
      *(undefined1 ***)(unaff_EBP + 8) = &puStack_54;
      uVar7 = 0xd46;
      puStack_54 = extraout_ECX_00;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_0060f2f1:
      puStack_44 = (undefined1 *)(unaff_EBP + -0x30);
      iStack_48 = 0x60f2fd;
      iVar4 = FUN_00455c59();
      iStack_48 = *(int *)(iVar4 + 4);
      *(int *)(unaff_EBP + -0x18) = iStack_48;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        puStack_44 = (undefined1 *)0x0;
        iStack_48 = 0x60f311;
        FUN_0045e7c2();
        iStack_48 = *(int *)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      }
      puStack_44 = *(undefined1 **)(iStack_48 + 0x35);
      iStack_48 = iStack_48 + 0x33;
      iStack_4c = 0x60f323;
      bVar3 = FUN_0045f03e();
      if ((0xf < bVar3) || (piVar1[2] * *(int *)(unaff_EBP + -0x10) < 0xf4241)) {
        puStack_44 = (undefined1 *)0x0;
        iStack_48 = 0;
        iStack_4c = 0x6f;
        iStack_50 = 0x60f364;
        FUN_0060142b();
        iVar4 = **(int **)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + -4) = 5;
        puStack_44 = (undefined1 *)0x60f373;
        iVar4 = (**(code **)(iVar4 + 0x5c))();
        uVar6 = CONCAT31((int3)((uint)-iVar4 >> 8),-(iVar4 != 0)) & 0xffffff0b;
        puStack_44 = (undefined1 *)CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\x15');
        iStack_48 = 0x60f384;
        FUN_00457cda();
        puStack_44 = *(undefined1 **)(unaff_EBP + 8);
        iStack_48 = 0x60f38f;
        FUN_00457cda();
        puStack_44 = *(undefined1 **)(unaff_EBP + -0x10);
        iStack_48 = 0x60f39a;
        FUN_0045d247();
        puStack_44 = (undefined1 *)(unaff_EBP + -0x40);
        iStack_48 = 0x60f3a9;
        FUN_004751b2();
        iVar4 = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(iVar4 + 0x208c) = 1;
        puStack_44 = (undefined1 *)0x60f3bb;
        uVar7 = FUN_007d1e08();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(iVar4 + 0x2090) = uVar7;
        puStack_44 = (undefined1 *)0x60f3cd;
        FUN_0045ebca();
        goto LAB_0060f3cd;
      }
      puStack_54 = puStack_44;
      *(undefined1 ***)(unaff_EBP + 8) = &puStack_54;
      uVar7 = 0xf43;
    }
    iStack_4c = 0;
  }
  puStack_44 = (undefined1 *)0x0;
  iStack_48 = 0;
  iStack_50 = 0;
  FUN_00679d22(&puStack_54,uVar7);
  FUN_007db3ad();
LAB_0060f3cd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


