/* ptr_0040928c - 0x0040928c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall ptr_0040928c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *extraout_ECX;
  undefined1 *puVar5;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  int *unaff_EDI;
  undefined1 *puStack_14;
  int *piStack_10;
  undefined1 *puStack_c;
  
  *(int *)(unaff_EBP + -0x3c) = param_1;
  *(int **)(unaff_EBP + -0x30) = unaff_EDI;
  *(int **)(unaff_EBP + -0x28) = unaff_EDI;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_c = (undefined1 *)0x4092b1;
  FUN_00679d86();
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puStack_c = (undefined1 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_10 = (int *)0x4092c5;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x18) != unaff_EDI) {
    FUN_00403384();
  }
  *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  *(int *)(unaff_EBP + -0x40) = param_1 + 0x88;
  puStack_c = (undefined1 *)0x4092fd;
  iVar1 = FUN_004141af();
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_004029b9();
    *(int **)(unaff_EBP + -0x24) = piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar2 != unaff_EDI) {
      FUN_004097c9();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004117d9();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00403191();
    puStack_c = (undefined1 *)(unaff_EBP + -0x94);
    piStack_10 = (int *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_14 = (undefined1 *)0x409371;
    uVar3 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_14;
    FUN_004033a1(uVar3);
    iVar1 = unaff_EBP + -0xc4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_c = (undefined1 *)0x4093a6;
    piVar2 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x50) = piVar2;
    *(int **)(unaff_EBP + -0x20) = unaff_EDI;
    if (((piVar2 != unaff_EDI) && (iVar1 = FUN_00404b30(), iVar1 < (int)unaff_EDI)) &&
       (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EDI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EDI) {
      FUN_00878dfb();
    }
    puVar5 = (undefined1 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EDI) {
      FUN_00878dfb();
      puVar5 = extraout_ECX;
    }
    puStack_14 = (undefined1 *)&puStack_c;
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_c;
    piStack_10 = (int *)0x3b4;
    puStack_c = puVar5;
    FUN_00679e4e();
    piStack_10 = (int *)(unaff_EBP + -0xd4);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_14 = (undefined1 *)0x40944b;
    FUN_0040263d();
    puStack_14 = (undefined1 *)0x409452;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_c = (undefined1 *)0x40945d;
    piVar2 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x48) = piVar2;
    *(int **)(unaff_EBP + -0x18) = unaff_EDI;
    if (((piVar2 != unaff_EDI) && (iVar1 = FUN_00404b30(), iVar1 < (int)unaff_EDI)) &&
       (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EDI) {
      FUN_00878dfb();
    }
    puStack_c = &stack0xfffffffc;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffffc;
    piStack_10 = (int *)0x4094b2;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_c = (undefined1 *)0x4094c5;
    FUN_0040263d();
    puStack_c = (undefined1 *)0x4094cc;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(short *)(unaff_EBP + -0x84) == 8) {
      FUN_0087a208();
      puStack_c = (undefined1 *)0x4094f3;
      FUN_00409277();
      VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
      piVar2 = *(int **)(*(int *)(unaff_EBP + -0x34) + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (piVar2 == unaff_EDI) {
        FUN_00878dfb();
      }
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_004027b3();
      *(int **)(unaff_EBP + -0x54) = unaff_EDI;
      while( true ) {
        if (*(int **)(unaff_EBP + -0x2c) == unaff_EDI) {
          FUN_00878dfb();
        }
        piStack_10 = *(int **)(unaff_EBP + -0x2c);
        puStack_c = (undefined1 *)0x1;
        puStack_14 = (undefined1 *)0x409561;
        iVar1 = (**(code **)(*piStack_10 + 0xc))();
        if (iVar1 != 0) break;
        puStack_c = (undefined1 *)0x409576;
        FUN_00405a23();
        *(undefined1 **)(unaff_EBP + -0x44) = &stack0xfffffffc;
        puStack_c = (undefined1 *)0x409587;
        FUN_0040810c();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        puStack_c = (undefined1 *)0x409597;
        FUN_004117d5();
        puStack_c = (undefined1 *)0x4095a1;
        FUN_0040263d();
        puStack_c = (undefined1 *)0x4095a8;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_c = (undefined1 *)0x4095bf;
        FUN_00679e4e();
        puStack_c = (undefined1 *)0x4095df;
        iVar1 = FUN_0087c71f();
        FUN_00402fa6();
        if (iVar1 != 0) {
          FUN_00403191();
          piStack_10 = (int *)(unaff_EBP + -0x1c);
          *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_c;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_14 = (undefined1 *)0x409623;
          puStack_c = extraout_ECX_00;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          piStack_10 = (int *)0x40962f;
          FUN_0040263d();
          piStack_10 = (int *)0x409636;
          FUN_00404992();
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iVar1 = FUN_00402bc3();
          if (iVar1 < (int)unaff_EDI) {
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iVar1 = FUN_00402bc3();
        if (iVar1 < (int)unaff_EDI) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (*(int **)(unaff_EBP + -0x1c) != unaff_EDI) {
          FUN_004030b1();
          *(int **)(unaff_EBP + -0x1c) = unaff_EDI;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (*(int **)(unaff_EBP + -0x2c) != unaff_EDI) {
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar1 = FUN_00402bc3();
      if (iVar1 < (int)unaff_EDI) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int **)(unaff_EBP + -0x34) != unaff_EDI) {
        FUN_00412f73();
      }
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x10) + 0xc),*(IBinding **)(unaff_EBP + -0x20));
    FUN_0041179b();
    iVar1 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
    puStack_c = (undefined1 *)0x4096f6;
    uVar3 = FUN_00414203();
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    iVar1 = *(int *)(unaff_EBP + -0x10);
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    piVar2 = *(int **)(unaff_EBP + -0x10);
    iVar1 = *(int *)(unaff_EBP + 8);
    *(int **)(iVar1 + 4) = piVar2;
    if (piVar2 != unaff_EDI) {
      InterlockedIncrement(piVar2 + 1);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EDI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int **)(unaff_EBP + -0x18) != unaff_EDI) {
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x20) != unaff_EDI) {
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    iVar1 = *(int *)(unaff_EBP + -0x10);
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    piVar2 = *(int **)(unaff_EBP + -0x10);
    iVar1 = *(int *)(unaff_EBP + 8);
    *(int **)(iVar1 + 4) = piVar2;
    if (piVar2 != unaff_EDI) {
      InterlockedIncrement(piVar2 + 1);
      piVar2 = *(int **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  if (piVar2 != unaff_EDI) {
    FUN_00412f73();
    *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


