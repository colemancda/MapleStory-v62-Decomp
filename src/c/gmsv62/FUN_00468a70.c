/* FUN_00468a70 - 0x00468a70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00468a70(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined1 *puVar4;
  int iStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  int *piStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    piStack_54 = &DAT_00980690;
    iStack_58 = 0x468aa0;
    FUN_00403191();
    piStack_54 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_58 = 0x468aad;
    FUN_00403191();
    piStack_54 = (int *)0x0;
    iStack_58 = 0;
    puStack_5c = (undefined1 *)(unaff_EBP + -0x40);
    puStack_60 = (undefined1 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + -0x18) = &iStack_64;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00679e4e(&iStack_64,0xae9);
    iVar3 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_5c = (undefined1 *)0x468af7;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    piStack_54 = (int *)(unaff_EBP + -0x14);
    iStack_58 = 0x468b06;
    piStack_54 = (int *)FUN_00404b30();
    if (((int)piStack_54 < 0) && (piStack_54 != (int *)0x80004002)) {
      iStack_58 = 0x468b17;
      FUN_00878dfb();
    }
    piStack_54 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_58 = 0x468b24;
    piStack_54 = (int *)FUN_00402bc3();
    if ((int)piStack_54 < 0) {
      iStack_58 = 0x468b2f;
      FUN_00878dfb();
    }
    piStack_54 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_58 = 0x468b3c;
    piStack_54 = (int *)FUN_00402bc3();
    if ((int)piStack_54 < 0) {
      iStack_58 = 0x468b47;
      FUN_00878dfb();
    }
    piStack_54 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_58 = 0x468b54;
    piStack_54 = (int *)FUN_00402bc3();
    if ((int)piStack_54 < 0) {
      iStack_58 = 0x468b5f;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_54 = (int *)0x80004003;
    iStack_58 = 0x468b6e;
    FUN_00878dfb();
  }
  piStack_54 = (int *)0x468b76;
  iStack_58 = FUN_0040cf4d();
  piStack_54 = (int *)(unaff_EBP + -0xd);
  puStack_5c = (undefined1 *)0x468b83;
  FUN_0045f36d();
  puVar4 = (undefined1 *)0x0;
  while( true ) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_54 = (int *)0x80004003;
      iStack_58 = 0x468b94;
      FUN_00878dfb();
    }
    piStack_54 = (int *)0x468b9c;
    puVar2 = (undefined1 *)FUN_0040cf4d();
    if (puVar2 <= puVar4) {
      piStack_54 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_54 != (int *)0x0) {
        iStack_58 = 0x468d6f;
        (**(code **)(*piStack_54 + 8))();
      }
      piStack_54 = *(int **)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_54 != (int *)0x0) {
        iStack_58 = 0x468d80;
        (**(code **)(*piStack_54 + 8))();
      }
      uVar1 = 1;
      goto LAB_00468d83;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_54 = (int *)0x468bb3;
    FUN_00469866();
    piStack_54 = (int *)0x468bbb;
    FUN_0087a1b0();
    piStack_54 = (int *)0x0;
    iStack_58 = 0;
    iStack_64 = 0x468bc6;
    puStack_60 = puVar4;
    puStack_5c = &stack0xffffffb0;
    puStack_60 = (undefined1 *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_5c;
    iStack_64 = 0x468bd2;
    FUN_004033a1();
    puStack_60 = (undefined1 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_64 = 0x468be2;
    FUN_0040263d();
    iStack_64 = 0x468be9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_5c = (undefined1 *)0x468bf4;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar3 != 0) {
      piStack_54 = (int *)(unaff_EBP + -0x18);
      iStack_58 = 0x468c0a;
      piStack_54 = (int *)FUN_00404b30();
      if (((int)piStack_54 < 0) && (piStack_54 != (int *)0x80004002)) {
        iStack_58 = 0x468c1b;
        FUN_00878dfb();
      }
    }
    piStack_54 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_58 = 0x468c28;
    iVar3 = FUN_00402bc3();
    iStack_58 = (int)piStack_54;
    if (iVar3 < 0) {
      iStack_58 = 0x468c33;
      piStack_54 = (int *)iVar3;
      FUN_00878dfb();
      iStack_58 = extraout_ECX;
    }
    piStack_54 = (int *)0x0;
    puStack_60 = (undefined1 *)&iStack_58;
    *(int **)(unaff_EBP + -0x1c) = &iStack_58;
    puStack_5c = (undefined1 *)0xa9a;
    iStack_64 = 0x468c4a;
    FUN_00679e4e();
    puStack_5c = (undefined1 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_60 = (undefined1 *)0x468c5a;
    FUN_0040263d();
    puStack_60 = (undefined1 *)0x468c61;
    iStack_58 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_5c = (undefined1 *)0x468c6b;
    uVar1 = FUN_00412550();
    piStack_54 = (int *)0x468c77;
    iVar3 = FUN_00469862();
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
    piStack_54 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_58 = 0x468c87;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_58 = 0x468c92;
      piStack_54 = (int *)iVar3;
      FUN_00878dfb();
      piStack_54 = (int *)extraout_ECX_00;
    }
    puStack_5c = (undefined1 *)(unaff_EBP + 0x10);
    *(int **)(unaff_EBP + -0x1c) = &iStack_58;
    puStack_60 = (undefined1 *)0x468ca4;
    iStack_58 = (int)piStack_54;
    piStack_54 = (int *)*(undefined4 *)(unaff_EBP + 0x14);
    FUN_00424dbc();
    iStack_64 = unaff_EBP + -0x28;
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_60;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_60 = extraout_ECX_01;
    puStack_5c = extraout_ECX_01;
    FUN_0045e0ed();
    *(int **)(unaff_EBP + -0x20) = &iStack_64;
    FUN_00424dbc(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar3 = FUN_00467ed8();
    if (iVar3 != 0) break;
    piStack_54 = (int *)(unaff_EBP + -0x28);
    iStack_58 = 0x468ce8;
    FUN_0045e10e();
    piStack_54 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piStack_54 != (int *)0x0) {
      iStack_58 = 0x468cf9;
      (**(code **)(*piStack_54 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      piStack_54 = (int *)0x0;
      iStack_58 = 0x468d0b;
      FUN_0045e794();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    puVar4 = puVar4 + 1;
  }
  piStack_54 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x468d25;
    (**(code **)(*piStack_54 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    piStack_54 = (int *)0x0;
    iStack_58 = 0x468d37;
    FUN_0045e794();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  piStack_54 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x468d4a;
    (**(code **)(*piStack_54 + 8))();
  }
  piStack_54 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x468d5b;
    (**(code **)(*piStack_54 + 8))();
  }
  uVar1 = 0;
LAB_00468d83:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


