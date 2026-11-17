/* FUN_006bb3a3 - 0x006bb3a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bb3a3(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar7;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar8;
  int unaff_EBP;
  undefined4 uVar9;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined1 *puStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 *puStack_c0;
  
  FUN_00879bb8();
  puStack_c0 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x34) = extraout_ECX;
  iStack_c4 = 0x6bb3c3;
  FUN_0081622a();
  puStack_c0 = (undefined4 *)(unaff_EBP + 8);
  iStack_c4 = 0x6bb3ce;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x644) != 0) {
    puStack_c0 = &DAT_00980690;
    iStack_c4 = 0x6bb3e9;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x644);
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar4 == (int *)0x0) {
      puStack_c0 = (undefined4 *)0x80004003;
      iStack_c4 = 0x6bb409;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    puStack_d0 = *(undefined1 **)(unaff_EBP + -0x10);
    iStack_cc = *(int *)(unaff_EBP + -0x30);
    iStack_c8 = *(int *)(unaff_EBP + -0x2c);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + -0x20) = piVar4;
    puStack_c0 = *(undefined4 **)(unaff_EBP + -0x24);
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_c0 = (undefined4 *)&DAT_00963cc8;
      iStack_c4 = *(undefined4 *)(unaff_EBP + -0x20);
      iStack_cc = 0x6bb440;
      iStack_c8 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x30);
    iStack_c4 = 0x6bb44d;
    puStack_c0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_c0 < 0) {
      iStack_c4 = 0x6bb458;
      FUN_00878dfb();
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x34) + 0x598) != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x1ab;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x34) + 0x648;
    do {
      if (**(int **)(unaff_EBP + -0x18) != 0) {
        puStack_c0 = &DAT_00980690;
        iStack_c4 = 0x6bb488;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + -0x18);
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar4 == (int *)0x0) {
          puStack_c0 = (undefined4 *)0x80004003;
          iStack_c4 = 0x6bb4a5;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        puStack_d0 = *(undefined1 **)(unaff_EBP + -0x10);
        iStack_cc = *(int *)(unaff_EBP + -0x30);
        iStack_c8 = *(int *)(unaff_EBP + -0x2c);
        iStack_c4 = *(undefined4 *)(unaff_EBP + -0x28);
        *(int **)(unaff_EBP + -0x20) = piVar4;
        puStack_c0 = *(undefined4 **)(unaff_EBP + -0x24);
        iVar1 = (**(code **)(iVar1 + 0x80))();
        if (iVar1 < 0) {
          puStack_c0 = (undefined4 *)&DAT_00963cc8;
          iStack_c4 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_cc = 0x6bb4dd;
          iStack_c8 = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_c0 = (undefined4 *)(unaff_EBP + -0x30);
        iStack_c4 = 0x6bb4ea;
        puStack_c0 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_c0 < 0) {
          iStack_c4 = 0x6bb4f5;
          FUN_00878dfb();
        }
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x17;
    } while (*(int *)(unaff_EBP + -0x14) < 0x1f0);
    uVar2 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0x1f0;
    while( true ) {
      iVar1 = *(int *)(unaff_EBP + -0x34);
      iVar3 = *(int *)(iVar1 + 0x674);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) break;
      iVar3 = *(int *)(iVar3 + uVar2 * 4) + -100;
      if (*(int *)(iVar1 + 0x654 + iVar3 * 4) != 0) {
        puStack_c0 = &DAT_00980690;
        iStack_c4 = 0x6bb550;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 0x654 + iVar3 * 4);
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piVar4 == (int *)0x0) {
          puStack_c0 = (undefined4 *)0x80004003;
          iStack_c4 = 0x6bb56a;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        puStack_d0 = *(undefined1 **)(unaff_EBP + -0x10);
        iStack_cc = *(int *)(unaff_EBP + -0x30);
        iStack_c8 = *(int *)(unaff_EBP + -0x2c);
        iStack_c4 = *(undefined4 *)(unaff_EBP + -0x28);
        *(int **)(unaff_EBP + -0x20) = piVar4;
        puStack_c0 = *(undefined4 **)(unaff_EBP + -0x24);
        iVar1 = (**(code **)(iVar1 + 0x80))();
        if (iVar1 < 0) {
          puStack_c0 = (undefined4 *)&DAT_00963cc8;
          iStack_c4 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_cc = 0x6bb5a2;
          iStack_c8 = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_c0 = (undefined4 *)(unaff_EBP + -0x30);
        iStack_c4 = 0x6bb5af;
        puStack_c0 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_c0 < 0) {
          iStack_c4 = 0x6bb5ba;
          FUN_00878dfb();
        }
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x17;
      uVar2 = *(uint *)(unaff_EBP + -0x18);
    }
    puStack_c0 = (undefined4 *)0x3;
    iStack_c4 = 0xff;
    iStack_c8 = 0x6bb5d8;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0x670);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
    if (piVar4 == (int *)0x0) {
      puStack_c0 = (undefined4 *)0x80004003;
      iStack_c4 = 0x6bb5f6;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    puStack_d0 = *(undefined1 **)(unaff_EBP + -0x10);
    iStack_cc = *(int *)(unaff_EBP + -0x30);
    iStack_c8 = *(int *)(unaff_EBP + -0x2c);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + -0x20) = piVar4;
    puStack_c0 = *(undefined4 **)(unaff_EBP + -0x24);
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_c0 = (undefined4 *)&DAT_00963cc8;
      iStack_c4 = *(undefined4 *)(unaff_EBP + -0x20);
      iStack_cc = 0x6bb63d;
      iStack_c8 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x30);
    iStack_c4 = 0x6bb64a;
    puStack_c0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_c0 < 0) {
      iStack_c4 = 0x6bb655;
      FUN_00878dfb();
    }
  }
  iVar1 = DAT_00978368;
  puStack_c0 = &DAT_00980690;
  *(int *)(unaff_EBP + -0x20) = DAT_00978368;
  iStack_c4 = 0x6bb667;
  FUN_00403191();
  puStack_c0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_c4 = 0x6bb674;
  FUN_00403191();
  puStack_c0 = (undefined4 *)(unaff_EBP + -0x48);
  iStack_c4 = unaff_EBP + -0x30;
  iStack_cc = unaff_EBP + -0x1c;
  iStack_c8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_d0 = (undefined1 *)0x6bb68b;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_c8 = 0x6bb698;
  iStack_c8 = FUN_00449749();
  iStack_cc = unaff_EBP + -0x10;
  puStack_d0 = (undefined1 *)0x6bb6a4;
  FUN_004dee9b();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_cc = 0x6bb6af;
  puStack_d0 = (undefined1 *)FUN_00449713();
  *(int **)(unaff_EBP + -0x38) = &iStack_cc;
  FUN_00448a17();
  puStack_d0 = (undefined1 *)0x16;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_c0 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_c4 = 0x6bb6e8;
    FUN_00434e38();
  }
  puStack_c0 = (undefined4 *)0x6bb6f1;
  FUN_004497b5();
  puStack_c0 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_c4 = 0x6bb6fe;
  puStack_c0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_c0 < 0) {
    iStack_c4 = 0x6bb709;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_c0 = (undefined4 *)(unaff_EBP + -0x48);
  iStack_c4 = 0x6bb716;
  puStack_c0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_c0 < 0) {
    iStack_c4 = 0x6bb721;
    FUN_00878dfb();
  }
  if (*(short *)(iVar1 + 0x2cc7) == 0) {
    puStack_c0 = &DAT_00980690;
    iStack_c4 = 0x6bb7cb;
    FUN_00403191();
    puStack_c0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_c4 = 0x6bb7d8;
    FUN_00403191();
    puStack_c0 = (undefined4 *)0x0;
    iStack_c4 = 0;
    iStack_c8 = unaff_EBP + -0x48;
    iStack_cc = unaff_EBP + -0x30;
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_d0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_c8 = 0x6bb824;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar1 != 0) {
      puStack_c0 = (undefined4 *)(unaff_EBP + -0x10);
      iStack_c4 = 0x6bb83a;
      puStack_c0 = (undefined4 *)FUN_00404b30();
      if (((int)puStack_c0 < 0) && (puStack_c0 != (undefined4 *)0x80004002)) {
        iStack_c4 = 0x6bb84b;
        FUN_00878dfb();
      }
    }
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_c4 = 0x6bb858;
    puStack_c0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_c0 < 0) {
      iStack_c4 = 0x6bb863;
      FUN_00878dfb();
    }
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_c4 = 0x6bb870;
    puStack_c0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_c0 < 0) {
      iStack_c4 = 0x6bb87b;
      FUN_00878dfb();
    }
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_c4 = 0x6bb888;
    iVar1 = FUN_00402bc3();
    puVar7 = puStack_c0;
    if (iVar1 < 0) {
      iStack_c4 = 0x6bb893;
      puStack_c0 = (undefined4 *)iVar1;
      FUN_00878dfb();
      puVar7 = (undefined4 *)extraout_ECX_00;
    }
    puStack_c0 = (undefined4 *)0x0;
    iStack_c4 = 0;
    puStack_d0 = (undefined1 *)&iStack_c8;
    *(int **)(unaff_EBP + -0x38) = &iStack_c8;
    iStack_cc = 0x82d;
    iStack_c8 = (int)puVar7;
    FUN_00679e4e();
    iStack_cc = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_d0 = (undefined1 *)0x6bb8bb;
    FUN_0040263d();
    puStack_d0 = (undefined1 *)0x6bb8c2;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_c8 = 0x6bb8cd;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      puStack_c0 = (undefined4 *)(unaff_EBP + -0x1c);
      iStack_c4 = 0x6bb8e3;
      puStack_c0 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_c0 < 0) && (puStack_c0 != (undefined4 *)0x80004002)) {
        iStack_c4 = 0x6bb8f4;
        FUN_00878dfb();
      }
    }
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_c4 = 0x6bb904;
    puStack_c0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_c0 < 0) {
      iStack_c4 = 0x6bb90f;
      FUN_00878dfb();
    }
    puStack_c0 = &DAT_00980690;
    iStack_c4 = 0x6bb918;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (piVar4 == (int *)0x0) {
      puStack_c0 = (undefined4 *)0x80004003;
      iStack_c4 = 0x6bb92d;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    puStack_d0 = *(undefined1 **)(unaff_EBP + -0x14);
    iStack_cc = *(int *)(unaff_EBP + -0x30);
    iStack_c8 = *(int *)(unaff_EBP + -0x2c);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + -0x10) = piVar4;
    puStack_c0 = *(undefined4 **)(unaff_EBP + -0x24);
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      iStack_e4 = *(int *)(unaff_EBP + -0x10);
      iStack_ec = 0x6bb961;
      iStack_e8 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_e4 = 0x6bb96e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e4 = 0x6bb979;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004027eb();
  }
  else {
    puStack_c0 = (undefined4 *)0x0;
    iStack_c4 = 0;
    iStack_c8 = 0;
    iStack_cc = 0;
    puStack_d0 = (undefined1 *)(unaff_EBP + -0x1c);
    FUN_00856c17();
    puStack_c0 = (undefined4 *)0x3;
    iStack_c4 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_c8 = 0x6bb750;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piVar4 == (int *)0x0) {
      puStack_c0 = (undefined4 *)0x80004003;
      iStack_c4 = 0x6bb765;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    puStack_d0 = *(undefined1 **)(unaff_EBP + -0x1c);
    iStack_cc = *(int *)(unaff_EBP + -0x30);
    iStack_c8 = *(int *)(unaff_EBP + -0x2c);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + -0x10) = piVar4;
    puStack_c0 = *(undefined4 **)(unaff_EBP + -0x24);
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      iStack_e4 = *(int *)(unaff_EBP + -0x10);
      iStack_ec = 0x6bb799;
      iStack_e8 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_e4 = 0x6bb7a6;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e4 = 0x6bb7b1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004125e6();
  }
  iVar1 = *(int *)(unaff_EBP + -0x34);
  if (*(int *)(iVar1 + 0x594) != 0) {
    iStack_e4 = unaff_EBP + 8;
    iStack_e8 = iVar1 + 0x590;
    iStack_ec = 0x6bb9ad;
    FUN_006bc123();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0x86;
  for (uVar2 = 0;
      (*(int *)(iVar1 + 0x58c) != 0 && (uVar2 < *(uint *)(*(int *)(iVar1 + 0x58c) + -4)));
      uVar2 = uVar2 + 1) {
    iStack_e4 = unaff_EBP + 8;
    iStack_e8 = *(int *)(iVar1 + 0x58c) + uVar2 * 8;
    iStack_ec = 0x6bb9dd;
    FUN_006bc123();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1f;
  }
  if ((*(int *)(iVar1 + 0x578) != 0) && (*(int *)(iVar1 + 0x584) != 0)) {
    iStack_e4 = unaff_EBP + -0x1c;
    iStack_e8 = 0x6bba09;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_e4 = 0x6bba18;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_e4 = 0x6bba2b;
    FUN_006bdb4d();
    iStack_e4 = 0x6bba35;
    iStack_e8 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_e4;
    iStack_ec = 0x6bba41;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_e8 = 0x6bba4d;
    FUN_0044974c();
    iStack_e8 = 0x6bba54;
    iVar3 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_e4 = 0x6bba63;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_e4 = 0x6bba6e;
      FUN_00878dfb();
    }
    iStack_e4 = 0x6bba85;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_e4 = 0x6bba92;
    FUN_00403191();
    iStack_e4 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_e8 = 0x6bbaa6;
    iStack_e8 = FUN_00449749();
    iStack_ec = 0x6bbab2;
    FUN_006bdb4d();
    iStack_ec = 0x6bbabc;
    uVar6 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_ec;
    FUN_00448a17(uVar6);
    uVar6 = 0x24;
    iVar3 = (300 - iVar3) / 2 + 0x199;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_004115d9(iVar3,0x24);
    FUN_00448e3a(iVar3,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_e4 = 0x6bbaf1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_e4 = 0x6bbafc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_e4 = 0x6bbb09;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_e4 = 0x6bbb16;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    iStack_e4 = *(int *)(*(int *)(iVar1 + 0x584) + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_e8 = 0x6bbb32;
    iVar3 = FUN_0085685c();
    if (iVar3 != 0) {
      iStack_e4 = 0x6bbb43;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_e4 = 0x6bbb50;
      FUN_00403191();
      iStack_e4 = unaff_EBP + -0x30;
      iStack_ec = unaff_EBP + -0x10;
      iStack_e8 = 2;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_e8 = 0x6bbb74;
      iStack_e8 = FUN_00449749();
      iStack_ec = 0x6bbb7d;
      uVar6 = FUN_00449713();
      *(int **)(unaff_EBP + -0x38) = &iStack_ec;
      FUN_00448a17(uVar6);
      uVar9 = 0x3f;
      uVar6 = 0x1bd;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      FUN_004115d9(0x1bd,0x3f);
      FUN_00448e3a(uVar6,uVar9);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        iStack_e4 = 0x6bbbb4;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_e4 = 0x6bbbc1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_e4 = 0x6bbbcc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_e4 = 0x6bbbd9;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_e4 = 0x6bbbe4;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    iStack_e4 = *(int *)(iVar1 + 0x584) + 0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_e8 = 0x6bbc00;
    FUN_006bda6e();
    iStack_e4 = 0x6bbc09;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_e4 = 0x6bbc16;
    FUN_00403191();
    iStack_e4 = unaff_EBP + -0x30;
    iStack_ec = unaff_EBP + -0x10;
    iStack_e8 = 2;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_e8 = 0x6bbc3a;
    iStack_e8 = FUN_00449749();
    iStack_ec = 0x6bbc43;
    uVar6 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_ec;
    iStack_ec = extraout_ECX_01;
    FUN_00448a17(uVar6);
    uVar9 = 0x3f;
    uVar6 = 0x240;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_004115d9(0x240,0x3f);
    FUN_00448e3a(uVar6,uVar9);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_e4 = 0x6bbc7a;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_e4 = 0x6bbc87;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_e4 = 0x6bbc92;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_e4 = 0x6bbc9f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_e4 = 0x6bbcaa;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(iVar1 + 0x584);
    iVar5 = *(int *)(*(int *)(iVar1 + 0x630) + 0x38);
    if (*(int *)(iVar3 + 0x28) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar3 + 0x28) + -4);
      if (4 < iVar8) {
        iVar8 = 4;
      }
    }
    if ((((*(int *)(iVar1 + 0x578) != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x28) != 0)) &&
       ((*(int *)(*(int *)(iVar3 + 0x28) + -4) != 0 && (0 < iVar8)))) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0x14f;
      *(int *)(unaff_EBP + -0x60) = iVar5 << 3;
      *(int *)(unaff_EBP + -0x10) = iVar8;
      while( true ) {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x584) + 0x28) + *(int *)(unaff_EBP + -0x60) + 4)
        ;
        *(int *)(unaff_EBP + -100) = iVar1;
        iVar3 = 0;
        if (iVar1 != 0) {
          iStack_e4 = 0x6bbd3b;
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar3 = *(int *)(unaff_EBP + -100);
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_e4 = *(int *)(iVar3 + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        iStack_e8 = 0x6bbd55;
        iVar1 = FUN_0085685c();
        if (iVar1 != 0) {
          iStack_e4 = unaff_EBP + -0x4c;
          iStack_e8 = 0x6bbd68;
          FUN_007d4a9a();
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iStack_e4 = 0x6bbd77;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xac));
          iStack_e4 = unaff_EBP + -0xac;
          iStack_e8 = 0x6bbd84;
          iVar1 = FUN_00402e32();
          if (iVar1 < 0) {
            iStack_e4 = 0x6bbd90;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          iStack_e4 = 0x6bbda3;
          iStack_e8 = FUN_00449713();
          *(int **)(unaff_EBP + -0x54) = &iStack_e4;
          iStack_ec = 0x6bbdaf;
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          iStack_e8 = 0x6bbdbb;
          FUN_0044974c();
          iStack_e8 = 0x6bbdc2;
          iVar1 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iStack_e4 = 0x6bbdd4;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_e4 = 0x6bbddf;
            FUN_00878dfb();
          }
          iStack_e4 = 0x6bbdf4;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
          iStack_e4 = unaff_EBP + -0x9c;
          iStack_e8 = 0x6bbe01;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_e4 = 0x6bbe0d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          iStack_e4 = 0x6bbe1a;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xbc));
          iStack_e4 = unaff_EBP + -0xbc;
          iStack_e8 = 0x6bbe27;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_e4 = 0x6bbe33;
            FUN_00878dfb();
          }
          iStack_e4 = unaff_EBP + -0xbc;
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          iStack_e8 = 0x6bbe4d;
          iStack_e8 = FUN_00449749();
          iStack_ec = 0x6bbe56;
          uVar6 = FUN_00449713();
          *(int **)(unaff_EBP + -0x54) = &iStack_ec;
          FUN_00448a17(uVar6);
          uVar6 = *(undefined4 *)(unaff_EBP + -0x18);
          iVar1 = (0x4c - iVar1) / 2 + 399;
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          FUN_004115d9(iVar1,uVar6);
          FUN_00448e3a(iVar1,uVar6);
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          iStack_e4 = 0x6bbe8f;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            iStack_e4 = 0x6bbe9a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iStack_e4 = 0x6bbeaa;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            iStack_e4 = 0x6bbeb5;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
            iStack_e4 = 0x6bbec6;
            (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
          }
        }
        iStack_e4 = 0x6bbecc;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
        iStack_e4 = unaff_EBP + -0x7c;
        iStack_e8 = 0x6bbed6;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bbee4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        iStack_e4 = 0x6bbef1;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
        iStack_e4 = unaff_EBP + -0x8c;
        iStack_e8 = 0x6bbefe;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bbf0a;
          FUN_00878dfb();
        }
        iStack_e4 = unaff_EBP + -0x8c;
        iStack_ec = unaff_EBP + -0x6c;
        iStack_e8 = 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        iStack_e8 = 0x6bbf31;
        iStack_e8 = FUN_00449749();
        iStack_ec = 0x6bbf3a;
        FUN_006bdc1b();
        iStack_ec = 0x6bbf44;
        uVar6 = FUN_00449713();
        *(int **)(unaff_EBP + -0x54) = &iStack_ec;
        FUN_00448a17(uVar6);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar9 = 0x1e0;
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        FUN_004115d9(0x1e0,uVar6);
        FUN_00448e3a(uVar9,uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        if (*(int **)(unaff_EBP + -0x6c) != (int *)0x0) {
          iStack_e4 = 0x6bbf7c;
          (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        iStack_e4 = 0x6bbf8c;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bbf97;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        iStack_e4 = 0x6bbfa4;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bbfaf;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x5c) = 0;
        iStack_e4 = *(int *)(unaff_EBP + -100) + 0x18;
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        iStack_e8 = 0x6bbfc9;
        FUN_006bdaae();
        iStack_e4 = 0x6bbfcf;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
        iStack_e4 = unaff_EBP + -0x30;
        iStack_e8 = 0x6bbfd9;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bbfe5;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        iStack_e4 = 0x6bbfef;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        iStack_e4 = unaff_EBP + -0x48;
        iStack_e8 = 0x6bbff9;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bc005;
          FUN_00878dfb();
        }
        iStack_e4 = unaff_EBP + -0x48;
        iStack_ec = unaff_EBP + -0x38;
        iStack_e8 = 2;
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_e8 = 0x6bc029;
        iStack_e8 = FUN_00449749();
        iStack_ec = 0x6bc032;
        uVar6 = FUN_00449713();
        *(int **)(unaff_EBP + -0x54) = &iStack_ec;
        iStack_ec = extraout_ECX_02;
        FUN_00448a17(uVar6);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar9 = 0x28e;
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        FUN_004115d9(0x28e,uVar6);
        FUN_00448e3a(uVar9,uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
          iStack_e4 = 0x6bc06a;
          (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        iStack_e4 = 0x6bc077;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bc082;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        iStack_e4 = 0x6bc08f;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_e4 = 0x6bc09a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        if (*(int *)(unaff_EBP + -100) != 0) {
          iStack_e4 = 0x6bc0c4;
          FUN_006bdd53();
          *(undefined4 *)(unaff_EBP + -100) = 0;
        }
        *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x60) + 8;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x1f;
        piVar4 = (int *)(unaff_EBP + -0x10);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) break;
        iVar1 = *(int *)(unaff_EBP + -0x34);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_e4 = 0x6bc101;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_e4 = 0x6bc112;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


