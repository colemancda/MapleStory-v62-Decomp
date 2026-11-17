/* FUN_00779e54 - 0x00779e54 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00779e54(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  byte bVar6;
  int *piVar7;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  uVar4 = *(undefined4 *)(*(int *)(extraout_ECX + 0x10) + 0x838);
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*(int *)(extraout_ECX + 0x10) + 0x834);
  FUN_0045e787();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(extraout_ECX + 4);
  piVar7 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar7 == (int *)0x0) {
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar7;
  *(int **)(unaff_EBP + -0x30) = piVar7;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    iStack_b4 = *(int *)(unaff_EBP + -0x30);
    iStack_bc = 0x779f06;
    iStack_b8 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_b4 = 0x779f13;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b4 = 0x779f1e;
    FUN_00878dfb();
  }
  iStack_b4 = unaff_EBP + -0x34;
  iStack_b8 = 0x779f31;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_b8 = *puVar2;
  iStack_b4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) + 0x77c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = unaff_EBP + -0x2c;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    iStack_b4 = 0x779f66;
    FUN_00434e38();
  }
  iStack_b4 = 0x779f70;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_b4 = 0x779f80;
  iStack_b8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x3c) = &iStack_b4;
  iStack_bc = 0x779f8c;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_b8 = 0x779f98;
  FUN_0044974c();
  iStack_b8 = 0x779f9f;
  iVar1 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_b4 = 0x779fae;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x779fb9;
    FUN_00878dfb();
  }
  iStack_b4 = 0x779fc2;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b4 = 0x779fcf;
  FUN_00403191();
  iStack_b4 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_b8 = 0x779fe3;
  iStack_b8 = FUN_00449749();
  iStack_bc = 0x779fec;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x3c) = &iStack_bc;
  iStack_bc = extraout_ECX_00;
  FUN_00448a17(uVar4);
  uVar4 = 8;
  iVar3 = -iVar1 + 0x105;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004115d9(iVar3,8);
  FUN_00448e3a(iVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b4 = 0x77a022;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x77a02d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_b4 = 0x77a03a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x77a045;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x4c) = -iVar1 + 0xf1;
  *(undefined4 *)(unaff_EBP + -0x44) = 0x119;
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(unaff_EBP + -0x48) = 3;
  *(undefined4 *)(unaff_EBP + -0x40) = 0x19;
  *(undefined4 *)(iVar1 + 0x7a8) = *(undefined4 *)(unaff_EBP + -0x4c);
  *(undefined4 *)(iVar1 + 0x7ac) = *(undefined4 *)(unaff_EBP + -0x48);
  *(undefined4 *)(iVar1 + 0x7b0) = *(undefined4 *)(unaff_EBP + -0x44);
  *(undefined4 *)(iVar1 + 0x7b4) = *(undefined4 *)(unaff_EBP + -0x40);
  if (*(int *)(iVar3 + 4) == 0) {
    iStack_b4 = 0x77a085;
    FUN_00878dfb();
  }
  iVar1 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar1;
  piVar7 = (int *)(iVar3 + 0x14);
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 4;
  while ((*piVar7 != 0 && (*(uint *)(unaff_EBP + -0x18) < *(uint *)(*piVar7 + -4)))) {
    iVar1 = (-(uint)(*(int *)(unaff_EBP + -0x20) != 0) & 0xffffff74) + 0x8c;
    *(int *)(unaff_EBP + -0x34) = iVar1;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_b4 = 0x77a0dc;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8);
      piVar7 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (piVar7 == (int *)0x0) {
        iStack_b4 = 0x77a0fa;
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar7;
      iStack_bc = *(int *)(unaff_EBP + -0x5c);
      iStack_b8 = *(int *)(unaff_EBP + -0x58);
      iStack_b4 = *(int *)(unaff_EBP + -0x54);
      *(int **)(unaff_EBP + -0x3c) = piVar7;
      iVar1 = (**(code **)(iVar1 + 0x80))
                        (piVar7,0,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x38));
      if (iVar1 < 0) {
        iStack_b4 = *(int *)(unaff_EBP + -0x3c);
        iStack_bc = 0x77a12f;
        iStack_b8 = iVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_b4 = 0x77a13c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_b4 = 0x77a147;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(unaff_EBP + -0x34);
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(*(int *)(iVar3 + 0x10) + 0x818) == *(int *)(unaff_EBP + -0x18)) {
      piVar7 = *(int **)(unaff_EBP + 8);
      if (piVar7 == (int *)0x0) {
        iStack_b4 = 0x77a170;
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + 8);
      }
      iVar5 = *piVar7;
      iStack_b4 = 0x12;
      iStack_b8 = 0x8c;
      iStack_bc = *(int *)(unaff_EBP + -0x10);
      *(int **)(unaff_EBP + -0x3c) = piVar7;
      iVar5 = (**(code **)(iVar5 + 0x8c))(piVar7,iVar1 + 1);
      if (iVar5 < 0) {
        iStack_b4 = *(int *)(unaff_EBP + -0x3c);
        iStack_bc = 0x77a1a4;
        iStack_b8 = iVar5;
        FUN_00878e09();
      }
      iStack_b4 = 0x77a1ad;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_b4 = 0x77a1ba;
      FUN_00403191();
      iStack_b4 = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_b8 = 0x77a1ce;
      iStack_b8 = FUN_00449749();
      iStack_bc = *(int *)(unaff_EBP + -0x18);
      FUN_00782975();
      iStack_bc = 0x77a1e3;
      uVar4 = FUN_00449713();
      *(int **)(unaff_EBP + -0x3c) = &iStack_bc;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x1c);
      iVar5 = iVar1 + 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_004115d9(iVar5,uVar4);
      FUN_00448e3a(iVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_b4 = 0x77a216;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_b4 = 0x77a221;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    else {
      iStack_b4 = 0x77a239;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_b4 = 0x77a246;
      FUN_00403191();
      iStack_b4 = unaff_EBP + -0x7c;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_b8 = 0x77a25d;
      iStack_b8 = FUN_00449749();
      iStack_bc = *(int *)(unaff_EBP + -0x18);
      FUN_00782975();
      iStack_bc = 0x77a272;
      uVar4 = FUN_00449713();
      *(int **)(unaff_EBP + -0x3c) = &iStack_bc;
      FUN_00448a17(uVar4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x1c);
      iVar5 = iVar1 + 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004115d9(iVar5,uVar4);
      FUN_00448e3a(iVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_b4 = 0x77a2a5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_b4 = 0x77a2b0;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    piVar7 = (int *)(iVar3 + 0x14);
    iStack_b4 = 0x77a2c0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_b4 = 0x77a2cb;
      FUN_00878dfb();
    }
    iStack_b4 = iVar1 + 0x8c;
    iStack_b8 = *(int *)(unaff_EBP + -0x10);
    iStack_bc = iVar1;
    (*DAT_0097b504)(*piVar7 + 4 + *(int *)(unaff_EBP + -0x30));
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x12;
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 0x14;
    *(uint *)(unaff_EBP + -0x20) = (uint)(*(int *)(unaff_EBP + -0x20) == 0);
  }
  bVar6 = 0;
  if (*piVar7 != 0) {
    bVar6 = (byte)*(undefined4 *)(*piVar7 + -4);
  }
  if ((bVar6 & 1) == 1) {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    iStack_b4 = 0x77a33f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iStack_b4 = unaff_EBP + -0x4c;
    iStack_b8 = 0x77a349;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_b4 = 0x77a355;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar3 + 8);
    piVar7 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar7 == (int *)0x0) {
      iStack_b4 = 0x77a370;
      FUN_00878dfb();
      piVar7 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar7;
    iStack_bc = *(int *)(unaff_EBP + -0x4c);
    iStack_b8 = *(int *)(unaff_EBP + -0x48);
    iStack_b4 = *(int *)(unaff_EBP + -0x44);
    *(int **)(unaff_EBP + -0x38) = piVar7;
    iVar1 = (**(code **)(iVar1 + 0x80))
                      (piVar7,0,*(undefined4 *)(unaff_EBP + -0x10),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar1 < 0) {
      iStack_b4 = *(int *)(unaff_EBP + -0x38);
      iStack_bc = 0x77a3a5;
      iStack_b8 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_b4 = 0x77a3b2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b4 = 0x77a3bd;
      FUN_00878dfb();
    }
    iStack_b4 = 0x77a3c9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
    iStack_b4 = unaff_EBP + -0x5c;
    iStack_b8 = 0x77a3d3;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_b4 = 0x77a3df;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_b4 = 0x77a3e9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iStack_b4 = unaff_EBP + -0x4c;
    iStack_b8 = 0x77a3f3;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_b4 = 0x77a3ff;
      FUN_00878dfb();
    }
    iStack_b4 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_b8 = 0x77a413;
    iStack_b8 = FUN_00449749();
    *(int **)(unaff_EBP + -0x3c) = &iStack_bc;
    iStack_bc = extraout_ECX_01;
    FUN_00679e4e(&iStack_bc,0x2cd);
    iVar1 = *(int *)(unaff_EBP + -0x10) + 4;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_004115d9(0x19,iVar1);
    FUN_00448e3a(uVar4,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_b4 = 0x77a453;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b4 = 0x77a45e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_b4 = 0x77a46b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b4 = 0x77a476;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    iVar3 = *(int *)(unaff_EBP + -0x14);
  }
  iStack_b4 = 0x77a487;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_b4 = unaff_EBP + -0x5c;
  iStack_b8 = 0x77a491;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_b4 = 0x77a49d;
    FUN_00878dfb();
  }
  piVar7 = *(int **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(iVar3 + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar7 == (int *)0x0) {
    iStack_b4 = 0x77a4b5;
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar7;
  iStack_bc = *(int *)(unaff_EBP + -0x5c);
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_b4 = *(int *)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + -0x3c) = piVar7;
  iVar1 = (**(code **)(iVar1 + 0x80))(piVar7,0,*(undefined4 *)(unaff_EBP + -0x10),uVar4);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x3c),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0040e53d();
  if ((*(int *)(iVar1 + 0x14) == 0) || (*(uint *)(*(int *)(iVar1 + 0x14) + -4) < 0x1a)) {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x770) + 4);
    uVar4 = 1;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x770) + 4);
    uVar4 = 0;
  }
  (**(code **)(iVar3 + 0x1c))(uVar4);
  if ((*(int *)(iVar1 + 0x14) == 0) || (*(int *)(*(int *)(iVar1 + 0x14) + -4) == 0)) {
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x778) + 4);
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x778) + 4);
    uVar4 = 1;
  }
  (**(code **)(iVar1 + 0x1c))(uVar4);
  piVar7 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  piVar7 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  piVar7 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


