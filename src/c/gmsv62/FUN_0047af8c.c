/* FUN_0047af8c - 0x0047af8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047af8c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    if (iVar4 == 4) {
      *(undefined4 *)(unaff_EBP + -0x18) = 8;
      *(undefined4 *)(unaff_EBP + -0x1c) = 8;
      *(undefined4 *)(unaff_EBP + -0x20) = 1;
    }
    else if (iVar4 == 8) {
      *(undefined4 *)(unaff_EBP + -0x18) = 500;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0x32;
LAB_0047afe6:
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    else if (iVar4 == 9) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0xfa;
      *(undefined4 *)(unaff_EBP + -0x1c) = 100;
    }
    else if (iVar4 == 0xe) {
      *(undefined4 *)(unaff_EBP + -0x18) = 600;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0x23;
    }
    else if (iVar4 == 0xf) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0x2da;
      *(undefined4 *)(unaff_EBP + -0x1c) = 400;
    }
    else {
      if (iVar4 != 0x14) {
        if (iVar4 == 0x16) {
          *(undefined4 *)(unaff_EBP + -0x18) = 500;
          *(undefined4 *)(unaff_EBP + -0x1c) = 100;
        }
        else {
          iVar4 = (iVar4 * 3 + 3) * 8;
          *(int *)(unaff_EBP + -0x18) = iVar4;
          *(int *)(unaff_EBP + -0x1c) = iVar4;
        }
        goto LAB_0047afe6;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0x2d0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0x50;
    }
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x97a);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(unaff_EBP + -0x14,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    uVar3 = FUN_0047c824(0,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x18),
                         0xfffffffb,0x310);
    *(undefined4 *)(extraout_ECX + 0xa4 + *(int *)(unaff_EBP + -0x10) * 4) = uVar3;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x97b);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x14,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    uVar3 = FUN_0047c824(0,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x1c),
                         0xfffffffb,0x248);
    *(undefined4 *)(extraout_ECX + 0x100 + *(int *)(unaff_EBP + -0x10) * 4) = uVar3;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x97c);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x14,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    uVar3 = FUN_0047c824(0,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x20),
                         0x80000000,0x7fffffff);
    iVar4 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(extraout_ECX + 0x15c + iVar4 * 4) = uVar3;
    if (iVar4 == 6) {
      FUN_00434e21(unaff_EBP + -0x14,s_uiBin_d_009647a4,6);
      FUN_0047c89d(0,*(undefined4 *)(unaff_EBP + -0x14),extraout_ECX + 0x1b8);
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    if (0x16 < *(int *)(unaff_EBP + -0x10)) {
      if (*(int *)(extraout_ECX + 0xa0) != 0) {
        (*DAT_0097b6ac)(*(int *)(extraout_ECX + 0xa0));
        *(undefined4 *)(extraout_ECX + 0xa0) = 0;
      }
      uVar3 = FUN_00679d22(unaff_EBP + -0x24,0x9c5);
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x97d);
      uVar3 = *puVar2;
      uVar1 = **(undefined4 **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + -0x14,uVar3,uVar1,0,*(undefined4 *)(unaff_EBP + 8),
                   *(undefined4 *)(unaff_EBP + 0xc));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      (*DAT_0097b6a8)(0x80000002,*(undefined4 *)(unaff_EBP + -0x14),0,0,0,0xf,0,extraout_ECX + 0xa0,
                      unaff_EBP + -0x30);
      if (*(int *)(extraout_ECX + 0xa0) != 0) {
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x982);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x20) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x983);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x24) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x984);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x28) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x985);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x2c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x986);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x30) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x989);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x34) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x987);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x38) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x988);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x3c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        uVar3 = FUN_0047c69a(2,s_goAllianceINVITE_00964790,1);
        *(undefined4 *)(extraout_ECX + 0x40) = uVar3;
        uVar3 = FUN_0047c69a(2,s_goAllianceTALK_00964780,1);
        *(undefined4 *)(extraout_ECX + 0x44) = uVar3;
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x98a);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uVar3 = FUN_0047c69a(2,uVar3,0);
        *(undefined4 *)(extraout_ECX + 0x48) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x98b);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        uVar3 = FUN_0047c824(2,uVar3,1,1,3);
        *(undefined4 *)(extraout_ECX + 0x4c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0xb02);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        uVar3 = FUN_0047c824(2,uVar3,0x46,0x1a,0x1fb);
        *(undefined4 *)(extraout_ECX + 0x54) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0xafd);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        uVar3 = FUN_0047c69a(2,uVar3,1);
        *(undefined4 *)(extraout_ECX + 0x50) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0xd0b);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        uVar3 = FUN_0047c824(2,uVar3,0,0x80000000,0x7fffffff);
        *(undefined4 *)(extraout_ECX + 0x18) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0xd0d);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        uVar3 = FUN_0047c824(2,uVar3,0,0x80000000,0x7fffffff);
        *(undefined4 *)(extraout_ECX + 0x1c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        if (*(int *)(extraout_ECX + 0x48) != 0) {
          _memset((void *)(extraout_ECX + 0x1bc),0,0x1bd);
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          *(int *)(unaff_EBP + -0x20) = extraout_ECX + 0x1bc;
          do {
            puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x2c,0x97f);
            uVar3 = *puVar2;
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            FUN_00434e21(unaff_EBP + -0x14,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00414ebb();
            iVar4 = FUN_0047c824(2,*(undefined4 *)(unaff_EBP + -0x14),0,0x80000000,0x7fffffff);
            if ((0 < iVar4) && (iVar4 < 9)) {
              **(undefined1 **)(unaff_EBP + -0x20) = (char)iVar4;
              puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x980);
              uVar3 = *puVar2;
              *(undefined1 *)(unaff_EBP + -4) = 0x15;
              FUN_00434e21(unaff_EBP + -0x14,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
              *(undefined1 *)(unaff_EBP + -4) = 0;
              FUN_00414ebb();
              uVar3 = FUN_0047c824(2,*(undefined4 *)(unaff_EBP + -0x14),0,0x80000000,0x7fffffff);
              *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 1) = uVar3;
            }
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
            *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 5;
          } while (*(int *)(unaff_EBP + -0x10) < 0x59);
        }
        FUN_0047bbe5();
        FUN_0047bf03();
        FUN_0047c13d();
        FUN_0047af30(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0xafe);
        uVar3 = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uVar3 = FUN_0047c824(2,uVar3,0,0x80000000,0x7fffffff);
        *(undefined4 *)(extraout_ECX + 0x37c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        if (*(int *)(extraout_ECX + 0x37c) == 0) {
          *(undefined4 *)(extraout_ECX + 0x37c) = 0x3d;
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar4 = *(int *)(unaff_EBP + -0x10);
  } while( true );
}


