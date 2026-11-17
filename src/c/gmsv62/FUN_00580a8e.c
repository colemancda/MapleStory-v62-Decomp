/* FUN_00580a8e - 0x00580a8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00580a8e(void)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  short *psVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 uStack_58;
  undefined *puStack_54;
  undefined4 *puStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar6 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((iVar6 < 1) || (3 < iVar6)) {
    puStack_50 = *(undefined4 **)(unaff_EBP + 0x14);
    puStack_54 = (undefined *)(unaff_EBP + -0x18);
    uStack_58 = 0x580c39;
    puStack_50 = (undefined4 *)FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_54 = (undefined *)0x580c46;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_50 = (undefined4 *)0x580c52;
    FUN_00414ebb();
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      puStack_50 = (undefined4 *)0x5cd;
      puStack_54 = (undefined *)(unaff_EBP + 0xc);
      uStack_58 = 0x580adf;
      piVar3 = (int *)FUN_00679e4e();
      puVar2 = (undefined4 *)*piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (puVar2 == (undefined4 *)0x0) {
        uStack_58 = 0;
      }
      else {
        uStack_58 = *puVar2;
      }
      puStack_50 = *(undefined4 **)(unaff_EBP + 0x14);
      puStack_54 = (undefined *)iVar6;
      FUN_0041354c(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        puStack_50 = (undefined4 *)0x580b10;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
      }
    }
    else {
      puStack_50 = (undefined4 *)0x5ce;
      puStack_54 = (undefined *)(unaff_EBP + -0x14);
      uStack_58 = 0x580b28;
      piVar3 = (int *)FUN_00679e4e();
      puVar2 = (undefined4 *)*piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (puVar2 == (undefined4 *)0x0) {
        uStack_58 = 0;
      }
      else {
        uStack_58 = *puVar2;
      }
      puStack_50 = *(undefined4 **)(unaff_EBP + 0x14);
      puStack_54 = (undefined *)iVar6;
      FUN_0041354c(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        puStack_50 = (undefined4 *)0x580b59;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    puStack_50 = &DAT_00980690;
    puStack_54 = (undefined *)0x580b6a;
    FUN_00403191();
    puStack_50 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_54 = (undefined *)0x580b77;
    FUN_00403191();
    puStack_50 = (undefined4 *)(unaff_EBP + -0x3c);
    puStack_54 = (undefined *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_58 = 0x580b8b;
    uVar4 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + 0x14) = &uStack_58;
    FUN_004033a1(uVar4);
    iVar6 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar6);
    FUN_00402660();
    psVar5 = (short *)FUN_00404a02(iVar6);
    sVar1 = *psVar5;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (sVar1 == 8) {
      puStack_54 = *(undefined **)(psVar5 + 4);
    }
    else {
      puStack_54 = &DAT_0097812c;
    }
    puStack_50 = (undefined4 *)0xffffffff;
    uStack_58 = 0x580bd1;
    FUN_00454081();
    puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_54 = (undefined *)0x580bde;
    puStack_50 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_50 < 0) {
      puStack_54 = (undefined *)0x580be9;
      FUN_00878dfb();
    }
    puStack_50 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_54 = (undefined *)0x580bf6;
    puStack_50 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_50 < 0) {
      puStack_54 = (undefined *)0x580c01;
      FUN_00878dfb();
    }
    puStack_50 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_54 = (undefined *)0x580c0e;
    puStack_50 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_50 < 0) {
      puStack_54 = (undefined *)0x580c19;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_50 = (undefined4 *)0x580c25;
    FUN_00402676();
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  puStack_50 = (undefined4 *)(unaff_EBP + -0x10);
  *puVar2 = 0;
  puStack_54 = (undefined *)0x580c62;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_50 = (undefined4 *)0x580c70;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


