/* FUN_004bfab4 - 0x004bfab4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_004bfab4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int *piVar10;
  int unaff_EBP;
  bool bVar11;
  int iStack_494;
  int iStack_490;
  int iStack_48c;
  undefined1 *puStack_488;
  code *pcStack_484;
  
  FUN_00879bb8();
  bVar11 = DAT_00979178 != 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (bVar11) goto LAB_004c06e3;
  pcStack_484 = (code *)0x1;
  puStack_488 = (undefined1 *)0x4bfae1;
  iVar1 = FUN_004c2076();
  uVar3 = DAT_00978368;
  if ((iVar1 == 0) || (*(int *)(extraout_ECX + 0x10) != 1)) goto LAB_004c06e3;
  *(int **)(unaff_EBP + -0x18) = DAT_00978358;
  pcStack_484 = (code *)(unaff_EBP + -0x68);
  *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
  puStack_488 = (undefined1 *)0x4bfb0d;
  iVar1 = FUN_00455c59();
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(unaff_EBP + -0x28) = iVar1;
  if (*(int *)(unaff_EBP + -100) != 0) {
    pcStack_484 = (code *)0x0;
    puStack_488 = (undefined1 *)0x4bfb21;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  pcStack_484 = *(code **)(unaff_EBP + 8);
  iStack_48c = unaff_EBP + -0x38;
  puStack_488 = (undefined1 *)0x1;
  iStack_490 = 0x4bfb34;
  iVar2 = FUN_00458c4f();
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(unaff_EBP + -0x44) = iVar2;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcStack_484 = (code *)0x0;
    puStack_488 = (undefined1 *)0x4bfb48;
    FUN_00449913();
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  if (iVar2 == 0) goto LAB_004c06e3;
  *(int *)(unaff_EBP + -0x24) = iVar2 + 0xc;
  pcStack_484 = (code *)0x4bfb5e;
  uVar3 = FUN_0045e2eb();
  piVar10 = DAT_00978358;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  pcStack_484 = (code *)0x4bfb6c;
  (**(code **)(*piVar10 + 4))();
  pcStack_484 = (code *)0x4bfb73;
  iVar4 = FUN_004bf0d4();
  if ((iVar4 != 0) &&
     ((iVar4 = *(int *)(unaff_EBP + -0x1c) / 10000, iVar4 == 0xbe || (iVar4 == 0xbf)))) {
    pcStack_484 = (code *)0x3ec;
    puStack_488 = (undefined1 *)0x4bfb9d;
    FUN_007bd2b0();
    goto LAB_004c06e3;
  }
  pcStack_484 = (code *)0x4bfbb0;
  iVar4 = FUN_0066127f();
  if (iVar4 != 0) {
    *(int **)(unaff_EBP + 0xc) = &iStack_494;
    uVar3 = 0x35b;
    iStack_494 = extraout_ECX_00;
    goto LAB_004bfbc3;
  }
  if (*(int *)(unaff_EBP + 0xc) == 0x12) {
    if ((*(int *)(iVar2 + 0x18) == 0 && *(int *)(iVar2 + 0x1c) == 0) &&
       (*(int *)(iVar1 + 0x16f) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_00973a94;
      pcStack_484 = (code *)0x4bfc08;
      pcStack_484 = (code *)FUN_0045e2eb();
      puStack_488 = (undefined1 *)0x4bfc11;
      iVar4 = FUN_0054e7b3();
      *(int *)(unaff_EBP + -0x20) = iVar4;
      if (iVar4 != 0) {
        pcStack_484 = (code *)0x4bfc24;
        pcStack_484 = (code *)FUN_0045e2eb();
        puStack_488 = (undefined1 *)0x4bfc2d;
        iVar4 = FUN_004c20da();
        if (iVar4 != 0) goto LAB_004bfc35;
      }
    }
    else {
LAB_004bfc35:
      if ((*(int *)(iVar2 + 0x18) == 0 && *(int *)(iVar2 + 0x1c) == 0) ||
         (*(int *)(iVar1 + 0x2f7) == 0)) goto LAB_004bfd20;
      pcStack_484 = (code *)0x4bfc5d;
      pcStack_484 = (code *)FUN_0045e2eb();
      puStack_488 = (undefined1 *)0x4bfc65;
      iVar1 = FUN_0054e7b3();
      if (iVar1 != 0) goto LAB_004bfd0b;
    }
    goto LAB_004c06e3;
  }
  if (*(int *)(unaff_EBP + 0xc) == 0x13) {
    if ((*(int *)(iVar2 + 0x18) == 0 && *(int *)(iVar2 + 0x1c) == 0) &&
       (iVar4 = *(int *)(iVar1 + 0x167), *(int *)(unaff_EBP + -0x2c) = iVar4, iVar4 != 0)) {
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_00973a94;
      pcStack_484 = (code *)0x4bfca6;
      pcStack_484 = (code *)FUN_0045e2eb();
      puStack_488 = (undefined1 *)0x4bfcaf;
      iVar4 = FUN_0054e7b3();
      *(int *)(unaff_EBP + -0x20) = iVar4;
      if (iVar4 != 0) {
        pcStack_484 = (code *)0x4bfcc5;
        pcStack_484 = (code *)FUN_0045e2eb();
        puStack_488 = (undefined1 *)0x4bfcce;
        iVar4 = FUN_004c20da();
        if (iVar4 != 0) goto LAB_004bfcd6;
      }
      goto LAB_004c06e3;
    }
LAB_004bfcd6:
    if ((*(int *)(iVar2 + 0x18) != 0 || *(int *)(iVar2 + 0x1c) != 0) &&
       (*(int *)(iVar1 + 0x2ef) != 0)) {
      pcStack_484 = (code *)0x4bfcf6;
      pcStack_484 = (code *)FUN_0045e2eb();
      puStack_488 = (undefined1 *)0x4bfcfe;
      iVar1 = FUN_0054e7b3();
      if (iVar1 == 0) goto LAB_004c06e3;
LAB_004bfd0b:
      pcStack_484 = (code *)0x4bfd10;
      pcStack_484 = (code *)FUN_0045e2eb();
      puStack_488 = (undefined1 *)0x4bfd18;
      iVar1 = FUN_004c20da();
      if (iVar1 == 0) goto LAB_004c06e3;
    }
  }
LAB_004bfd20:
  iVar1 = *(int *)(unaff_EBP + -0x1c) / 100;
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  if ((iVar1 == 0x2b70) && (*(int *)(unaff_EBP + -0x1c) != 0x10f7c0)) {
    piVar10 = &DAT_00964178;
    do {
      if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x25f + *piVar10 * 8) != 0) {
        pcStack_484 = (code *)0x4bfd5b;
        iVar1 = FUN_0045e2eb();
        *(int *)(unaff_EBP + -0x20) = iVar1;
        if ((iVar1 / 100 == 0x2b70) && (*(int *)(unaff_EBP + -0x20) != 0x10f7c0)) {
          iStack_494 = 100;
          *(int **)(unaff_EBP + 0xc) = &iStack_494;
          uVar3 = 0x354;
          goto LAB_004bfbc3;
        }
      }
      piVar10 = piVar10 + 1;
    } while ((int)piVar10 < 0x964188);
  }
  if ((*(int *)(unaff_EBP + -0x2c) == 0x2b78) && (*(int *)(unaff_EBP + -0x1c) % 10 < 3)) {
    piVar10 = &DAT_00964178;
    do {
      if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x25f + *piVar10 * 8) != 0) {
        pcStack_484 = (code *)0x4bfdc7;
        iVar1 = FUN_0045e2eb();
        *(int *)(unaff_EBP + -0x20) = iVar1;
        if ((iVar1 / 100 == 0x2b78) && (*(int *)(unaff_EBP + -0x20) % 10 < 3)) {
          iStack_494 = 10;
          *(int **)(unaff_EBP + 0xc) = &iStack_494;
          uVar3 = 0x355;
          goto LAB_004bfbc3;
        }
      }
      piVar10 = piVar10 + 1;
    } while ((int)piVar10 < 0x964188);
  }
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if ((((iVar1 == 0x10fae3) || (iVar1 == 0x10fae6)) || (iVar1 == 0x10fae7)) || (iVar1 == 0x10fae9))
  {
    piVar10 = &DAT_00964178;
    do {
      if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x25f + *piVar10 * 8) != 0) {
        pcStack_484 = (code *)0x4bfe41;
        iVar1 = FUN_0045e2eb();
        if (((iVar1 == 0x10fae3) || (iVar1 == 0x10fae6)) ||
           ((iVar1 == 0x10fae7 || (iVar1 == 0x10fae9)))) {
          *(int **)(unaff_EBP + 0xc) = &iStack_494;
          uVar3 = 0x105b;
          iStack_494 = extraout_ECX_01;
          goto LAB_004bfbc3;
        }
      }
      piVar10 = piVar10 + 1;
    } while ((int)piVar10 < 0x964188);
  }
  if (*(int *)(unaff_EBP + 0xc) == 0xb) {
    iVar1 = *(int *)(unaff_EBP + -0x1c) / 100000;
    if (iVar1 == 0x11) {
      pcStack_484 = *(code **)(unaff_EBP + -0x1c);
      puStack_488 = (undefined1 *)0x4bfea9;
      FUN_0054e7b3();
      if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x12f) == 0) {
        pcStack_484 = (code *)0x0;
        puStack_488 = (undefined1 *)0x4bfec6;
        FUN_0048b92c();
        *(undefined4 *)(unaff_EBP + -0x30) = 1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
      }
      pcStack_484 = (code *)0x4bfed7;
      iVar1 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_494 = extraout_ECX_02;
      if (((*(byte *)(unaff_EBP + -0x30) & 1) != 0) && (*(int *)(unaff_EBP + -0x34) != 0)) {
        pcStack_484 = *(code **)(unaff_EBP + -0x34);
        puStack_488 = (undefined1 *)0x4bfef5;
        FUN_00402b41();
        iStack_494 = extraout_ECX_03;
      }
      if (iVar1 == 0) {
        *(int **)(unaff_EBP + 0xc) = &iStack_494;
        uVar3 = 0x356;
      }
      else {
        puStack_488 = (undefined1 *)0x4bff15;
        pcStack_484 = (code *)iVar1;
        iVar1 = FUN_00459d68();
        if (iVar1 != 0) goto LAB_004c007c;
        *(int **)(unaff_EBP + 0xc) = &iStack_494;
        uVar3 = 0x358;
        iStack_494 = extraout_ECX_04;
      }
LAB_004bfbc3:
      pcStack_484 = (code *)0x0;
      puStack_488 = (undefined1 *)0x0;
      iStack_48c = 0;
      iStack_490 = 0;
      FUN_00679d22(&iStack_494,uVar3);
      FUN_007db3ad();
      goto LAB_004c06e3;
    }
    if (iVar1 != 0x10) {
      if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x2b7) == 0) {
        pcStack_484 = (code *)0x0;
        puStack_488 = (undefined1 *)0x4bff55;
        FUN_0048b92c();
        *(undefined4 *)(unaff_EBP + -0x30) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 1;
      }
      pcStack_484 = (code *)0x4bff6a;
      iVar1 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (((*(byte *)(unaff_EBP + -0x30) & 2) != 0) && (*(int *)(unaff_EBP + -0x34) != 0)) {
        pcStack_484 = *(code **)(unaff_EBP + -0x34);
        puStack_488 = (undefined1 *)0x4bff88;
        FUN_00402b41();
      }
      if (iVar1 / 100000 == 0x11) {
        puStack_488 = (undefined1 *)0x4bffa2;
        pcStack_484 = (code *)iVar1;
        iVar1 = FUN_0054e7b3();
        if (iVar1 == 0) {
          *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
          *(undefined4 *)(unaff_EBP + 0xc) = 0x22000006;
          pcStack_484 = (code *)&DAT_008f7260;
          puStack_488 = (undefined1 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
          iStack_48c = 0x4bffc6;
          __CxxThrowException_8();
        }
        pcStack_484 = *(code **)(unaff_EBP + -0x1c);
        puStack_488 = (undefined1 *)0x4bffd0;
        iVar1 = FUN_00459d68();
        if (iVar1 == 0) {
          *(int **)(unaff_EBP + 0xc) = &iStack_494;
          uVar3 = 0x359;
          iStack_494 = extraout_ECX_05;
          goto LAB_004bfbc3;
        }
      }
    }
  }
  else if (*(int *)(unaff_EBP + 0xc) == 10) {
    pcStack_484 = *(code **)(unaff_EBP + -0x1c);
    puStack_488 = (undefined1 *)0x4c0004;
    iVar1 = FUN_005540b6();
    if (iVar1 != 0) {
      pcStack_484 = *(code **)(unaff_EBP + -0x1c);
      puStack_488 = (undefined1 *)0x4c0016;
      FUN_0054e7b3();
      if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x127) == 0) {
        pcStack_484 = (code *)0x0;
        puStack_488 = (undefined1 *)0x4c0031;
        FUN_0048b92c();
        *(undefined4 *)(unaff_EBP + -0x30) = 4;
        *(undefined4 *)(unaff_EBP + -4) = 3;
      }
      pcStack_484 = (code *)0x4c0046;
      iVar1 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_494 = extraout_ECX_06;
      if (((*(byte *)(unaff_EBP + -0x30) & 4) != 0) && (*(int *)(unaff_EBP + -0x34) != 0)) {
        pcStack_484 = *(code **)(unaff_EBP + -0x34);
        puStack_488 = (undefined1 *)0x4c0064;
        FUN_00402b41();
        iStack_494 = extraout_ECX_07;
      }
      if (iVar1 == 0) {
        *(int **)(unaff_EBP + 0xc) = &iStack_494;
        uVar3 = 0x357;
        goto LAB_004bfbc3;
      }
    }
  }
LAB_004c007c:
  pcStack_484 = *(code **)(unaff_EBP + -0x44);
  puStack_488 = (undefined1 *)0x4c008a;
  iVar1 = FUN_004c213a();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  if (iVar1 == 0) {
    pcStack_484 = (code *)-*(int *)(unaff_EBP + 0xc);
  }
  else {
    pcStack_484 = (code *)(-100 - *(int *)(unaff_EBP + 0xc));
  }
  *(code **)(unaff_EBP + -0x20) = pcStack_484;
  puStack_488 = (undefined1 *)0x1;
  iStack_48c = unaff_EBP + -0x38;
  iStack_490 = 0x4c00b0;
  iVar1 = FUN_00458c4f();
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    pcStack_484 = (code *)0x0;
    puStack_488 = (undefined1 *)0x4c00c4;
    FUN_00449913();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iVar1 = *(int *)(unaff_EBP + -0x28) + 0x25b;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    iVar1 = *(int *)(unaff_EBP + -0x28) + 0xd3;
  }
  pcStack_484 = *(code **)(unaff_EBP + -0x1c);
  iStack_48c = 0x4c00ec;
  puStack_488 = (undefined1 *)iVar1;
  iVar2 = FUN_004c23c9();
  if (iVar2 == 0) {
    pcStack_484 = *(code **)(unaff_EBP + -0x1c);
    iStack_48c = 0x4c00fb;
    puStack_488 = (undefined1 *)iVar1;
    iVar2 = FUN_004c2450();
  }
  if (iVar2 != 0) {
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      pcStack_484 = (code *)0x1;
      puStack_488 = (undefined1 *)0x4c0110;
      iVar1 = FUN_0048aa38();
      if (iVar1 == 0) goto LAB_004c06e3;
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      *(int *)(unaff_EBP + -0x2c) = -iVar2;
    }
    else {
      *(int *)(unaff_EBP + -0x2c) = -100 - iVar2;
    }
  }
  pcStack_484 = FUN_00449716;
  puStack_488 = &LAB_004c252c;
  iStack_48c = 0x31;
  iStack_490 = 8;
  iStack_494 = unaff_EBP + -0x3f0;
  FUN_0087b2f0();
  pcStack_484 = FUN_00449716;
  puStack_488 = &LAB_004c252c;
  iStack_48c = 0x31;
  iStack_490 = 8;
  iStack_494 = unaff_EBP + -0x268;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + 0xc) == 0xe) {
    pcStack_484 = (code *)0x0;
    puStack_488 = (undefined1 *)(unaff_EBP + -0x38);
    iStack_48c = 0x4c017b;
    pcStack_484 = (code *)FUN_0078c04f();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_488 = (undefined1 *)0x4c0188;
    FUN_004c2596();
    iVar1 = *(int *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 6;
joined_r0x004c01ef:
    if (iVar1 != 0) {
      pcStack_484 = (code *)0x0;
      puStack_488 = (undefined1 *)0x4c01fa;
      FUN_004c26f7();
    }
  }
  else {
    if (*(int *)(unaff_EBP + 0xc) == 0x1e) {
      pcStack_484 = (code *)0x1;
      puStack_488 = (undefined1 *)(unaff_EBP + -0x38);
      iStack_48c = 0x4c01ab;
      pcStack_484 = (code *)FUN_0078c04f();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_488 = (undefined1 *)0x4c01b8;
      FUN_004c2596();
      iVar1 = *(int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      goto joined_r0x004c01ef;
    }
    if (*(int *)(unaff_EBP + 0xc) == 0x26) {
      pcStack_484 = (code *)0x2;
      puStack_488 = (undefined1 *)(unaff_EBP + -0x38);
      iStack_48c = 0x4c01db;
      pcStack_484 = (code *)FUN_0078c04f();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_488 = (undefined1 *)0x4c01e8;
      FUN_004c2596();
      iVar1 = *(int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      goto joined_r0x004c01ef;
    }
  }
  pcStack_484 = FUN_004c2558;
  puStack_488 = &LAB_004c256e;
  iStack_48c = 3;
  iStack_490 = 8;
  iStack_494 = unaff_EBP + -0x60;
  FUN_0087b2f0();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0x60;
  do {
    pcStack_484 = *(code **)(unaff_EBP + -0x24);
    puStack_488 = (undefined1 *)(unaff_EBP + -0x48);
    iStack_48c = 0x4c022e;
    pcStack_484 = (code *)FUN_0078c04f();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_488 = (undefined1 *)0x4c023b;
    FUN_004c2596();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      pcStack_484 = (code *)0x0;
      puStack_488 = (undefined1 *)0x4c024d;
      FUN_004c26f7();
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 8;
  } while (*(int *)(unaff_EBP + -0x24) < 3);
  pcStack_484 = *(code **)(*(int *)(unaff_EBP + -0x40) + 0x26b0);
  puStack_488 = (undefined1 *)(*(int *)(unaff_EBP + -0x40) + 0x26a8);
  iStack_48c = 0x4c0271;
  iStack_494 = FUN_00413367();
  iStack_48c = *(int *)(unaff_EBP + -0x2c);
  iStack_490 = *(undefined4 *)(unaff_EBP + -0x20);
  FUN_00662ab1(*(undefined4 *)(unaff_EBP + -0x28),unaff_EBP + -0x60,unaff_EBP + -0x3f0,
               unaff_EBP + -0x268);
  pcStack_484 = (code *)0x4c02a0;
  FUN_004bf8a2();
  pcStack_484 = (code *)0x4c02ab;
  FUN_00660de8();
  pcStack_484 = *(code **)(*(int *)(unaff_EBP + -0x40) + 0x26b0);
  puStack_488 = (undefined1 *)(*(int *)(unaff_EBP + -0x40) + 0x26a8);
  iStack_48c = 0x4c02bf;
  pcStack_484 = (code *)FUN_00413367();
  puStack_488 = (undefined1 *)0x0;
  iStack_48c = 0;
  iStack_490 = unaff_EBP + -0x268;
  iStack_494 = unaff_EBP + -0x3f0;
  FUN_00663261(*(undefined4 *)(unaff_EBP + -0x28),unaff_EBP + -0x480);
  pcStack_484 = *(code **)(unaff_EBP + -0x1c);
  puStack_488 = (undefined1 *)0x4c02f5;
  uVar3 = FUN_0054e7b3();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
  iVar1 = extraout_ECX_08;
  switch(*(undefined4 *)(unaff_EBP + 0xc)) {
  case 0xe:
  case 0x1e:
  case 0x26:
    if ((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(unaff_EBP + -0x2c) != 0)) {
      pcStack_484 = (code *)0x4c0329;
      pcStack_484 = (code *)FUN_0045e2eb();
      puStack_488 = (undefined1 *)0x4c0332;
      iVar2 = FUN_00459dd4();
      iVar1 = extraout_ECX_09;
      if (iVar2 != 0) break;
    }
    *(int **)(unaff_EBP + 0xc) = &iStack_494;
LAB_004c04fc:
    uVar3 = 0x35d;
    goto LAB_004c067f;
  case 0x15:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4);
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(iVar2 + 0x78) + 0x10) != 0) break;
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04fc;
    }
    *(int **)(unaff_EBP + 0xc) = &iStack_494;
LAB_004c04dc:
    uVar3 = 0x35c;
    goto LAB_004c067f;
  case 0x16:
  case 0x17:
  case 0x2e:
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    break;
  case 0x1a:
  case 0x1b:
  case 0x1c:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4);
    *(int *)(unaff_EBP + 0xc) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 400) = 1;
      pcStack_484 = (code *)0x4c0528;
      uVar3 = FUN_007d1e08();
      iVar1 = *(int *)(unaff_EBP + 0xc);
LAB_004c0579:
      *(undefined4 *)(iVar1 + 0x194) = uVar3;
    }
    break;
  case 0x1d:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4);
    if (iVar2 == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar2 + 0x78) + 0x14) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04fc;
    }
    break;
  case 0x1f:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc);
    if (iVar2 == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar2 + 0x78) + 0x10) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04fc;
    }
    break;
  case 0x20:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc);
    if (iVar2 == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar2 + 0x78) + 0x14) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04fc;
    }
    break;
  case 0x21:
  case 0x22:
  case 0x2f:
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    break;
  case 0x23:
  case 0x24:
  case 0x25:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc);
    *(int *)(unaff_EBP + 0xc) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 400) = 1;
      pcStack_484 = (code *)0x4c054f;
      uVar3 = FUN_007d1e08();
      iVar1 = *(int *)(unaff_EBP + 0xc);
      goto LAB_004c0579;
    }
    break;
  case 0x27:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14);
    if (iVar2 == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar2 + 0x78) + 0x10) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04fc;
    }
    break;
  case 0x28:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14);
    if (iVar2 == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar2 + 0x78) + 0x14) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04fc;
    }
    break;
  case 0x29:
  case 0x2a:
  case 0x30:
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14) == 0) {
      *(int **)(unaff_EBP + 0xc) = &iStack_494;
      goto LAB_004c04dc;
    }
    break;
  case 0x2b:
  case 0x2c:
  case 0x2d:
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14);
    *(int *)(unaff_EBP + 0xc) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 400) = 1;
      pcStack_484 = (code *)0x4c0576;
      uVar3 = FUN_007d1e08();
      iVar1 = *(int *)(unaff_EBP + 0xc);
      goto LAB_004c0579;
    }
  }
  pcStack_484 = *(code **)(unaff_EBP + -0x1c);
  iStack_490 = unaff_EBP + -0x14;
  *(int **)(unaff_EBP + 0xc) = &iStack_48c;
  iStack_494 = 0x4c0592;
  iStack_48c = iVar1;
  puStack_488 = (undefined1 *)iVar1;
  FUN_004c2575();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_490 = 0x4c05a1;
  iStack_490 = FUN_004bf893();
  iStack_494 = 0x4c05ad;
  iStack_494 = FUN_004bf884();
  uVar3 = FUN_004bf875();
  uVar5 = FUN_004bf866(uVar3);
  uVar6 = FUN_004bf857(uVar5);
  uVar7 = FUN_004bf848(uVar6);
  uVar8 = FUN_004bf839(uVar7);
  uVar9 = FUN_004bf82d(uVar8);
  FUN_0048b97b(uVar9);
  iVar1 = FUN_004c216d(uVar9,uVar8,uVar7,uVar6,uVar5,uVar3);
  if (iVar1 != 0) {
    pcStack_484 = (code *)0xffffffff;
    puStack_488 = *(undefined1 **)(unaff_EBP + -0x20);
    iStack_48c = *(int *)(unaff_EBP + 8);
    iStack_490 = 1;
    iStack_494 = 0x4c06f9;
    FUN_008347d4();
    pcStack_484 = FUN_004c2558;
    puStack_488 = (undefined1 *)0x3;
    iStack_48c = 8;
    iStack_490 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_494 = 0x4c070b;
    FUN_0087a0b8();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      pcStack_484 = (code *)0x0;
      puStack_488 = (undefined1 *)0x4c071d;
      FUN_004c26f7();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    pcStack_484 = FUN_00449716;
    puStack_488 = (undefined1 *)0x31;
    iStack_48c = 8;
    iStack_490 = unaff_EBP + -0x268;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_494 = 0x4c0735;
    FUN_0087a0b8();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pcStack_484 = FUN_00449716;
    puStack_488 = (undefined1 *)0x31;
    iStack_48c = 8;
    iStack_490 = unaff_EBP + -0x3f0;
    iStack_494 = 0x4c074a;
    FUN_0087a0b8();
    uVar3 = 1;
    goto LAB_004c074d;
  }
  pcStack_484 = *(code **)(unaff_EBP + -0xd8);
  puStack_488 = (undefined1 *)(unaff_EBP + -0xe0);
  iStack_48c = 0x4c061c;
  iStack_48c = FUN_00413367();
  iStack_490 = 0xe;
  iStack_494 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = FUN_0044d79d();
  if (iVar1 == 0) {
LAB_004c0670:
    *(int **)(unaff_EBP + 0xc) = &iStack_494;
    uVar3 = 0x353;
  }
  else {
    pcStack_484 = *(code **)(unaff_EBP + -0x1c);
    puStack_488 = (undefined1 *)0x4c063c;
    iVar1 = FUN_0054e7b3();
    *(int *)(unaff_EBP + 0xc) = iVar1;
    if ((iVar1 != 0) && (*(int *)(unaff_EBP + -0x10) != 0)) {
      pcStack_484 = (code *)0x4c0652;
      pcStack_484 = (code *)FUN_0045e2eb();
      puStack_488 = (undefined1 *)0x4c065b;
      iVar1 = FUN_00459dd4();
      if (iVar1 != 0) goto LAB_004c0670;
    }
    *(int **)(unaff_EBP + 0xc) = &iStack_494;
    uVar3 = 0x35a;
  }
LAB_004c067f:
  pcStack_484 = (code *)0x0;
  puStack_488 = (undefined1 *)0x0;
  iStack_48c = 0;
  iStack_490 = 0;
  FUN_00679d22(&iStack_494,uVar3);
  FUN_007db3ad();
  pcStack_484 = FUN_004c2558;
  puStack_488 = (undefined1 *)0x3;
  iStack_48c = 8;
  iStack_490 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_494 = 0x4c06a4;
  FUN_0087a0b8();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    pcStack_484 = (code *)0x0;
    puStack_488 = (undefined1 *)0x4c06b6;
    FUN_004c26f7();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  pcStack_484 = FUN_00449716;
  puStack_488 = (undefined1 *)0x31;
  iStack_48c = 8;
  iStack_490 = unaff_EBP + -0x268;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_494 = 0x4c06ce;
  FUN_0087a0b8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_484 = FUN_00449716;
  puStack_488 = (undefined1 *)0x31;
  iStack_48c = 8;
  iStack_490 = unaff_EBP + -0x3f0;
  iStack_494 = 0x4c06e3;
  FUN_0087a0b8();
LAB_004c06e3:
  uVar3 = 0;
LAB_004c074d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


