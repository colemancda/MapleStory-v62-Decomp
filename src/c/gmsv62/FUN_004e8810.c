/* FUN_004e8810 - 0x004e8810 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e8810(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *extraout_ECX_10;
  int *extraout_ECX_11;
  int *extraout_ECX_12;
  int *extraout_ECX_13;
  int unaff_EBP;
  bool bVar8;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  
  FUN_00879bb8();
  iVar6 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(int *)(unaff_EBP + -0x24) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piStack_50 = (int *)(unaff_EBP + -0x10);
  piStack_54 = (int *)0x6e2;
  piStack_58 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_5c = (int *)0x4e8859;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_54 = (int *)0x4e8864;
  piStack_54 = (int *)FUN_00449713();
  piVar2 = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x40) = &piStack_58;
  piStack_60 = (int *)0x4e8874;
  piStack_5c = piVar2;
  FUN_00450368();
  piStack_5c = (int *)0x4e8879;
  uVar1 = FUN_0048350d();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    piStack_50 = (int *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
    piStack_54 = (int *)0x4e8893;
    FUN_00434e38();
  }
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    piStack_50 = (int *)0x8f9;
    piStack_54 = (int *)(unaff_EBP + -0x2c);
    piStack_58 = (int *)0x4e8916;
    puVar4 = (undefined4 *)FUN_00679d22();
    piStack_50 = (int *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(int ***)(unaff_EBP + -0x40) = &piStack_54;
    piStack_5c = (int *)0x4e8928;
    piStack_58 = piVar2;
    FUN_00450368();
    piStack_58 = (int *)0x4e892d;
    uVar1 = FUN_004834bf();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
      piStack_54 = (int *)0x4e8946;
      FUN_00434e38();
    }
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      piStack_50 = (int *)0x38b;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8960;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_58 = (int *)0x4e896e;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8984;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x38c;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8995;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_58 = (int *)0x4e89a0;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e89b6;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x38d;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e89c7;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_58 = (int *)0x4e89d2;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e89e8;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x38e;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e89f9;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_58 = (int *)0x4e8a04;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8a1a;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x38f;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8a2b;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_58 = (int *)0x4e8a36;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8a4c;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x390;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8a5d;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_58 = (int *)0x4e8a68;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8a7e;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x391;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8a8f;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_58 = (int *)0x4e8a9a;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8ab0;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x392;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8ac1;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_58 = (int *)0x4e8acc;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8ae2;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x393;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8af3;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_58 = (int *)0x4e8afe;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8b14;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x394;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8b25;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_58 = (int *)0x4e8b30;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8b46;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x395;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8b57;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_58 = (int *)0x4e8b62;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8b78;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x396;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8b89;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_58 = (int *)0x4e8b94;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8baa;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x397;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8bbb;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_58 = (int *)0x4e8bc6;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8bdc;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x398;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8bed;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_58 = (int *)0x4e8bf8;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8c0e;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x399;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8c1f;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_58 = (int *)0x4e8c2a;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8c40;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x39a;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8c51;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_58 = (int *)0x4e8c5c;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8c72;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x39b;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8c83;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_58 = (int *)0x4e8c8e;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8ca4;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x39c;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8cb5;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_58 = (int *)0x4e8cc0;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e8cd6;
        FUN_00434e38();
      }
      piStack_50 = (int *)0x39d;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8ce7;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0x8;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_58 = (int *)0x4e8cf2;
      FUN_00471102();
      iVar6 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_004e91ba:
      if (iVar6 != 0) {
        piStack_50 = (int *)(iVar6 + -0xc);
        piStack_54 = (int *)0x4e91cb;
        FUN_00434e38();
      }
      goto LAB_004e9556;
    }
    piStack_50 = (int *)0x11e0;
    piStack_54 = (int *)(unaff_EBP + -0x2c);
    piStack_58 = (int *)0x4e8d10;
    puVar4 = (undefined4 *)FUN_00679d22();
    piStack_50 = (int *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    *(int ***)(unaff_EBP + -0x40) = &piStack_54;
    piStack_5c = (int *)0x4e8d22;
    piStack_58 = piVar2;
    piStack_54 = extraout_ECX_00;
    FUN_00450368();
    piStack_58 = (int *)0x4e8d27;
    uVar1 = FUN_004834bf();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
      piStack_54 = (int *)0x4e8d40;
      FUN_00434e38();
    }
    iVar6 = DAT_00978358;
    if ((*(int *)(unaff_EBP + -0x28) != 0) &&
       (bVar8 = DAT_00978358 != 0, *(int *)(unaff_EBP + -0x28) = DAT_00978358, bVar8)) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      while (iVar6 = *(int *)(*(int *)(unaff_EBP + -0x20) + 4 + *(int *)(iVar6 + 0x1744)),
            *(int *)(unaff_EBP + -0x2c) = iVar6, iVar6 != 0) {
        piStack_50 = (int *)0x4e8d7f;
        uVar5 = FUN_006162f6();
        if ((uVar5 & 0x80) != 0) {
          piStack_50 = (int *)(unaff_EBP + -0x3c);
          piStack_54 = (int *)0x4e8d8f;
          piVar2 = (int *)FUN_004cd1b8();
          uVar5 = -(uint)(*piVar2 != 0) & *piVar2 - 0xcU;
          piStack_50 = (int *)0x4e8da2;
          FUN_004125d9();
          piVar2 = (int *)(*(int *)(unaff_EBP + -0x28) + 4);
          piStack_50 = (int *)0x4e8daf;
          iVar6 = (**(code **)(*piVar2 + 0x10))();
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar6 + 4);
          piStack_50 = (int *)0x4e8dbc;
          puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x10))();
          piStack_50 = *(int **)(unaff_EBP + -0x40);
          piStack_54 = (int *)*puVar4;
          piVar2 = (int *)(uVar5 + 0xc);
          piStack_5c = (int *)0x4e8dcc;
          piStack_58 = piVar2;
          piVar3 = (int *)(**(code **)(*(int *)(uVar5 + 0xc) + 0x40))();
          if ((int)piVar3 < 0) {
            piStack_50 = (int *)&DAT_00963d08;
            piStack_5c = (int *)0x4e8ddc;
            piStack_58 = piVar3;
            piStack_54 = piVar2;
            FUN_00878e09();
          }
          piStack_50 = (int *)0x4;
          piStack_54 = (int *)0x4e8de5;
          FUN_004e98b7();
          piStack_50 = (int *)0x0;
          piStack_54 = (int *)0x0;
          piStack_58 = (int *)0x1;
          piStack_5c = (int *)0x4e8df3;
          FUN_0061595d();
          piVar2 = *(int **)(unaff_EBP + 8);
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
        if (0x17 < *(int *)(unaff_EBP + -0x20)) break;
        iVar6 = *(int *)(unaff_EBP + -0x28);
      }
    }
    piStack_50 = (int *)0x81;
    piStack_54 = (int *)(unaff_EBP + 8);
    piStack_58 = (int *)0x4e8e17;
    puVar4 = (undefined4 *)FUN_00679d22();
    piStack_50 = (int *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    *(int ***)(unaff_EBP + -0x40) = &piStack_54;
    piStack_5c = (int *)0x4e8e29;
    piStack_58 = piVar2;
    piStack_54 = extraout_ECX_01;
    FUN_00450368();
    piStack_58 = (int *)0x4e8e2e;
    uVar1 = FUN_004834bf();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
      piStack_54 = (int *)0x4e8e47;
      FUN_00434e38();
    }
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      piStack_50 = (int *)0x4e8e59;
      FUN_004e9964();
      goto LAB_004e9556;
    }
    piStack_50 = (int *)(unaff_EBP + -0x10);
    piStack_54 = (int *)0x81;
    piStack_58 = (int *)(unaff_EBP + 8);
    piStack_5c = (int *)0x4e8e6e;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_54 = (int *)0x4e8e79;
    piStack_54 = (int *)FUN_00449713();
    *(int ***)(unaff_EBP + -0x40) = &piStack_58;
    piStack_60 = (int *)0x4e8e86;
    piStack_5c = piVar2;
    FUN_00450368();
    piStack_5c = (int *)0x4e8e8b;
    iVar6 = FUN_0048350d();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
      piStack_54 = (int *)0x4e8ea4;
      FUN_00434e38();
    }
    if (iVar6 != 0) {
      if (*(int *)(DAT_00978368 + 0x2098) == 0) {
        piStack_50 = (int *)0x0;
      }
      else {
        piStack_50 = (int *)(*(int *)(DAT_00978368 + 0x2098) + 4);
      }
      if (piStack_50 == (int *)0x0) {
        piStack_50 = DAT_00980dfc;
      }
      piStack_54 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_54 = *(int **)(unaff_EBP + -0x10);
      }
      piStack_58 = (int *)0x4e8edf;
      iVar6 = FUN_008858f0();
      if (iVar6 != 0) {
        if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) &&
           (**(char **)(unaff_EBP + -0x10) != '\0')) {
          piStack_54 = (int *)(unaff_EBP + -0x10);
          piStack_50 = (int *)0x0;
          piStack_58 = (int *)0x4e8f2f;
          iVar6 = FUN_007d1e11();
          if (iVar6 == 0) {
            piStack_50 = (int *)0x2fd;
            piStack_54 = (int *)(unaff_EBP + 8);
            piStack_58 = (int *)0x4e8f8b;
            piStack_54 = (int *)FUN_00679d22();
            piStack_50 = (int *)0xc;
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            piStack_58 = (int *)0x4e8f97;
            FUN_00471102();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (*(int *)(unaff_EBP + 8) != 0) {
              piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
              piStack_54 = (int *)0x4e8fb1;
              FUN_00434e38();
            }
          }
          else {
            piStack_54 = (int *)(unaff_EBP + -0x10);
            *(int ***)(unaff_EBP + 8) = &piStack_50;
            piStack_50 = (int *)0x0;
            piStack_58 = (int *)0x4e8f46;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            piStack_54 = (int *)0x4e8f4f;
            FUN_00449784();
            piStack_54 = (int *)0x4e8f56;
            FUN_00748724();
            piStack_50 = (int *)0x0;
            piStack_58 = (int *)(unaff_EBP + -0x10);
            *(int ***)(unaff_EBP + 8) = &piStack_54;
            piStack_5c = (int *)0x4e8f66;
            FUN_00450368();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            piStack_58 = (int *)0x4e8f6f;
            FUN_00449784();
            piStack_58 = (int *)0x4e8f76;
            FUN_00743a05();
          }
        }
        goto LAB_004e88ce;
      }
      piStack_50 = (int *)0x2fe;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e8ef5;
      piStack_54 = (int *)FUN_00679d22();
      piStack_50 = (int *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      piStack_58 = (int *)0x4e8f01;
      FUN_00471102();
      iVar6 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      goto LAB_004e91ba;
    }
    piStack_50 = (int *)0x82;
    piStack_54 = (int *)(unaff_EBP + 8);
    piStack_58 = (int *)0x4e8fc7;
    puVar4 = (undefined4 *)FUN_00679d22();
    piStack_50 = (int *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    *(int ***)(unaff_EBP + -0x40) = &piStack_54;
    piStack_5c = (int *)0x4e8fd9;
    piStack_58 = piVar2;
    FUN_00450368();
    piStack_58 = (int *)0x4e8fde;
    iVar6 = FUN_004834bf();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
      piStack_54 = (int *)0x4e8ff6;
      FUN_00434e38();
    }
    if (iVar6 == 0) {
      piStack_50 = (int *)0x84;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e9012;
      puVar4 = (undefined4 *)FUN_00679d22();
      piStack_50 = (int *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      *(int ***)(unaff_EBP + -0x40) = &piStack_54;
      piStack_5c = (int *)0x4e9024;
      piStack_58 = piVar2;
      FUN_00450368();
      piStack_58 = (int *)0x4e9029;
      iVar6 = FUN_004834bf();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e9041;
        FUN_00434e38();
      }
      if (iVar6 != 0) {
        piStack_50 = (int *)0x2;
        goto LAB_004e9126;
      }
      piStack_50 = (int *)0x83;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e905d;
      puVar4 = (undefined4 *)FUN_00679d22();
      piStack_50 = (int *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      *(int ***)(unaff_EBP + -0x40) = &piStack_54;
      piStack_5c = (int *)0x4e906f;
      piStack_58 = piVar2;
      FUN_00450368();
      piStack_58 = (int *)0x4e9074;
      iVar6 = FUN_004834bf();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e908c;
        FUN_00434e38();
      }
      if (iVar6 != 0) {
        piStack_50 = (int *)0x0;
        goto LAB_004e9126;
      }
      piStack_50 = (int *)0x86;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e90a8;
      puVar4 = (undefined4 *)FUN_00679d22();
      piStack_50 = (int *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      *(int ***)(unaff_EBP + -0x40) = &piStack_54;
      piStack_5c = (int *)0x4e90ba;
      piStack_58 = piVar2;
      FUN_00450368();
      piStack_58 = (int *)0x4e90bf;
      iVar6 = FUN_004834bf();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e90d7;
        FUN_00434e38();
      }
      if (iVar6 != 0) {
        piStack_50 = (int *)0x6;
        goto LAB_004e9126;
      }
      piStack_50 = (int *)0x85;
      piStack_54 = (int *)(unaff_EBP + 8);
      piStack_58 = (int *)0x4e90f0;
      puVar4 = (undefined4 *)FUN_00679d22();
      piStack_50 = (int *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      *(int ***)(unaff_EBP + -0x40) = &piStack_54;
      piStack_5c = (int *)0x4e9102;
      piStack_58 = piVar2;
      FUN_00450368();
      piStack_58 = (int *)0x4e9107;
      iVar6 = FUN_004834bf();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e911f;
        FUN_00434e38();
      }
      if (iVar6 != 0) {
        piStack_50 = (int *)0x4;
        goto LAB_004e9126;
      }
      piStack_50 = (int *)(unaff_EBP + -0x10);
      piStack_54 = (int *)0x87;
      piStack_58 = (int *)(unaff_EBP + 8);
      piStack_5c = (int *)0x4e914a;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_54 = (int *)0x4e9155;
      piStack_54 = (int *)FUN_00449713();
      *(int ***)(unaff_EBP + -0x40) = &piStack_58;
      piStack_60 = (int *)0x4e9162;
      piStack_5c = piVar2;
      FUN_00450368();
      piStack_5c = (int *)0x4e9167;
      iVar6 = FUN_0048350d();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e9180;
        FUN_00434e38();
      }
      if (iVar6 != 0) {
        DAT_00979244 = 0;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        piStack_50 = (int *)0xffffffff;
        piStack_54 = (int *)&DAT_00978474;
        piStack_58 = (int *)0x4e919f;
        FUN_00414edd();
        piStack_50 = (int *)(unaff_EBP + -0x10);
        piStack_54 = (int *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        piStack_58 = (int *)0x4e91b3;
        FUN_004e99df();
        iVar6 = *(int *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        goto LAB_004e91ba;
      }
      piStack_50 = (int *)(unaff_EBP + -0x10);
      piStack_54 = (int *)0x88;
      piStack_58 = (int *)(unaff_EBP + 8);
      piStack_5c = (int *)0x4e91e5;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_54 = (int *)0x4e91f0;
      piStack_54 = (int *)FUN_00449713();
      *(int ***)(unaff_EBP + -0x40) = &piStack_58;
      piStack_60 = (int *)0x4e91fd;
      piStack_5c = piVar2;
      piStack_58 = extraout_ECX_02;
      FUN_00450368();
      piStack_5c = (int *)0x4e9202;
      iVar6 = FUN_0048350d();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
        piStack_54 = (int *)0x4e921b;
        FUN_00434e38();
      }
      if (iVar6 == 0) {
        piStack_50 = (int *)0x8b;
        piStack_54 = (int *)(unaff_EBP + 8);
        piStack_58 = (int *)0x4e9241;
        puVar4 = (undefined4 *)FUN_00679d22();
        piStack_50 = (int *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        *(int ***)(unaff_EBP + -0x40) = &piStack_54;
        piStack_5c = (int *)0x4e9253;
        piStack_58 = piVar2;
        piStack_54 = extraout_ECX_03;
        FUN_00450368();
        piStack_58 = (int *)0x4e9258;
        iVar6 = FUN_004834bf();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + 8) != 0) {
          piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
          piStack_54 = (int *)0x4e9270;
          FUN_00434e38();
        }
        if (iVar6 == 0) {
          piStack_50 = (int *)0x8c;
          piStack_54 = (int *)(unaff_EBP + 8);
          piStack_58 = (int *)0x4e9292;
          puVar4 = (undefined4 *)FUN_00679d22();
          piStack_50 = (int *)*puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          *(int ***)(unaff_EBP + -0x40) = &piStack_54;
          piStack_5c = (int *)0x4e92a4;
          piStack_58 = piVar2;
          piStack_54 = extraout_ECX_04;
          FUN_00450368();
          piStack_58 = (int *)0x4e92a9;
          iVar6 = FUN_004834bf();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int *)(unaff_EBP + 8) != 0) {
            piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
            piStack_54 = (int *)0x4e92c1;
            FUN_00434e38();
          }
          if (iVar6 == 0) {
            piStack_50 = (int *)0x8d;
            piStack_54 = (int *)(unaff_EBP + 8);
            piStack_58 = (int *)0x4e92e3;
            puVar4 = (undefined4 *)FUN_00679d22();
            piStack_50 = (int *)*puVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            *(int ***)(unaff_EBP + -0x40) = &piStack_54;
            piStack_5c = (int *)0x4e92f5;
            piStack_58 = piVar2;
            piStack_54 = extraout_ECX_05;
            FUN_00450368();
            piStack_58 = (int *)0x4e92fa;
            iVar6 = FUN_004834bf();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (*(int *)(unaff_EBP + 8) != 0) {
              piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
              piStack_54 = (int *)0x4e9312;
              FUN_00434e38();
            }
            if (iVar6 == 0) {
              piStack_50 = (int *)(unaff_EBP + -0x10);
              piStack_54 = (int *)0x8e;
              piStack_58 = (int *)(unaff_EBP + 8);
              piStack_5c = (int *)0x4e9338;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 0x2b;
              piStack_54 = (int *)0x4e9343;
              piStack_54 = (int *)FUN_00449713();
              *(int ***)(unaff_EBP + -0x40) = &piStack_58;
              piStack_60 = (int *)0x4e9350;
              piStack_5c = piVar2;
              piStack_58 = extraout_ECX_06;
              FUN_00450368();
              piStack_5c = (int *)0x4e9355;
              iVar6 = FUN_0048350d();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              if (*(int *)(unaff_EBP + 8) != 0) {
                piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
                piStack_54 = (int *)0x4e936e;
                FUN_00434e38();
              }
              piStack_50 = (int *)(unaff_EBP + -0x10);
              if (iVar6 == 0) {
                piStack_54 = (int *)0x8f;
                piStack_58 = (int *)(unaff_EBP + 8);
                piStack_5c = (int *)0x4e9394;
                FUN_00679d22();
                *(undefined1 *)(unaff_EBP + -4) = 0x2c;
                piStack_54 = (int *)0x4e939f;
                piStack_54 = (int *)FUN_00449713();
                *(int ***)(unaff_EBP + -0x40) = &piStack_58;
                piStack_60 = (int *)0x4e93ac;
                piStack_5c = piVar2;
                piStack_58 = extraout_ECX_07;
                FUN_00450368();
                piStack_5c = (int *)0x4e93b1;
                iVar6 = FUN_0048350d();
                *(undefined1 *)(unaff_EBP + -4) = 2;
                if (*(int *)(unaff_EBP + 8) != 0) {
                  piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
                  piStack_54 = (int *)0x4e93ca;
                  FUN_00434e38();
                }
                if (iVar6 == 0) {
                  piStack_50 = (int *)0x90;
                  piStack_54 = (int *)(unaff_EBP + 8);
                  piStack_58 = (int *)0x4e93f0;
                  puVar4 = (undefined4 *)FUN_00679d22();
                  piStack_50 = (int *)*puVar4;
                  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
                  *(int ***)(unaff_EBP + -0x40) = &piStack_54;
                  piStack_5c = (int *)0x4e9402;
                  piStack_58 = piVar2;
                  piStack_54 = extraout_ECX_08;
                  FUN_00450368();
                  piStack_58 = (int *)0x4e9407;
                  iVar6 = FUN_004834bf();
                  *(undefined1 *)(unaff_EBP + -4) = 2;
                  if (*(int *)(unaff_EBP + 8) != 0) {
                    piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
                    piStack_54 = (int *)0x4e941f;
                    FUN_00434e38();
                  }
                  if (iVar6 == 0) {
                    piStack_50 = (int *)0x91;
                    piStack_54 = (int *)(unaff_EBP + 8);
                    piStack_58 = (int *)0x4e9441;
                    puVar4 = (undefined4 *)FUN_00679d22();
                    piStack_50 = (int *)*puVar4;
                    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
                    *(int ***)(unaff_EBP + -0x40) = &piStack_54;
                    piStack_5c = (int *)0x4e9453;
                    piStack_58 = piVar2;
                    piStack_54 = extraout_ECX_09;
                    FUN_00450368();
                    piStack_58 = (int *)0x4e9458;
                    iVar6 = FUN_004834bf();
                    *(undefined1 *)(unaff_EBP + -4) = 2;
                    if (*(int *)(unaff_EBP + 8) != 0) {
                      piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
                      piStack_54 = (int *)0x4e9470;
                      FUN_00434e38();
                    }
                    if (iVar6 == 0) {
                      piStack_50 = (int *)(unaff_EBP + -0x10);
                      piStack_54 = (int *)0x92;
                      piStack_58 = (int *)(unaff_EBP + 8);
                      piStack_5c = (int *)0x4e9496;
                      FUN_00679d22();
                      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
                      piStack_54 = (int *)0x4e94a1;
                      piStack_54 = (int *)FUN_00449713();
                      *(int ***)(unaff_EBP + -0x40) = &piStack_58;
                      piStack_60 = (int *)0x4e94ae;
                      piStack_5c = piVar2;
                      FUN_00450368();
                      piStack_5c = (int *)0x4e94b3;
                      iVar6 = FUN_0048350d();
                      *(undefined1 *)(unaff_EBP + -4) = 2;
                      if (*(int *)(unaff_EBP + 8) != 0) {
                        piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
                        piStack_54 = (int *)0x4e94cc;
                        FUN_00434e38();
                      }
                      if (iVar6 == 0) {
                        piStack_50 = (int *)(unaff_EBP + -0x10);
                        piStack_54 = (int *)0x93;
                        piStack_58 = (int *)(unaff_EBP + 8);
                        piStack_5c = (int *)0x4e9501;
                        FUN_00679d22();
                        *(undefined1 *)(unaff_EBP + -4) = 0x30;
                        piStack_54 = (int *)0x4e950c;
                        piStack_54 = (int *)FUN_00449713();
                        *(int ***)(unaff_EBP + -0x40) = &piStack_58;
                        piStack_60 = (int *)0x4e9519;
                        piStack_5c = piVar2;
                        FUN_00450368();
                        piStack_5c = (int *)0x4e951e;
                        iVar6 = FUN_0048350d();
                        *(undefined1 *)(unaff_EBP + -4) = 2;
                        if (*(int *)(unaff_EBP + 8) != 0) {
                          piStack_50 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
                          piStack_54 = (int *)0x4e9537;
                          FUN_00434e38();
                        }
                        if (iVar6 == 0) {
                          piStack_50 = (int *)0xc2;
                          piStack_54 = (int *)(unaff_EBP + 8);
                          piStack_58 = (int *)0x4e95ae;
                          puVar4 = (undefined4 *)FUN_00679d22();
                          piStack_50 = (int *)*puVar4;
                          *(undefined1 *)(unaff_EBP + -4) = 0x31;
                          *(int ***)(unaff_EBP + -0x40) = &piStack_54;
                          piStack_5c = (int *)0x4e95c0;
                          piStack_58 = piVar2;
                          piStack_54 = extraout_ECX_10;
                          FUN_00450368();
                          piStack_58 = (int *)0x4e95c5;
                          iVar6 = FUN_004834bf();
                          *(undefined1 *)(unaff_EBP + -4) = 2;
                          piStack_50 = (int *)0x4e95d5;
                          FUN_00414ebb();
                          if (iVar6 == 0) {
                            piStack_50 = (int *)(unaff_EBP + -0x10);
                            piStack_54 = (int *)0x97;
                            piStack_58 = (int *)(unaff_EBP + 8);
                            piStack_5c = (int *)0x4e9653;
                            FUN_00679d22();
                            *(undefined1 *)(unaff_EBP + -4) = 0x33;
                            piStack_54 = (int *)0x4e965e;
                            piStack_54 = (int *)FUN_00449713();
                            *(int ***)(unaff_EBP + -0x40) = &piStack_58;
                            piStack_60 = (int *)0x4e966b;
                            piStack_5c = piVar2;
                            piStack_58 = extraout_ECX_11;
                            FUN_00450368();
                            piStack_5c = (int *)0x4e9670;
                            iVar6 = FUN_0048350d();
                            *(undefined1 *)(unaff_EBP + -4) = 2;
                            piStack_50 = (int *)0x4e9681;
                            FUN_00414ebb();
                            if (iVar6 == 0) {
LAB_004e9715:
                              if (*piVar2 == 0) {
                                iVar6 = 0;
                              }
                              else {
                                iVar6 = *(int *)(*piVar2 + -4);
                              }
                              if (1 < iVar6) {
                                *(undefined4 *)(unaff_EBP + -0x1c) = 8;
                                *(undefined4 *)(unaff_EBP + 8) = 0x4ebc40;
                                do {
                                  piStack_50 = *(int **)(unaff_EBP + 8);
                                  piStack_54 = (int *)(unaff_EBP + -0x40);
                                  piStack_58 = (int *)0x4e974b;
                                  puVar4 = (undefined4 *)FUN_0045a1d8();
                                  piStack_50 = (int *)*puVar4;
                                  *(undefined1 *)(unaff_EBP + -4) = 0x34;
                                  piStack_60 = (int *)&piStack_54;
                                  *(int ***)(unaff_EBP + -0x3c) = &piStack_54;
                                  piStack_58 = (int *)0xffffffff;
                                  piStack_5c = (int *)0x1;
                                  piStack_54 = extraout_ECX_13;
                                  FUN_0045e053();
                                  piStack_58 = (int *)0x4e9768;
                                  iVar6 = FUN_004834bf();
                                  *(undefined1 *)(unaff_EBP + -4) = 2;
                                  piStack_50 = (int *)0x4e9778;
                                  FUN_00414ebb();
                                  if (iVar6 != 0) {
                                    piStack_50 = (int *)(unaff_EBP + -0x44);
                                    *(int *)(unaff_EBP + -0x3c) = DAT_00978368;
                                    piStack_54 = (int *)0x4e97a2;
                                    iVar6 = FUN_00455c59();
                                    iVar6 = *(int *)(iVar6 + 4);
                                    if (*(int *)(unaff_EBP + -0x40) != 0) {
                                      piStack_50 = (int *)0x0;
                                      piStack_54 = (int *)0x4e97b5;
                                      FUN_0045e7c2();
                                      *(undefined4 *)(unaff_EBP + -0x40) = 0;
                                    }
                                    iVar6 = *(int *)(iVar6 + 0x3f7);
                                    if (iVar6 == 0) {
                                      iVar6 = 0;
                                    }
                                    else {
                                      iVar6 = *(int *)(iVar6 + -4);
                                    }
                                    *(int *)(unaff_EBP + -0x40) = iVar6 + -1;
                                    *(undefined4 *)(unaff_EBP + -0x20) = 0;
                                    if (0 < iVar6 + -1) goto LAB_004e97d4;
                                    break;
                                  }
                                  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
                                  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                                } while (*(int *)(unaff_EBP + 8) < 0x4ebc4f);
                              }
                              goto LAB_004e9824;
                            }
                            *(undefined4 *)(unaff_EBP + 8) = 0;
                            piStack_50 = (int *)0x1;
                            piStack_54 = (int *)(unaff_EBP + 8);
                            piStack_58 = (int *)0x1;
                            piStack_5c = (int *)0x400;
                            piStack_60 = (int *)0x4e96a2;
                            piStack_58 = (int *)FUN_00415015();
                            piStack_5c = (int *)0x4e96a8;
                            iVar7 = FUN_00471777();
                            piStack_50 = (int *)0xffffffff;
                            piStack_54 = (int *)0x4e96b7;
                            FUN_004150c0();
                            iVar6 = DAT_00978358;
                            if (iVar7 != 0) {
                              iVar7 = 0;
                              do {
                                if (*(int *)(iVar7 + 4 + *(int *)(iVar6 + 0x1744)) == 0) break;
                                if (*(int *)(unaff_EBP + 8) == 0) {
                                  piStack_50 = (int *)(unaff_EBP + -0x10);
                                  piStack_54 = (int *)0x4e970d;
                                  FUN_00615697();
                                }
                                else {
                                  piStack_50 = (int *)0x4e9702;
                                  FUN_006156e9();
                                }
                                iVar7 = iVar7 + 8;
                              } while (iVar7 < 0x18);
                              goto LAB_004e9715;
                            }
                            piStack_50 = (int *)0x0;
                            piStack_54 = (int *)0x0;
                            piStack_58 = (int *)0x0;
                            piStack_5c = (int *)0x0;
                            *(int ***)(unaff_EBP + -0x40) = &piStack_60;
                            piStack_60 = extraout_ECX_12;
                            FUN_00679d22(&piStack_60,0x11d);
                            FUN_007db3ad();
                            goto LAB_004e9882;
                          }
                          iVar6 = *(int *)(unaff_EBP + -0x1c);
                          if (iVar6 == 0) {
LAB_004e95f2:
                            iVar6 = 0;
                          }
                          else {
                            piStack_50 = &DAT_00979240;
                            piStack_54 = (int *)0x4e95ee;
                            iVar7 = (**(code **)(*(int *)(iVar6 + 4) + 0x48))();
                            if (iVar7 == 0) goto LAB_004e95f2;
                          }
                          if (iVar6 != 0) {
                            piStack_50 = (int *)0x0;
                            piStack_54 = (int *)0x0;
                            piStack_58 = (int *)0xb5;
                            piStack_5c = (int *)0x4e960d;
                            uVar1 = FUN_0060142b();
                            piStack_50 = (int *)CONCAT31((int3)((uint)uVar1 >> 8),
                                                         *(int *)(iVar6 + 0x728) == 0);
                            *(undefined1 *)(unaff_EBP + -4) = 0x32;
                            piStack_54 = (int *)0x4e9624;
                            FUN_00457cda();
                            piStack_50 = (int *)(unaff_EBP + -0x4c);
                            piStack_54 = (int *)0x4e9633;
                            FUN_004751b2();
                            *(undefined1 *)(unaff_EBP + -4) = 2;
                            goto LAB_004e987d;
                          }
                          goto LAB_004e9882;
                        }
                        piStack_50 = (int *)0x0;
                        piStack_54 = (int *)(unaff_EBP + -0x10);
                        *(int ***)(unaff_EBP + 8) = &piStack_50;
                        piStack_58 = (int *)0x4e954e;
                        FUN_00414f8b();
                        piStack_54 = (int *)0x4e9556;
                        FUN_004ea9b7();
                      }
                      else {
                        piStack_50 = (int *)0x0;
                        piStack_54 = (int *)(unaff_EBP + -0x10);
                        *(int ***)(unaff_EBP + 8) = &piStack_50;
                        piStack_58 = (int *)0x4e94e3;
                        FUN_00414f8b();
                        piStack_54 = (int *)0x4e94eb;
                        FUN_004ea68f();
                      }
                    }
                    else {
                      piStack_50 = (int *)0x4e947d;
                      FUN_004ea88e();
                    }
                  }
                  else {
                    piStack_50 = (int *)0x4e942c;
                    FUN_008566e2();
                  }
                }
                else {
                  piStack_50 = (int *)(unaff_EBP + -0x10);
                  piStack_54 = (int *)0x4e93db;
                  FUN_004ea0ac();
                }
              }
              else {
                piStack_54 = (int *)0x4e937f;
                FUN_004e9ed9();
              }
            }
            else {
              piStack_50 = (int *)0x4e931f;
              FUN_004e9e3e();
            }
          }
          else {
            piStack_50 = (int *)0x4e92ce;
            FUN_004e9d38();
          }
        }
        else {
          piStack_50 = (int *)0x4e927d;
          FUN_0085c408();
        }
      }
      else {
        piStack_50 = (int *)(unaff_EBP + -0x10);
        piStack_54 = (int *)0x4e922c;
        FUN_004e9b8c();
      }
    }
    else {
      piStack_50 = (int *)0x1;
LAB_004e9126:
      piStack_54 = (int *)0x4e9131;
      FUN_0073dcf0();
    }
LAB_004e9556:
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + -0x14) + -0xc);
      piStack_54 = (int *)0x4e956a;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      piStack_54 = (int *)0x4e957f;
      FUN_00434e38();
    }
    iVar6 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    piStack_50 = *(int **)(unaff_EBP + -0x10);
    piStack_54 = (int *)0x4e88a1;
    piVar2 = (int *)FUN_0087b6ab();
    piStack_58 = (int *)(unaff_EBP + 8);
    piStack_5c = (int *)0x4e88ad;
    piStack_54 = piVar2;
    piVar3 = (int *)FUN_004e61ea();
    iVar6 = *piVar3;
    piStack_50 = (int *)0x4e88bd;
    FUN_004027eb();
    if (iVar6 != 0) {
      piStack_50 = (int *)0x0;
      piStack_54 = (int *)0x0;
      piStack_58 = (int *)0x0;
      piStack_5c = (int *)0x0;
      piStack_60 = piVar2;
      FUN_004ea30d();
    }
LAB_004e88ce:
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + -0x14) + -0xc);
      piStack_54 = (int *)0x4e88e2;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      piStack_50 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      piStack_54 = (int *)0x4e88f7;
      FUN_00434e38();
    }
    iVar6 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (iVar6 != 0) {
    piStack_50 = (int *)(iVar6 + -0xc);
    piStack_54 = (int *)0x4e9598;
    FUN_00434e38();
  }
LAB_004e98a6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_004e97d4:
  do {
    piStack_50 = *(int **)(unaff_EBP + -0x20);
    piStack_58 = (int *)(unaff_EBP + -0x30);
    piStack_54 = (int *)0x5;
    piStack_5c = (int *)0x4e97e4;
    iVar6 = FUN_00458c4f();
    iVar6 = *(int *)(iVar6 + 4);
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      piStack_50 = (int *)0x0;
      piStack_54 = (int *)0x4e97f7;
      FUN_00449913();
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
    if (iVar6 != 0) {
      piStack_50 = (int *)0x4e9807;
      iVar6 = FUN_0045e2eb();
      if (iVar6 == *(int *)(unaff_EBP + 8)) {
        piStack_50 = *(int **)(unaff_EBP + -0x1c);
        piStack_54 = (int *)0x4e9824;
        FUN_0084942e();
        break;
      }
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
  } while (*(int *)(unaff_EBP + -0x20) < *(int *)(unaff_EBP + -0x40));
LAB_004e9824:
  piStack_50 = (int *)0x4e9832;
  uVar5 = FUN_0045e4b8();
  if ((uVar5 & 1) != 0) {
    piStack_50 = (int *)0x0;
    piStack_54 = (int *)0x0;
    piStack_58 = (int *)0x2e;
    piStack_5c = (int *)0x4e9844;
    FUN_0060142b();
    *(int ***)(unaff_EBP + 8) = &piStack_50;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_50 = (int *)0x0;
    piStack_58 = (int *)0x4e9856;
    piStack_54 = piVar2;
    FUN_00414f8b();
    piStack_54 = (int *)0x4e985e;
    FUN_00459cb5();
    piStack_50 = (int *)0x0;
    piStack_54 = (int *)0x4e9867;
    FUN_00457cda();
    piStack_50 = (int *)(unaff_EBP + -0x38);
    piStack_54 = (int *)0x4e9876;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_004e987d:
    piStack_50 = (int *)0x4e9882;
    FUN_0045ebca();
  }
LAB_004e9882:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_50 = (int *)0x4e988e;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_50 = (int *)0x4e989a;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_50 = (int *)0x4e98a6;
  FUN_00414ebb();
  goto LAB_004e98a6;
}


