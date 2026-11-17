/* FUN_00428339 - 0x00428339 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00428339(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  
  FUN_00879bb8();
  uStack_60 = 0x428359;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_60 = 0x428367;
  FUN_00403191();
  uStack_60 = 0;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x38);
  puStack_68 = (undefined1 *)(unaff_EBP + -0x28);
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_64 = (undefined1 *)0x4283a9;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    uStack_60 = 0x4283bf;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      uStack_60 = 0x4283d0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_60 = 0x4283dd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_60 = 0x4283e8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_60 = 0x4283f5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_60 = 0x428400;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_60 = 0x42840d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_60 = 0x428418;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    uVar3 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    piVar4 = (int *)FUN_0043670c();
    piVar1 = *(int **)(unaff_EBP + 0xc);
    *piVar4 = (piVar1[2] + *piVar1) / 2;
    piVar4[1] = (piVar1[1] + piVar1[3]) / 2;
    iVar2 = piVar1[2];
    iVar5 = *piVar1;
    piVar4[2] = iVar2 - iVar5;
    piVar4[3] = ((iVar2 - iVar5) * 5) / 6;
    iVar2 = piVar1[3];
    iVar5 = piVar1[1];
    piVar4[4] = iVar2 - iVar5;
    puStack_68 = (undefined1 *)&uStack_60;
    uStack_60 = 6;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_60;
    piVar4[5] = ((iVar2 - iVar5) * 5) / 6;
    puStack_64 = (undefined1 *)0x3ce;
    uStack_6c = 0x428494;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x4284a4;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x4284ab;
    uStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_64 = (undefined1 *)0x4284b5;
    iVar2 = FUN_00412550();
    piVar4[6] = iVar2;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x4284c5;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_60 = 0x4284d2;
      FUN_00878dfb();
    }
    puStack_68 = (undefined1 *)&uStack_60;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_60;
    puStack_64 = (undefined1 *)0x3cf;
    uStack_6c = 0x4284e6;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x4284f6;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x4284fd;
    uStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_64 = (undefined1 *)0x428507;
    iVar2 = FUN_00412550();
    piVar4[7] = iVar2;
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428517;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_60 = 0x428524;
      FUN_00878dfb();
    }
    puStack_68 = (undefined1 *)&uStack_60;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_60;
    puStack_64 = (undefined1 *)0x3d0;
    uStack_6c = 0x428538;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x428548;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x42854f;
    uStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_64 = (undefined1 *)0x428559;
    iVar2 = FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piVar4[8] = iVar2 + *(int *)(unaff_EBP + 8);
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    puStack_68 = (undefined1 *)0x42856c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_60 = 0x428579;
      FUN_00878dfb();
    }
    puStack_68 = (undefined1 *)&uStack_60;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_60;
    puStack_64 = (undefined1 *)0x3d1;
    uStack_6c = 0x42858d;
    FUN_00679e4e();
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_68 = (undefined1 *)0x42859d;
    FUN_0040263d();
    puStack_68 = (undefined1 *)0x4285a4;
    uStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_64 = (undefined1 *)0x4285ae;
    iVar2 = FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piVar4[9] = iVar2 + *(int *)(unaff_EBP + 8);
    puStack_64 = (undefined1 *)(unaff_EBP + -0x58);
    puStack_68 = (undefined1 *)0x4285c1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_60 = 0x4285ce;
      FUN_00878dfb();
    }
    iVar2 = 0;
    while( true ) {
      FUN_0087a1b0();
      uStack_60 = 0;
      uStack_6c = 0x4285e3;
      puStack_68 = (undefined1 *)iVar2;
      puStack_64 = &stack0xffffffa8;
      puStack_68 = (undefined1 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_64;
      uStack_6c = 0x4285ef;
      FUN_004033a1();
      puStack_68 = (undefined1 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_6c = 0x4285ff;
      FUN_0040263d();
      uStack_6c = 0x428606;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_64 = (undefined1 *)0x428611;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + 0xc) = iVar5;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (iVar5 != 0) {
        uStack_60 = 0x428627;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          uStack_60 = 0x428638;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      uStack_60 = 0x428645;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_60 = 0x428650;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) break;
      uStack_60 = 0x42865f;
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004355c6();
      uStack_60 = 0x428669;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,*(IBinding **)(unaff_EBP + 8))
      ;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        uStack_60 = 0x42867a;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      uStack_60 = 0x428691;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


