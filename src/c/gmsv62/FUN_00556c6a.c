/* FUN_00556c6a - 0x00556c6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00556c6a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  
  FUN_00879bb8();
  puStack_64 = *(undefined4 **)(unaff_EBP + 0xc);
  iStack_68 = unaff_EBP + 0xc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_6c = 0x556c8b;
  FUN_00556b9d();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) goto LAB_00557010;
  puStack_64 = &DAT_00980690;
  iStack_68 = 0x556ca6;
  FUN_00403191();
  puStack_64 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x556cb3;
  FUN_00403191();
  puStack_64 = (undefined4 *)0x0;
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x40;
  iStack_70 = unaff_EBP + -0x30;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00679e4e(&uStack_74,0x91a);
  iVar2 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_6c = 0x556cfd;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    puStack_64 = (undefined4 *)(unaff_EBP + -0x14);
    iStack_68 = 0x556d13;
    puStack_64 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_64 < 0) && (puStack_64 != (undefined4 *)0x80004002)) {
      iStack_68 = 0x556d24;
      FUN_00878dfb();
    }
  }
  puStack_64 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x556d31;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x556d3c;
    FUN_00878dfb();
  }
  puStack_64 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_68 = 0x556d49;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x556d54;
    FUN_00878dfb();
  }
  puStack_64 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_68 = 0x556d61;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x556d6c;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    puStack_64 = (undefined4 *)0x3;
    iStack_68 = 0xff;
    iStack_6c = 0x556f3e;
    FUN_004295f1();
    puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
    iStack_68 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_6c = 0x556f51;
    FUN_004115d9();
    iStack_6c = 0x556f58;
    iStack_6c = FUN_0040eed0();
    iVar2 = *(int *)(unaff_EBP + 0x14);
    iStack_6c = iVar2 - iStack_6c;
    iStack_70 = 0x556f68;
    FUN_004115d9();
    iStack_70 = 0x556f6f;
    iStack_70 = FUN_0040eea9();
    iVar3 = *(int *)(unaff_EBP + 0x10);
    iStack_70 = iVar3 - iStack_70;
    uStack_74 = 0x556f7f;
    FUN_004115d9();
    uStack_74 = 0x556f86;
    FUN_00470739();
    puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_68 = 0x556f93;
    puStack_64 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_64 < 0) {
      iStack_68 = 0x556f9e;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x1c) == 0) {
      puStack_64 = (undefined4 *)0x3;
      iStack_68 = 0xff;
      iStack_6c = 0x556faf;
      FUN_004295f1();
      puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
      iStack_68 = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_6c = 0x556fc2;
      FUN_004115d9();
      iStack_6c = 0x556fc9;
      iStack_6c = FUN_0040eed0();
      iStack_6c = iVar2 - iStack_6c;
      iStack_70 = 0x556fd4;
      FUN_004115d9();
      iStack_70 = 0x556fdb;
      iVar2 = FUN_0040eea9();
      iStack_70 = (iVar3 - iVar2) + 0x20;
      uStack_74 = 0x556fe9;
      FUN_004115d9();
      uStack_74 = 0x556ff0;
      FUN_00470739();
      puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_68 = 0x556ffd;
      puStack_64 = (undefined4 *)FUN_00402bc3();
      goto LAB_00557000;
    }
  }
  else {
    puStack_64 = &DAT_00980690;
    iStack_68 = 0x556d7e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      puStack_64 = (undefined4 *)0x80004003;
      iStack_68 = 0x556d92;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        puStack_64 = (undefined4 *)0x80004003;
        iStack_68 = 0x556d9d;
        FUN_00878dfb();
      }
    }
    iVar2 = *(int *)(unaff_EBP + 0xc);
    *(int *)(unaff_EBP + -0x18) = iVar2;
    *(int *)(unaff_EBP + -0x20) = iVar2;
    if (iVar2 == 0) {
      puStack_64 = (undefined4 *)0x80004003;
      iStack_68 = 0x556db0;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 0xc);
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      puStack_64 = (undefined4 *)0x80004003;
      iStack_68 = 0x556dc0;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      puStack_64 = (undefined4 *)0x80004003;
      iStack_68 = 0x556dce;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + 8);
    *(int **)(unaff_EBP + 0x18) = piVar1;
    puStack_64 = (undefined4 *)0x556ddc;
    iVar2 = FUN_0040e53d();
    puStack_64 = (undefined4 *)0x556de8;
    iVar3 = FUN_0040e48b();
    *(int *)(unaff_EBP + -0x18) = iVar3 << 1;
    puStack_64 = (undefined4 *)0x556df5;
    iVar3 = FUN_0040eed0();
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 0x14) + iVar3 * -2;
    puStack_64 = (undefined4 *)0x556e08;
    iVar3 = FUN_0040eea9();
    iStack_70 = *(int *)(unaff_EBP + -0x50);
    iStack_6c = *(int *)(unaff_EBP + -0x4c);
    iStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
    puStack_64 = *(undefined4 **)(unaff_EBP + -0x44);
    uStack_74 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x84))
                      (*(undefined4 *)(unaff_EBP + 0x18),*(int *)(unaff_EBP + 0x10) + iVar3 * -2,
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x20),0xff,
                       *(undefined4 *)(unaff_EBP + -0x18),iVar2 << 1,0,0,0);
    if (iVar2 < 0) {
      puStack_64 = (undefined4 *)&DAT_00963cc8;
      iStack_68 = *(undefined4 *)(unaff_EBP + 0x18);
      iStack_70 = 0x556e51;
      iStack_6c = iVar2;
      FUN_00878e09();
    }
    puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_68 = 0x556e5e;
    puStack_64 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_64 < 0) {
      iStack_68 = 0x556e69;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x1c) == 0) {
      puStack_64 = &DAT_00980690;
      iStack_68 = 0x556e7f;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_64 = (undefined4 *)0x80004003;
        iStack_68 = 0x556e93;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_64 = (undefined4 *)0x80004003;
          iStack_68 = 0x556e9e;
          FUN_00878dfb();
        }
      }
      iVar2 = *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + 0x1c) = iVar2;
      *(int *)(unaff_EBP + 0x18) = iVar2;
      if (iVar2 == 0) {
        puStack_64 = (undefined4 *)0x80004003;
        iStack_68 = 0x556eb1;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_64 = (undefined4 *)0x80004003;
        iStack_68 = 0x556ec1;
        FUN_00878dfb();
      }
      puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
      iStack_68 = 0;
      iStack_6c = 0;
      iStack_70 = 0;
      uStack_74 = 0;
      iVar3 = FUN_0040e53d();
      iVar3 = iVar3 << 1;
      iVar4 = FUN_0040e48b(iVar3);
      iVar4 = iVar4 << 1;
      uVar7 = 0xff;
      uVar6 = *(undefined4 *)(unaff_EBP + 0x18);
      iVar2 = FUN_0040eed0(uVar6,0xff,iVar4);
      iVar5 = *(int *)(unaff_EBP + 0x14) + iVar2 * -2;
      iVar2 = FUN_0040eea9(iVar5);
      iVar2 = *(int *)(unaff_EBP + 0x10) + (0x20 - iVar2) * 2;
      FUN_004115d9(iVar2);
      FUN_00503995(iVar2,iVar5,uVar6,uVar7,iVar4,iVar3);
      puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_68 = 0x556f26;
      puStack_64 = (undefined4 *)FUN_00402bc3();
LAB_00557000:
      if ((int)puStack_64 < 0) {
        iStack_68 = 0x557008;
        FUN_00878dfb();
      }
    }
  }
  puStack_64 = (undefined4 *)0x557010;
  FUN_004125e6();
LAB_00557010:
  puStack_64 = (undefined4 *)0x557018;
  FUN_004125e6();
  puStack_64 = (undefined4 *)0x557020;
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


