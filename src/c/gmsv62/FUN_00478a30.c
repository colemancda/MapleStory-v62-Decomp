/* FUN_00478a30 - 0x00478a30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00478a30(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  
  FUN_00879bb8();
  iStack_6c = unaff_EBP + -0x10;
  uStack_70 = 0x478a4b;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_6c = 0x80004003;
    uStack_70 = 0x478a60;
    FUN_00878dfb();
  }
  iStack_6c = 0x478a68;
  uVar1 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_6c = 0x80004003;
    uStack_70 = 0x478a76;
    FUN_00878dfb();
  }
  iStack_6c = 0x478a7e;
  uVar1 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  piStack_80 = *(int **)(unaff_EBP + -0x10);
  if (piStack_80 == (int *)0x0) {
    iStack_6c = 0x80004003;
    uStack_70 = 0x478a8e;
    FUN_00878dfb();
    piStack_80 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piStack_80;
  iStack_6c = 0xffffff;
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x14) = piStack_80;
  uStack_74 = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_78 = 0;
  uStack_7c = 0;
  puStack_84 = (undefined4 *)0x478aaa;
  iVar2 = (**(code **)(iVar2 + 0x8c))();
  if (iVar2 < 0) {
    puStack_84 = (undefined4 *)&DAT_00963cc8;
    uStack_88 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_90 = 0x478abc;
    iStack_8c = iVar2;
    FUN_00878e09();
  }
  if (*(int *)(extraout_ECX + 100) == 0) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_84 = (undefined4 *)0x80004003;
      uStack_88 = 0x4791f7;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_84 = (undefined4 *)0x80004003;
        uStack_88 = 0x479202;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_84 = (undefined4 *)0x80004003;
      uStack_88 = 0x479212;
      FUN_00878dfb();
    }
    piVar8 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0x68);
    puStack_84 = (undefined4 *)0x479222;
    uVar1 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
    puStack_84 = (undefined4 *)0x47922d;
    iStack_8c = FUN_0040e48b();
    puStack_84 = *(undefined4 **)(unaff_EBP + -0x24);
    uStack_88 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_90 = 0;
    uStack_94 = 0;
    iVar2 = (**(code **)(*piVar8 + 0x8c))(piVar8);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar8,&DAT_00963cc8);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar8 = *(int **)(extraout_ECX + 0xa4);
    if (*piVar8 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)(*(int *)(extraout_ECX + 0xa4) + 0x28);
    iVar2 = *piVar7;
    *(int *)(unaff_EBP + -0x24) = *piVar8;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar8 = (int *)(*(int *)(extraout_ECX + 0xa4) + 0x2c);
    iVar2 = *piVar8;
    *(int *)(unaff_EBP + -0x28) = *piVar7;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    *(int *)(unaff_EBP + -0x20) = *piVar8;
    iVar2 = FUN_0040e48b();
    iVar3 = FUN_0040e48b();
    iVar4 = FUN_0040e48b();
    iVar5 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x1c) = (uint)(((iVar2 * -2 + iVar3 * -4) - iVar4) + -8 + iVar5) >> 1;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar8 = *(int **)(extraout_ECX + 0xa4);
    if (*piVar8 == 0) {
      FUN_00878dfb(0x80004003);
    }
    *(int *)(unaff_EBP + -0x28) = *piVar8;
    iVar2 = FUN_0040e53d();
    iVar3 = FUN_0040e53d();
    *(uint *)(unaff_EBP + -0x14) = (uint)(iVar2 - iVar3) >> 1;
    FUN_004031b7(0xff,3);
    iVar2 = *(int *)(extraout_ECX + 0x90);
    iVar3 = *(int *)(extraout_ECX + 0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (iVar2 == 0) {
      puVar6 = (undefined4 *)(iVar3 + 0x2c);
    }
    else {
      puVar6 = (undefined4 *)(iVar3 + 0x30);
    }
    *(undefined4 *)(unaff_EBP + -0x28) = *puVar6;
    piVar8 = *(int **)(unaff_EBP + -0x10);
    if (piVar8 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar8 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar8;
    *(int **)(unaff_EBP + -0x24) = piVar8;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar8,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004031b7(0xff,3);
    iVar2 = *(int *)(extraout_ECX + 0x94);
    iVar3 = *(int *)(extraout_ECX + 0xa4);
    iVar4 = *(int *)(iVar3 + 0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar3 + (iVar2 / 10) * 4);
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004115d9();
    uVar1 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
    iVar4 = FUN_0040e48b();
    iVar4 = iVar4 + *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x28);
    iVar2 = unaff_EBP + -0x58;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar3 = iVar4;
    FUN_004115d9(iVar4,uVar9,uVar1,iVar2);
    FUN_00470739(iVar3,uVar9,uVar1,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004295f1(0xff,3);
    iVar2 = *(int *)(extraout_ECX + 0x94);
    iVar3 = *(int *)(extraout_ECX + 0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar3 + (iVar2 % 10) * 4);
    FUN_004115d9();
    iVar3 = FUN_0040e48b();
    iVar3 = iVar4 + 2 + iVar3;
    iVar2 = unaff_EBP + -0x58;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x28);
    uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar4 = iVar3;
    FUN_004115d9(iVar3,uVar9,uVar1,iVar2);
    FUN_00470739(iVar4,uVar9,uVar1,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004295f1((-(uint)(*(int *)(extraout_ECX + 0x9c) % 2 != 0) & 0xffffff41) + 0xff,3);
    uVar1 = *(undefined4 *)(*(int *)(extraout_ECX + 0xa4) + 0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
    FUN_004115d9();
    iVar4 = FUN_0040e48b();
    iVar2 = unaff_EBP + -0x58;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x28);
    iVar4 = iVar3 + 2 + iVar4;
    uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
    *(int *)(unaff_EBP + -0x24) = iVar4;
    FUN_004115d9(iVar4,uVar9,uVar1,iVar2);
    FUN_00470739(iVar4,uVar9,uVar1,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004295f1(0xff,3);
    iVar2 = *(int *)(extraout_ECX + 0x98);
    iVar3 = *(int *)(extraout_ECX + 0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar3 + (iVar2 / 10) * 4);
    FUN_004115d9();
    iVar3 = FUN_0040e48b();
    iVar3 = *(int *)(unaff_EBP + -0x24) + 2 + iVar3;
    iVar2 = unaff_EBP + -0x58;
    uVar1 = *(undefined4 *)(unaff_EBP + -0x28);
    uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar4 = iVar3;
    FUN_004115d9(iVar3,uVar9,uVar1,iVar2);
    FUN_00470739(iVar4,uVar9,uVar1,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004295f1(0xff,3);
    iVar2 = *(int *)(extraout_ECX + 0x98);
    iVar4 = *(int *)(extraout_ECX + 0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    uVar1 = *(undefined4 *)(iVar4 + (iVar2 % 10) * 4);
    FUN_004115d9();
    iVar4 = FUN_0040e48b();
    iVar2 = unaff_EBP + -0x58;
    uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar4 = iVar3 + 2 + iVar4;
    FUN_004115d9(iVar4,uVar9,uVar1,iVar2);
    FUN_00470739(iVar4,uVar9,uVar1,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  else {
    iVar2 = *(int *)(extraout_ECX + 0x78);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if ((iVar2 < 1) || (*(int *)(unaff_EBP + -0x14) = iVar2, iVar2 < 0xe10)) {
      puStack_84 = &DAT_00980690;
      uStack_88 = 0x478aeb;
      FUN_00403191();
      puStack_84 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_88 = 0x478af8;
      FUN_00403191();
      puStack_84 = (undefined4 *)0x0;
      uStack_88 = 0;
      iStack_8c = unaff_EBP + -0x48;
      iStack_90 = unaff_EBP + -0x38;
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_94;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00679e4e(&uStack_94,0xaeb);
      iVar2 = unaff_EBP + -0x68;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_8c = 0x478b42;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        puStack_84 = (undefined4 *)(unaff_EBP + -0x20);
        uStack_88 = 0x478b58;
        puStack_84 = (undefined4 *)FUN_0041a581();
        if (((int)puStack_84 < 0) && (puStack_84 != (undefined4 *)0x80004002)) {
          uStack_88 = 0x478b69;
          FUN_00878dfb();
        }
      }
      puStack_84 = (undefined4 *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_88 = 0x478b76;
      puStack_84 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_84 < 0) {
        uStack_88 = 0x478b81;
        FUN_00878dfb();
      }
      puStack_84 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_88 = 0x478b8e;
      puStack_84 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_84 < 0) {
        uStack_88 = 0x478b99;
        FUN_00878dfb();
      }
      puStack_84 = (undefined4 *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_88 = 0x478ba6;
      puStack_84 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_84 < 0) {
        uStack_88 = 0x478bb1;
        FUN_00878dfb();
      }
      puStack_84 = (undefined4 *)0x3;
      uStack_88 = 0xff;
      iStack_8c = 0x478bc0;
      FUN_004031b7();
      piVar8 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar8 == (int *)0x0) {
        puStack_84 = (undefined4 *)0x80004003;
        uStack_88 = 0x478bd5;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_90 = *(undefined4 *)(unaff_EBP + -0x58);
      iStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_88 = *(undefined4 *)(unaff_EBP + -0x50);
      *(int **)(unaff_EBP + -0x1c) = piVar8;
      puStack_84 = *(undefined4 **)(unaff_EBP + -0x4c);
      iVar2 = (**(code **)(iVar2 + 0x80))(piVar8,0,0);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) / 0x3c;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) % 0x3c;
      iVar2 = (*(int *)(unaff_EBP + -0x1c) / 10) % 10;
      if (iVar2 != 0) {
        FUN_004031b7(0xff,3);
        *(undefined4 *)(unaff_EBP + -0x24) =
             *(undefined4 *)(*(int *)(extraout_ECX + 0xa4) + iVar2 * 4);
        piVar8 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (piVar8 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar8 = *(int **)(unaff_EBP + -0x10);
        }
        iVar2 = *piVar8;
        *(int **)(unaff_EBP + -0x28) = piVar8;
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar8,0x56,0xc,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                           *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
      }
      FUN_004031b7(0xff,3);
      iVar2 = *(int *)(extraout_ECX + 0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      *(undefined4 *)(unaff_EBP + -0x28) =
           *(undefined4 *)(iVar2 + (*(int *)(unaff_EBP + -0x1c) % 10) * 4);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      *(int **)(unaff_EBP + -0x24) = piVar8;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar8,0x70,0xc,*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      iVar2 = *(int *)(extraout_ECX + 0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      *(undefined4 *)(unaff_EBP + -0x28) =
           *(undefined4 *)(iVar2 + (*(int *)(unaff_EBP + -0x14) / 10) * 4);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      *(int **)(unaff_EBP + -0x24) = piVar8;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar8,0xb3,0xc,*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      iVar2 = *(int *)(extraout_ECX + 0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uVar1 = *(undefined4 *)(iVar2 + (*(int *)(unaff_EBP + -0x14) % 10) * 4);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      *(int **)(unaff_EBP + -0x28) = piVar8;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar8,0xcd,0xc,uVar1,*(undefined4 *)(unaff_EBP + -0x58),
                         *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
    else {
      puStack_84 = &DAT_00980690;
      uStack_88 = 0x478e6f;
      FUN_00403191();
      puStack_84 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_88 = 0x478e7c;
      FUN_00403191();
      puStack_84 = (undefined4 *)0x0;
      uStack_88 = 0;
      iStack_8c = unaff_EBP + -0x48;
      iStack_90 = unaff_EBP + -0x58;
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_94;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00679e4e(&uStack_94,0xe82);
      iVar2 = unaff_EBP + -0x68;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_8c = 0x478ec6;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        puStack_84 = (undefined4 *)(unaff_EBP + -0x28);
        uStack_88 = 0x478edc;
        puStack_84 = (undefined4 *)FUN_0041a581();
        if (((int)puStack_84 < 0) && (puStack_84 != (undefined4 *)0x80004002)) {
          uStack_88 = 0x478eed;
          FUN_00878dfb();
        }
      }
      puStack_84 = (undefined4 *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uStack_88 = 0x478efa;
      puStack_84 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_84 < 0) {
        uStack_88 = 0x478f05;
        FUN_00878dfb();
      }
      puStack_84 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      uStack_88 = 0x478f12;
      puStack_84 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_84 < 0) {
        uStack_88 = 0x478f1d;
        FUN_00878dfb();
      }
      puStack_84 = (undefined4 *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      uStack_88 = 0x478f2a;
      puStack_84 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_84 < 0) {
        uStack_88 = 0x478f35;
        FUN_00878dfb();
      }
      puStack_84 = (undefined4 *)0x3;
      uStack_88 = 0xff;
      iStack_8c = 0x478f44;
      FUN_004031b7();
      piVar8 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (piVar8 == (int *)0x0) {
        puStack_84 = (undefined4 *)0x80004003;
        uStack_88 = 0x478f59;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_90 = *(undefined4 *)(unaff_EBP + -0x38);
      iStack_8c = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_88 = *(undefined4 *)(unaff_EBP + -0x30);
      *(int **)(unaff_EBP + -0x24) = piVar8;
      puStack_84 = *(undefined4 **)(unaff_EBP + -0x2c);
      iVar2 = (**(code **)(iVar2 + 0x80))(piVar8,0,0);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) / 0xe10;
      *(int *)(unaff_EBP + -0x14) = (*(int *)(unaff_EBP + -0x14) % 0xe10) / 0x3c;
      iVar2 = (*(int *)(unaff_EBP + -0x1c) / 10) % 10;
      if (iVar2 != 0) {
        FUN_004031b7(0xff,3);
        *(undefined4 *)(unaff_EBP + -0x24) =
             *(undefined4 *)(*(int *)(extraout_ECX + 0xa4) + iVar2 * 4);
        piVar8 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (piVar8 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar8 = *(int **)(unaff_EBP + -0x10);
        }
        iVar2 = *piVar8;
        *(int **)(unaff_EBP + -0x20) = piVar8;
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar8,0x56,0xc,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
      }
      FUN_004031b7(0xff,3);
      iVar2 = *(int *)(extraout_ECX + 0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      *(undefined4 *)(unaff_EBP + -0x24) =
           *(undefined4 *)(iVar2 + (*(int *)(unaff_EBP + -0x1c) % 10) * 4);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      *(int **)(unaff_EBP + -0x20) = piVar8;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar8,0x70,0xc,*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      iVar2 = *(int *)(extraout_ECX + 0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      *(undefined4 *)(unaff_EBP + -0x24) =
           *(undefined4 *)(iVar2 + (*(int *)(unaff_EBP + -0x14) / 10) * 4);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      *(int **)(unaff_EBP + -0x20) = piVar8;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar8,0xb3,0xc,*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      iVar2 = *(int *)(extraout_ECX + 0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      uVar1 = *(undefined4 *)(iVar2 + (*(int *)(unaff_EBP + -0x14) % 10) * 4);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar8;
      *(int **)(unaff_EBP + -0x24) = piVar8;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar8,0xcd,0xc,uVar1,*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
    FUN_004125e6();
  }
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


