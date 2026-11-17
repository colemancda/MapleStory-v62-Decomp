/* FUN_0040d076 - 0x0040d076 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0040d076(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    iStack_64 = unaff_EBP + -0x10;
    iStack_68 = 0x40d0ec;
    FUN_0041354c();
  }
  else {
    iStack_64 = unaff_EBP + 0xc;
    iStack_68 = 0x40d0b4;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_64 = *puVar2;
    iStack_68 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_6c = 0x40d0c5;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      iStack_64 = 0x40d0dc;
      FUN_00403384();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iStack_64 = unaff_EBP + 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(int *)(unaff_EBP + 0xc) = iVar5;
  *(int *)(unaff_EBP + -0x20) = extraout_ECX + 0x1a8;
  iStack_68 = 0x40d10e;
  iVar3 = FUN_00415a43();
  if (iVar3 == 0) {
    iStack_64 = 0x40d122;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar3 != 0) {
      FUN_0040d2f3();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_64 = 0x40d145;
    FUN_00411a5b();
    iStack_64 = 0x40d153;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_64 = 0x40d160;
    FUN_00403191();
    iStack_64 = 0;
    iStack_68 = unaff_EBP + -0x4c;
    iStack_6c = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_70 = 0x40d176;
    uVar4 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_70;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_68 = 0x40d1a8;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    if (iVar3 != 0) {
      iStack_64 = 0x40d1be;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_64 = 0x40d1cf;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_64 = 0x40d1dc;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_64 = 0x40d1e7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_64 = 0x40d1f4;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_64 = 0x40d1ff;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_64 = 0x40d20c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_64 = 0x40d217;
      FUN_00878dfb();
    }
    iStack_64 = 0x40d225;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x28) + 0xc),*(IBinding **)(unaff_EBP + 0xc));
    iStack_64 = 0x40d237;
    FUN_00411a1d();
    iVar3 = *(int *)(unaff_EBP + -0x28);
    iStack_64 = unaff_EBP + -0x1c;
    *(int *)(unaff_EBP + -0x1c) = iVar5;
    iStack_68 = 0x40d24d;
    uVar4 = FUN_00415a97();
    *(undefined4 *)(iVar3 + 0x14) = uVar4;
    iVar5 = *(int *)(unaff_EBP + -0x28);
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar5 + 0x10) = uVar4;
    iVar3 = *(int *)(unaff_EBP + -0x28);
    iVar5 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar5 + 4) = iVar3;
    if (iVar3 != 0) {
      iStack_64 = 0x40d273;
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      iStack_64 = 0x40d28b;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    iVar3 = *(int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x28);
    uVar4 = (*DAT_0097b704)();
    iVar5 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar3 + 0x10) = uVar4;
    iVar1 = *(int *)(unaff_EBP + -0x28);
    *(int *)(iVar5 + 4) = iVar1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iStack_64 = 0x40d2b7;
      InterlockedIncrement((LONG *)(iVar1 + 4));
      iVar3 = *(int *)(unaff_EBP + -0x28);
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  if (iVar3 != 0) {
    iStack_64 = 0x40d2d2;
    FUN_004130b5();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


