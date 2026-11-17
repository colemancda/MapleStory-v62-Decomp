/* FUN_0058e1fb - 0x0058e1fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058e1fb(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iStack_c0;
  int iStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  int *piStack_b0;
  
  FUN_00879bb8();
  iVar4 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x1b8);
  *(int *)(extraout_ECX + 0x144) = iVar4;
  if ((iVar4 != 0) && (puVar6 = (undefined1 *)0x0, 0 < iVar4)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    do {
      piStack_b0 = (int *)(unaff_EBP + -0x14);
      puStack_b4 = (undefined1 *)0x58e242;
      piVar1 = (int *)FUN_0058e712();
      piStack_b0 = *(int **)(*piVar1 + 4 + *(int *)(unaff_EBP + -0x10));
      puStack_b4 = (undefined1 *)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puStack_b8 = (undefined1 *)0x58e25a;
      FUN_0058e712();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_b8 = (undefined1 *)0x58e266;
      puStack_b4 = puVar6;
      puVar2 = (undefined4 *)FUN_00594659();
      puStack_b4 = (undefined1 *)*puVar2;
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x1c);
      iStack_bc = 0x58e274;
      FUN_0058e712();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_bc = 0x58e280;
      puStack_b8 = puVar6;
      FUN_00594659();
      puStack_b8 = (undefined1 *)0x58e28a;
      iStack_bc = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_b8;
      iStack_c0 = 0x58e296;
      FUN_00448a17();
      iStack_bc = 0x58e29d;
      FUN_0058e7e1();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_b0 = (int *)0x58e2a9;
      FUN_0056ac65();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_b0 = (int *)0x58e2b5;
      FUN_0056ac65();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_b0 = (int *)0x58e2c1;
      FUN_0056ac65();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xc;
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < *(int *)(extraout_ECX + 0x144));
  }
  iVar4 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x15c);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar4 + -4);
  }
  *(undefined4 *)(extraout_ECX + 0x7c) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 1;
  piStack_b0 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x3c) = 1;
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  puStack_b4 = (undefined1 *)0x58e30e;
  FUN_00403191();
  piStack_b0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_b4 = (undefined1 *)0x58e31b;
  FUN_00403191();
  piStack_b0 = (int *)0x0;
  puStack_b4 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)(unaff_EBP + -0x5c);
  iStack_bc = unaff_EBP + -0x7c;
  *(int **)(unaff_EBP + -0x30) = &iStack_c0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_c0 = extraout_ECX_00;
  FUN_00679e4e(&iStack_c0,0xc26);
  iVar4 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_b8 = (undefined1 *)0x58e368;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar4 != 0) {
    piStack_b0 = (int *)(unaff_EBP + -0x48);
    puStack_b4 = (undefined1 *)0x58e37e;
    piStack_b0 = (int *)FUN_00404b30();
    if (((int)piStack_b0 < 0) && (piStack_b0 != (int *)0x80004002)) {
      puStack_b4 = (undefined1 *)0x58e38f;
      FUN_00878dfb();
    }
  }
  piStack_b0 = (int *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_b4 = (undefined1 *)0x58e39f;
  piStack_b0 = (int *)FUN_00402bc3();
  if ((int)piStack_b0 < 0) {
    puStack_b4 = (undefined1 *)0x58e3aa;
    FUN_00878dfb();
  }
  piStack_b0 = (int *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_b4 = (undefined1 *)0x58e3b7;
  piStack_b0 = (int *)FUN_00402bc3();
  if ((int)piStack_b0 < 0) {
    puStack_b4 = (undefined1 *)0x58e3c2;
    FUN_00878dfb();
  }
  piStack_b0 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_b4 = (undefined1 *)0x58e3cf;
  piStack_b0 = (int *)FUN_00402bc3();
  if ((int)piStack_b0 < 0) {
    puStack_b4 = (undefined1 *)0x58e3da;
    FUN_00878dfb();
  }
  piVar1 = (int *)(extraout_ECX + 0x88);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  do {
    if (*(int *)(unaff_EBP + -0x28) < *(int *)(extraout_ECX + 0x7c)) {
      puVar5 = (undefined4 *)
               (*(int *)(*(int *)(extraout_ECX + 0x78) + 0x15c) + *(int *)(unaff_EBP + -0x10));
      piStack_b0 = (int *)0x548;
      puStack_b4 = (undefined1 *)(unaff_EBP + -0x4c);
      puStack_b8 = (undefined1 *)0x58e417;
      puVar2 = (undefined4 *)FUN_00679d86();
      piStack_b0 = (int *)*puVar5;
      puStack_b4 = (undefined1 *)*puVar2;
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_bc = 0x58e429;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_b0 = (int *)0x58e438;
      FUN_00402676();
      piStack_b0 = (int *)0x578;
      puStack_b4 = (undefined1 *)0x58e447;
      iVar4 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x24) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (iVar4 == 0) {
        piStack_b0 = (int *)0x0;
      }
      else {
        piStack_b0 = (int *)0x58e459;
        piStack_b0 = (int *)FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_b4 = (undefined1 *)0x58e46a;
      FUN_00450382();
      piStack_b0 = (int *)(unaff_EBP + -0x40);
      puStack_b4 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      iStack_bc = *(int *)(unaff_EBP + -0x20);
      iStack_c0 = *(int *)(unaff_EBP + -0x28) + 1000;
      (**(code **)(*(int *)*piVar1 + 0x20))(extraout_ECX);
      if (puVar5[2] != 0) {
        piStack_b0 = (int *)0x3;
        puStack_b4 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x58e4a0;
        FUN_004031b7();
        iVar4 = *(int *)(extraout_ECX + 0x13c);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (iVar4 == 0) {
          piStack_b0 = (int *)0x80004003;
          puStack_b4 = (undefined1 *)0x58e4b7;
          FUN_00878dfb();
        }
        piStack_b0 = (int *)(unaff_EBP + -0x8c);
        puStack_b4 = (undefined1 *)(unaff_EBP + -0x18);
        puStack_b8 = (undefined1 *)0x58e4cd;
        FUN_00425067();
        piStack_b0 = (int *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_b4 = (undefined1 *)0x58e4dd;
        piStack_b0 = (int *)FUN_00402bc3();
        if ((int)piStack_b0 < 0) {
          puStack_b4 = (undefined1 *)0x58e4e8;
          FUN_00878dfb();
        }
        piStack_b0 = (int *)0x58e4f0;
        FUN_0087a1b0();
        piStack_b0 = (int *)0x0;
        puStack_b4 = (undefined1 *)0x0;
        iStack_bc = puVar5[2];
        iStack_c0 = 0x58e4ff;
        puStack_b8 = &stack0xffffff54;
        iStack_bc = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_b8;
        iStack_c0 = 0x58e50b;
        FUN_004033a1();
        iStack_bc = unaff_EBP + -0xac;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_c0 = 0x58e51e;
        FUN_0040263d();
        iStack_c0 = 0x58e525;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        puStack_b8 = (undefined1 *)0x58e530;
        iVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(int *)(unaff_EBP + -0x44) = iVar4;
        if (iVar4 != 0) {
          piStack_b0 = (int *)(unaff_EBP + -0x44);
          puStack_b4 = (undefined1 *)0x58e547;
          piStack_b0 = (int *)FUN_0041a581();
          if (((int)piStack_b0 < 0) && (piStack_b0 != (int *)0x80004002)) {
            puStack_b4 = (undefined1 *)0x58e558;
            FUN_00878dfb();
          }
        }
        piStack_b0 = (int *)(unaff_EBP + -0xac);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        puStack_b4 = (undefined1 *)0x58e568;
        piStack_b0 = (int *)FUN_00402bc3();
        if ((int)piStack_b0 < 0) {
          puStack_b4 = (undefined1 *)0x58e573;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_b0 = (int *)0x3;
          puStack_b4 = (undefined1 *)0xff;
          puStack_b8 = (undefined1 *)0x58e588;
          FUN_004031b7();
          piVar1 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (piVar1 == (int *)0x0) {
            piStack_b0 = (int *)0x80004003;
            puStack_b4 = (undefined1 *)0x58e59d;
            FUN_00878dfb();
            piVar1 = *(int **)(unaff_EBP + -0x18);
          }
          iVar4 = *piVar1;
          iStack_c0 = *(int *)(unaff_EBP + -0x14);
          iStack_bc = *(int *)(unaff_EBP + -0x6c);
          puStack_b8 = *(undefined1 **)(unaff_EBP + -0x68);
          puStack_b4 = *(undefined1 **)(unaff_EBP + -100);
          *(int **)(unaff_EBP + -0x24) = piVar1;
          piStack_b0 = *(int **)(unaff_EBP + -0x60);
          puVar6 = (undefined1 *)
                   (**(code **)(iVar4 + 0x80))(piVar1,*(int *)(unaff_EBP + -0x20) + 5,0);
          if ((int)puVar6 < 0) {
            piStack_b0 = (int *)&DAT_00963cc8;
            puStack_b4 = *(undefined1 **)(unaff_EBP + -0x24);
            iStack_bc = 0x58e5d6;
            puStack_b8 = puVar6;
            FUN_00878e09();
          }
          piStack_b0 = (int *)(unaff_EBP + -0x6c);
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          puStack_b4 = (undefined1 *)0x58e5e3;
          piStack_b0 = (int *)FUN_00402bc3();
          if ((int)piStack_b0 < 0) {
            puStack_b4 = (undefined1 *)0x58e5ee;
            FUN_00878dfb();
          }
          piVar1 = *(int **)(unaff_EBP + -0x1c);
        }
        piStack_b0 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (piStack_b0 != (int *)0x0) {
          puStack_b4 = (undefined1 *)0x58e602;
          (**(code **)(*piStack_b0 + 8))();
        }
        piStack_b0 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (piStack_b0 != (int *)0x0) {
          puStack_b4 = (undefined1 *)0x58e613;
          (**(code **)(*piStack_b0 + 8))();
        }
      }
    }
    else {
      piStack_b0 = (int *)0x54a;
      puStack_b4 = (undefined1 *)(unaff_EBP + -0x30);
      puStack_b8 = (undefined1 *)0x58e698;
      puVar2 = (undefined4 *)FUN_00679d86();
      piStack_b0 = (int *)*puVar2;
      puStack_b4 = (undefined1 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_b8 = (undefined1 *)0x58e6a7;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_b0 = (int *)0x58e6b5;
      FUN_00402676();
      piStack_b0 = (int *)0x578;
      puStack_b4 = (undefined1 *)0x58e6c4;
      iVar4 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x24) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (iVar4 == 0) {
        piStack_b0 = (int *)0x0;
      }
      else {
        piStack_b0 = (int *)0x58e6d6;
        piStack_b0 = (int *)FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_b4 = (undefined1 *)0x58e6e7;
      FUN_00450382();
      piStack_b0 = (int *)(unaff_EBP + -0x40);
      puStack_b4 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      iStack_bc = *(int *)(unaff_EBP + -0x20);
      iStack_c0 = *(int *)(unaff_EBP + -0x28) + 1000;
      (**(code **)(*(int *)*piVar1 + 0x20))(extraout_ECX);
      (**(code **)(*(int *)(*piVar1 + 4) + 0x1c))(0);
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x20;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x1b;
    piVar1 = piVar1 + 2;
    *(int **)(unaff_EBP + -0x1c) = piVar1;
  } while (*(int *)(unaff_EBP + -0x10) < 0x2e0);
  if ((DAT_00978368 != 0) && (*(int *)(DAT_00978368 + 0x207c) == 0)) {
    piStack_b0 = (int *)0x58e64b;
    FUN_0059151e();
  }
  piStack_b0 = (int *)0x0;
  puStack_b4 = (undefined1 *)0x58e653;
  FUN_008161f1();
  piStack_b0 = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_b0 != (int *)0x0) {
    puStack_b4 = (undefined1 *)0x58e664;
    (**(code **)(*piStack_b0 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_b0 = (int *)0x58e670;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


