/* ptr_0046c7b4 - 0x0046c7b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0046c7b4(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  int *piVar3;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  int *piStack_1c;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = in_EAX;
  *unaff_EDI = *unaff_ESI;
  iVar1 = (**(code **)(param_1 + 100))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xb4))();
  if (iVar1 < 0) {
    piStack_1c = (int *)0x46c818;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar1 = (**(code **)(*piVar3 + 0xe0))();
  if (iVar1 < 0) {
    puStack_24 = (undefined1 *)0x46c842;
    iStack_20 = iVar1;
    piStack_1c = piVar3;
    FUN_00878e09();
  }
  piVar3 = (int *)0x0;
  while( true ) {
    FUN_0087a1b0();
    iStack_20 = 0x46c85a;
    piStack_1c = piVar3;
    piStack_1c = (int *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffe8;
    iStack_20 = 0x46c868;
    FUN_00402e8e();
    piStack_1c = (int *)(unaff_EBP + -0xd0);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_20 = 0x46c87b;
    FUN_0040263d();
    iStack_20 = 0x46c882;
    FUN_004048a4();
    piStack_1c = (int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_20 = 0x46c890;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_1c = (int *)0x46c89f;
    FUN_00417232();
    FUN_004027b3();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_1c = (int *)0x46c8b7;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46c8c2;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x1c) == 0) break;
    piStack_1c = (int *)0x46c8d5;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_1c = (int *)0x46c8e2;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_1c = (int *)0x46c8f2;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_1c = (int *)0x46c8ff;
    FUN_00403191();
    puStack_24 = (undefined1 *)&piStack_1c;
    *(int ***)(unaff_EBP + -0x20) = &piStack_1c;
    iStack_20 = 0x474;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_28 = 0x46c91b;
    FUN_00679e4e();
    iStack_20 = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_24 = (undefined1 *)0x46c92e;
    FUN_0040263d();
    puStack_24 = (undefined1 *)0x46c935;
    piStack_1c = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_20 = 0x46c93f;
    piStack_1c = (int *)FUN_00412550();
    iStack_20 = 0x46c94c;
    FUN_004031b7();
    piStack_1c = (int *)(unaff_EBP + -0x78);
    iStack_20 = unaff_EBP + -0x90;
    puStack_24 = (undefined1 *)(unaff_EBP + -0x68);
    iStack_28 = unaff_EBP + -0x58;
    uStack_2c = (uint)(*(int *)(unaff_EBP + 0x18) == 0x3eb);
    iStack_34 = unaff_EBP + 0x1c;
    *(int **)(unaff_EBP + -0x20) = &iStack_30;
    uStack_38 = 0x46c97b;
    FUN_00424dbc();
    iStack_34 = *(undefined4 *)(unaff_EBP + 0x20);
    *(undefined4 **)(unaff_EBP + -0x48) = &uStack_38;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_004059fd(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_0046ac3f(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    uStack_2c = 0x46c9ac;
    uStack_2c = FUN_004458be();
    iStack_30 = unaff_EBP + -0xe0;
    iStack_34 = 0x46c9bc;
    FUN_00424e27();
    iStack_34 = 0x46c9c3;
    FUN_004250ac();
    piStack_1c = (int *)0x46c9cf;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46c9da;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_1c = (int *)0x46c9ef;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46c9fa;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_1c = (int *)0x46ca0a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46ca15;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_1c = (int *)0x46ca22;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46ca2d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_1c = (int *)0x46ca3d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46ca48;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_1c = (int *)0x46ca55;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46ca60;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_1c = (int *)0x46ca6d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46ca78;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int **)(unaff_EBP + 0x1c) != (int *)0x0) {
      piStack_1c = (int *)0x46ca89;
      (**(code **)(**(int **)(unaff_EBP + 0x1c) + 8))();
    }
    piVar3 = (int *)((int)piVar3 + 1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_004027eb();
  if (piVar3 == (int *)0x0) {
    piStack_1c = (int *)0x46cb2f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    piStack_1c = (int *)0x46cb3c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_1c = (int *)0x46cb4c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_1c = (int *)0x46cb59;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_1c = (int *)0x46cb66;
    FUN_00403191();
    piStack_1c = (int *)(unaff_EBP + -0x58);
    iStack_20 = unaff_EBP + -0x90;
    puStack_24 = (undefined1 *)(unaff_EBP + -0x78);
    iStack_28 = unaff_EBP + -0x44;
    uStack_2c = (uint)(*(int *)(unaff_EBP + 0x18) == 0x3eb);
    iStack_34 = unaff_EBP + -0x18;
    *(int **)(unaff_EBP + 0x18) = &iStack_30;
    uStack_38 = 0x46cb95;
    FUN_00424dbc();
    iStack_34 = *(undefined4 *)(unaff_EBP + 0x20);
    *(undefined4 **)(unaff_EBP + 0x20) = &uStack_38;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    uStack_38 = extraout_ECX;
    FUN_004059fd(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_0046ac3f(unaff_EBP + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    uStack_2c = 0x46cbc6;
    uStack_2c = FUN_004458be();
    iStack_30 = unaff_EBP + -0xa0;
    iStack_34 = 0x46cbd6;
    FUN_00424e27();
    iStack_34 = 0x46cbdd;
    FUN_004250ac();
    piStack_1c = (int *)0x46cbe9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46cbf4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (*(int **)(unaff_EBP + 0x1c) != (int *)0x0) {
      piStack_1c = (int *)0x46cc05;
      (**(code **)(**(int **)(unaff_EBP + 0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_1c = (int *)0x46cc12;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46cc1d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_1c = (int *)0x46cc2a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46cc35;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_1c = (int *)0x46cc45;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46cc50;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    piStack_1c = (int *)0x46cc5d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46cc68;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
  }
  else {
    piStack_1c = (int *)0x46caac;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    piStack_1c = (int *)0x46cab9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1c = (int *)0x46cacd;
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    puStack_24 = *(undefined1 **)(unaff_EBP + -0x78);
    iStack_20 = *(int *)(unaff_EBP + -0x74);
    piStack_1c = *(int **)(unaff_EBP + -0x70);
    iStack_34 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_30 = *(int *)(unaff_EBP + -0x40);
    uStack_2c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_38 = 0x20;
    iStack_28 = *(int *)(unaff_EBP + -0x38);
    iVar1 = (**(code **)(*piVar3 + 0x110))(piVar3);
    if (iVar1 < 0) {
      puStack_24 = (undefined1 *)0x46cb03;
      iStack_20 = iVar1;
      piStack_1c = piVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    piStack_1c = (int *)0x46cb10;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_1c = (int *)0x46cb1b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
  }
  piStack_1c = (int *)0x46cc75;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_1c = (int *)0x46cc80;
    FUN_00878dfb();
  }
  uVar2 = FUN_007d1e08();
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(iVar1 + 0x40) = uVar2;
  piStack_1c = (int *)0x0;
  *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(unaff_EBP + 0x14);
  iStack_20 = 0x46cc9e;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    piStack_1c = (int *)0x46ccb1;
    FUN_00878dfb();
  }
  piStack_1c = (int *)(unaff_EBP + 0x18);
  iStack_20 = 0x46ccc1;
  piVar3 = (int *)FUN_00425067();
  iVar1 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (iVar1 == 0) {
    piStack_1c = (int *)0x46ccd5;
    FUN_00878dfb();
  }
  FUN_0040eed0();
  piStack_1c = (int *)0x46cce7;
  FUN_0046f8b1();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
    piStack_1c = (int *)0x46ccf8;
    (**(code **)(**(int **)(unaff_EBP + 0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_1c = (int *)0x46cd05;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_1c = (int *)0x46cd10;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    piStack_1c = (int *)0x46cd21;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_1c = (int *)0x46cd3e;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    piStack_1c = (int *)0x46cd5e;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    piStack_1c = (int *)0x46cd6f;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


