/* FUN_0061a54b - 0x0061a54b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0061a54b(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int *extraout_ECX_01;
  int *piVar4;
  int unaff_EBP;
  undefined1 *puStack_ec;
  int iStack_e8;
  int iStack_e4;
  int *piStack_e0;
  
  FUN_00879bb8();
  piStack_e0 = (int *)0x61a56c;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_e0 = (int *)0x61a57d;
  FUN_00403191();
  piStack_e0 = (int *)0x0;
  iStack_e4 = unaff_EBP + -0x68;
  iStack_e8 = unaff_EBP + -0x88;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_ec,0x69f);
  iVar1 = unaff_EBP + -0xa8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_e4 = 0x61a5cf;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    piStack_e0 = (int *)0x61a5e5;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_e0 = (int *)0x61a5f6;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_e0 = (int *)0x61a606;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_e0 = (int *)0x61a611;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_e0 = (int *)0x61a621;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_e0 = (int *)0x61a62c;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_e0 = (int *)0x61a639;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x61a644;
    FUN_00878dfb();
    iVar1 = extraout_ECX;
  }
  piStack_e0 = (int *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x18) = &iStack_e4;
  iStack_e8 = 0x6a0;
  iStack_e4 = iVar1;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -200;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_ec = (undefined1 *)0x61a669;
  FUN_00559a18();
  puStack_ec = (undefined1 *)0x61a670;
  FUN_005593dc();
  puStack_ec = (undefined1 *)0x61a677;
  FUN_00559498();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_e4 = 0x61a682;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    piStack_e0 = (int *)0x61a698;
    iVar1 = FUN_0055cc56();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_e0 = (int *)0x61a6a9;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_e0 = (int *)0x61a6b9;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_e0 = (int *)0x61a6c4;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    piStack_e0 = (int *)0x61a6d3;
    FUN_00878dfb();
  }
  piStack_e0 = (int *)0x61a6df;
  FUN_00559523();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_e0 = (int *)0x61a6ec;
  FUN_004035f5();
  FUN_004027b3();
  piStack_e0 = (int *)0x61a6fe;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  do {
    piStack_e0 = (int *)(unaff_EBP + -0x58);
    iStack_e4 = *(int *)(unaff_EBP + -0x30);
    iStack_e8 = 0x61a715;
    iVar1 = FUN_00559dbc();
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_e0 = (int *)0x61a9d7;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e0 = (int *)0x61a9e2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        piStack_e0 = (int *)0x61a9f3;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_e0 = (int *)0x61aa04;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        piStack_e0 = (int *)0x61aa15;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    piStack_e0 = *(int **)(unaff_EBP + -0x50);
    if (*(short *)(unaff_EBP + -0x58) != 8) {
      piStack_e0 = (int *)&DAT_0097812c;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_e4 = 0x61a73d;
    FUN_004184ca();
    piStack_e0 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_e4 = 0x61a74b;
    iStack_e8 = FUN_00411641();
    *(int **)(unaff_EBP + -0x20) = &iStack_e4;
    puStack_ec = (undefined1 *)0x61a757;
    FUN_004033a1();
    iStack_e8 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_ec = (undefined1 *)0x61a76a;
    FUN_005593dc();
    puStack_ec = (undefined1 *)0x61a771;
    FUN_00559498();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_e4 = 0x61a77c;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x38) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar1 != 0) {
      piStack_e0 = (int *)0x61a792;
      iVar1 = FUN_0055ccb6();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        piStack_e0 = (int *)0x61a7a3;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_e0 = (int *)0x61a7b3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e0 = (int *)0x61a7be;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      FUN_005e30f3();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_e0 = (int *)0x61a7e3;
        FUN_00403384();
      }
    }
    else {
      piStack_e0 = (int *)(unaff_EBP + -0x2c);
      iStack_e4 = 0x61a7f9;
      FUN_00679d86();
      piStack_e0 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_e4 = 0x61a817;
      FUN_0046febf();
      piStack_e0 = (int *)0x61a823;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_e0 = (int *)0x61a830;
      FUN_00403191();
      piStack_e0 = (int *)0x0;
      iStack_e4 = unaff_EBP + -0x98;
      iStack_e8 = unaff_EBP + -0x78;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_ec = (undefined1 *)0x61a849;
      uVar3 = FUN_00411641();
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_ec;
      puStack_ec = extraout_ECX_00;
      FUN_004033a1(uVar3);
      iVar1 = unaff_EBP + -0xd8;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_e4 = 0x61a87e;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x48) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (iVar1 != 0) {
        piStack_e0 = (int *)0x61a894;
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          piStack_e0 = (int *)0x61a8a5;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      piStack_e0 = (int *)0x61a8b5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e0 = (int *)0x61a8c0;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      piStack_e0 = (int *)0x61a8cd;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e0 = (int *)0x61a8d8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_e0 = (int *)0x61a8e8;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e0 = (int *)0x61a8f3;
        FUN_00878dfb();
      }
      piStack_e0 = (int *)0x2e;
      iStack_e4 = 0x61a8fe;
      FUN_005e312e();
      piStack_e0 = (int *)(unaff_EBP + -0x18);
      iStack_e4 = 0x61a90b;
      FUN_0046fcad();
      piStack_e0 = (int *)0x61a912;
      iVar1 = FUN_0087a208();
      FUN_00402676();
      piVar4 = *(int **)(unaff_EBP + -0x24);
      piStack_e0 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff24;
      if (piStack_e0 != (int *)0x0) {
        iStack_e4 = 0x61a935;
        (**(code **)(*piStack_e0 + 4))();
        piVar4 = extraout_ECX_01;
      }
      iStack_e4 = unaff_EBP + -0x28;
      *(int ***)(unaff_EBP + -0x20) = &piStack_e0;
      iStack_e8 = 0x61a944;
      piStack_e0 = piVar4;
      FUN_00424dbc();
      iStack_e8 = 0x61a94a;
      iStack_e4 = iVar1;
      iVar1 = FUN_0061aa7f();
      if (iVar1 == 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0x22000006;
        *(undefined4 *)(unaff_EBP + -0x18) = 0x22000006;
        piStack_e0 = (int *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
                    /* WARNING: Subroutine does not return */
        iStack_e4 = 0x61a9ca;
        __CxxThrowException_8();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        piStack_e0 = (int *)0x61a962;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        piStack_e0 = (int *)0x61a97f;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00402676();
    }
    piStack_e0 = (int *)0x61a999;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e0 = (int *)0x61a9a8;
      FUN_00878dfb();
    }
  } while( true );
}


