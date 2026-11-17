/* ptr_00401234 - 0x00401234 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00401234(IBinding *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 uStack_c;
  int *piStack_8;
  undefined1 *puStack_4;
  
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_4 = (undefined1 *)0x40123f;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  param_1 = (IBinding *)(unaff_EBP + -0x1c);
  param_1 = (IBinding *)FUN_00404b30();
  if (((int)param_1 < (int)unaff_ESI) && (param_1 != (IBinding *)0x80004002)) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < (int)unaff_ESI) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < (int)unaff_ESI) {
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  param_1 = (IBinding *)FUN_00402bc3();
  if ((int)param_1 < (int)unaff_ESI) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x14) == unaff_ESI) {
    param_1 = (IBinding *)0x80004003;
    FUN_00878dfb();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x1c);
  param_1 = (IBinding *)FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004035f5();
  param_1 = *(IBinding **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (param_1 != (IBinding *)unaff_ESI) {
    (**(code **)(*(int *)param_1 + 8))();
  }
  param_1 = (IBinding *)(unaff_EBP + -0x50);
  VariantInit((VARIANTARG *)param_1);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  do {
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      param_1 = (IBinding *)0x80004003;
      FUN_00878dfb();
    }
    piStack_8 = *(int **)(unaff_EBP + -0x18);
    param_1 = (IBinding *)(unaff_EBP + -0x20);
    puStack_4 = (undefined1 *)0x1;
    uStack_c = 0x401318;
    iVar2 = (**(code **)(*piStack_8 + 0xc))();
    if (iVar2 != 0) {
      param_1 = *(IBinding **)(unaff_EBP + -0x14);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_00973a64,param_1);
      puStack_4 = &stack0x00000004;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000004;
      piStack_8 = (int *)0x401455;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0040263d();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_4 = (undefined1 *)0x401470;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      param_1 = (IBinding *)0x40147b;
      DAT_00973a5c = FUN_00403213();
      param_1 = (IBinding *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        param_1 = (IBinding *)iVar2;
        FUN_00878dfb();
        param_1 = (IBinding *)extraout_ECX_00;
      }
      puStack_4 = &stack0x00000004;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000004;
      piStack_8 = (int *)0x4014ab;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_0040263d();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_4 = (undefined1 *)0x4014c6;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      param_1 = (IBinding *)0x4014d1;
      DAT_00973a58 = FUN_00403213();
      param_1 = (IBinding *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        param_1 = (IBinding *)iVar2;
        FUN_00878dfb();
        param_1 = (IBinding *)extraout_ECX_01;
      }
      puStack_4 = &stack0x00000004;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000004;
      piStack_8 = (int *)0x401501;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_0040263d();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_4 = (undefined1 *)0x40151c;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      param_1 = (IBinding *)0x401527;
      DAT_00973a54 = FUN_00403213();
      param_1 = (IBinding *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      param_1 = (IBinding *)FUN_00402bc3();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)(unaff_EBP + -0x60);
      VariantInit((VARIANTARG *)param_1);
      puStack_4 = (undefined1 *)0x401554;
      param_1 = (IBinding *)FUN_00402e32();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      VariantInit((VARIANTARG *)param_1);
      puStack_4 = (undefined1 *)0x401574;
      param_1 = (IBinding *)FUN_00402e32();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)0x0;
      puStack_4 = (undefined1 *)(unaff_EBP + -0x60);
      piStack_8 = (int *)(unaff_EBP + -0x40);
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_c;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_004059fd(&DAT_00973a48);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00404a02(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_4 = (undefined1 *)0x4015ca;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
      param_1 = (IBinding *)(unaff_EBP + -0x24);
      param_1 = (IBinding *)FUN_00404b30();
      if (((int)param_1 < 0) && (param_1 != (IBinding *)0x80004002)) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      param_1 = (IBinding *)FUN_00402bc3();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      param_1 = (IBinding *)FUN_00402bc3();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      param_1 = (IBinding *)FUN_00402bc3();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      param_1 = (IBinding *)FUN_00402bc3();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = *(IBinding **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (param_1 != (IBinding *)0x0) {
        (**(code **)(*(int *)param_1 + 8))();
      }
      param_1 = *(IBinding **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (param_1 != (IBinding *)0x0) {
        (**(code **)(*(int *)param_1 + 8))();
      }
      param_1 = *(IBinding **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (param_1 != (IBinding *)0x0) {
        (**(code **)(*(int *)param_1 + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000004;
    puStack_4 = (undefined1 *)0x40132e;
    FUN_00402e8e();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_4 = (undefined1 *)0x401349;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if ((*(short *)(unaff_EBP + -0x40) == 0) ||
       ((*(short *)(unaff_EBP + -0x40) == 8 && (**(short **)(unaff_EBP + -0x38) == 0)))) {
LAB_00401381:
      FUN_00403191();
      param_1 = (IBinding *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_4 = (undefined1 *)0x40139a;
      FUN_004031b7();
      param_1 = (IBinding *)(unaff_EBP + -0x70);
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_4;
      piStack_8 = *(int **)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_c = 0x4013b4;
      puStack_4 = extraout_ECX;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_8 = (int *)0x4013c0;
      FUN_0040263d();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_8 = (int *)0x4013cb;
      FUN_00404992();
      param_1 = (IBinding *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      param_1 = (IBinding *)FUN_00402bc3();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
      param_1 = (IBinding *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      param_1 = (IBinding *)FUN_00402bc3();
      if ((int)param_1 < 0) {
        FUN_00878dfb();
      }
    }
    else {
      param_1 = (IBinding *)0x3;
      puStack_4 = (undefined1 *)(unaff_EBP + -0x40);
      piStack_8 = (int *)(unaff_EBP + -0x40);
      uStack_c = 0x401375;
      iVar2 = FUN_00402bed();
      if (iVar2 < 0) goto LAB_00401381;
    }
    param_1 = (IBinding *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
    param_1 = (IBinding *)(unaff_EBP + -0x50);
    param_1 = (IBinding *)FUN_00402bc3();
    if ((int)param_1 < 0) {
      FUN_00878dfb();
    }
  } while( true );
}


