/* FUN_006c6b48 - 0x006c6b48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c6b48(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iStack_d0;
  int iStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 *puStack_9c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puStack_9c = (undefined4 *)0x3af;
  iStack_a0 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_a4 = 0x6c6b79;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_a4 = *puVar1;
  puStack_9c = (undefined4 *)0x0;
  iStack_a0 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_a8 = 0x6c6b8a;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_9c = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_a0 = 0x6c6ba1;
    FUN_00403384();
  }
  puStack_9c = &DAT_00980690;
  iStack_a0 = 0x6c6bb0;
  FUN_00403191();
  puStack_9c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a0 = 0x6c6bbd;
  FUN_00403191();
  piStack_c4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_c4 == (int *)0x0) {
    puStack_9c = (undefined4 *)0x80004003;
    iStack_a0 = 0x6c6bd2;
    FUN_00878dfb();
    piStack_c4 = *(int **)(unaff_EBP + -0x14);
  }
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x3c);
  iVar2 = *piStack_c4;
  iStack_a0 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_9c = *(undefined4 **)(unaff_EBP + -0x34);
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x58);
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_bc = 0x153;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_c0 = 0x275;
  *(int **)(unaff_EBP + -0x10) = piStack_c4;
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x4c);
  piStack_c8 = (int *)0x6c6c00;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    piStack_c8 = (int *)&DAT_00963cc8;
    iStack_cc = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_d0 = iVar2;
    FUN_00878e09();
  }
  piStack_c8 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_cc = 0x6c6c21;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6c2c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_c8 = (int *)(unaff_EBP + -0x40);
  iStack_cc = 0x6c6c39;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6c44;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = &DAT_0096ad28;
  *(int *)(unaff_EBP + -0x10) = iVar2 + 0x9ac;
  do {
    if (**(int **)(unaff_EBP + -0x10) == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      piStack_c8 = (int *)0x950;
      iStack_cc = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_d0 = 0x6c6c7f;
      puVar1 = (undefined4 *)FUN_00679d22();
      uVar3 = *puVar1;
      piStack_c8 = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
      iStack_cc = 0x6c6c92;
      piStack_c8 = (int *)FUN_006c97ae();
      iStack_cc = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_d0 = unaff_EBP + -0x18;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        piStack_c8 = (int *)(*(int *)(unaff_EBP + -0x44) + -0xc);
        iStack_cc = 0x6c6cb6;
        FUN_00434e38();
      }
      piStack_c8 = (int *)0x0;
      iStack_cc = 0;
      iStack_d0 = -1;
      (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x18));
      piStack_c8 = (int *)0x6c6cd3;
      FUN_0087a1b0();
      piStack_c8 = (int *)0x0;
      iStack_cc = 0;
      iStack_d0 = -1;
      uVar3 = FUN_00449713(&piStack_c4);
      uVar3 = FUN_00456ad5(uVar3);
      *(int **)(unaff_EBP + -0x30) = &iStack_d0;
      FUN_004033a1(uVar3);
      iVar4 = unaff_EBP + -0x68;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_d0 = 0x6c6d1a;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x48) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar4 != 0) {
        piStack_c8 = (int *)(unaff_EBP + -0x48);
        iStack_cc = 0x6c6d30;
        piStack_c8 = (int *)FUN_0041a581();
        if (((int)piStack_c8 < 0) && (piStack_c8 != (int *)0x80004002)) {
          iStack_cc = 0x6c6d41;
          FUN_00878dfb();
        }
      }
      piStack_c8 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_cc = 0x6c6d4e;
      piStack_c8 = (int *)FUN_00402bc3();
      if ((int)piStack_c8 < 0) {
        iStack_cc = 0x6c6d59;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        piStack_c8 = (int *)0x6c6d66;
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_c8 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
          iStack_cc = 0x6c6d7e;
          FUN_00434e38();
        }
      }
      else {
        piStack_c8 = (int *)0x3;
        iStack_cc = 0xff;
        iStack_d0 = 0x6c6d93;
        FUN_004031b7();
        piVar5 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (piVar5 == (int *)0x0) {
          piStack_c8 = (int *)0x80004003;
          iStack_cc = 0x6c6da8;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x14);
        }
        uVar3 = (*(undefined4 **)(unaff_EBP + -0x20))[1];
        iStack_d0 = *(int *)(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x28) = **(undefined4 **)(unaff_EBP + -0x20);
        iVar2 = *piVar5;
        iStack_cc = *(undefined4 *)(unaff_EBP + -0x38);
        *(int **)(unaff_EBP + -0x30) = piVar5;
        piStack_c8 = *(int **)(unaff_EBP + -0x34);
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar5,*(undefined4 *)(unaff_EBP + -0x28),uVar3,
                           *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x40));
        if (iVar2 < 0) {
          piStack_c8 = (int *)&DAT_00963cc8;
          iStack_cc = *(undefined4 *)(unaff_EBP + -0x30);
          iStack_d0 = iVar2;
          FUN_00878e09();
        }
        piStack_c8 = (int *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_cc = 0x6c6df4;
        piStack_c8 = (int *)FUN_00402bc3();
        if ((int)piStack_c8 < 0) {
          iStack_cc = 0x6c6dff;
          FUN_00878dfb();
        }
        piStack_c8 = (int *)0x6c6e07;
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_c8 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
          iStack_cc = 0x6c6e1b;
          FUN_00434e38();
        }
        iVar2 = *(int *)(unaff_EBP + -0x24);
      }
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xc;
  } while (*(int *)(unaff_EBP + -0x20) < 0x96ae50);
  piStack_c8 = &DAT_00980690;
  iStack_cc = 0x6c6e42;
  FUN_00403191();
  piStack_c8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_cc = 0x6c6e52;
  FUN_00403191();
  piStack_c8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_cc = 0x6c6e5f;
  FUN_00403191();
  piStack_c8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_cc = 0x6c6e6c;
  FUN_00403191();
  piStack_c8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_cc = 0x6c6e79;
  FUN_00403191();
  iVar2 = *(int *)(iVar2 + 0xb8c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar2 == 0) {
    piStack_c8 = (int *)0x80004003;
    iStack_cc = 0x6c6e91;
    FUN_00878dfb();
  }
  piStack_c8 = (int *)(unaff_EBP + -0x68);
  iStack_cc = unaff_EBP + -0x88;
  iStack_d0 = unaff_EBP + -0x78;
  FUN_004250ac(unaff_EBP + -0x98,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x40,
               unaff_EBP + -0x58);
  piStack_c8 = (int *)(unaff_EBP + -0x98);
  iStack_cc = 0x6c6ec5;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6ed0;
    FUN_00878dfb();
  }
  piStack_c8 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_cc = 0x6c6edd;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6ee8;
    FUN_00878dfb();
  }
  piStack_c8 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_cc = 0x6c6ef5;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6f00;
    FUN_00878dfb();
  }
  piStack_c8 = (int *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_cc = 0x6c6f0d;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6f18;
    FUN_00878dfb();
  }
  piStack_c8 = (int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_cc = 0x6c6f28;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6f33;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_c8 = (int *)(unaff_EBP + -0x68);
  iStack_cc = 0x6c6f40;
  piStack_c8 = (int *)FUN_00402bc3();
  if ((int)piStack_c8 < 0) {
    iStack_cc = 0x6c6f4b;
    FUN_00878dfb();
  }
  piStack_c8 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_c8 != (int *)0x0) {
    iStack_cc = 0x6c6f5c;
    (**(code **)(*piStack_c8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


