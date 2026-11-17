/* FUN_0040d968 - 0x0040d968 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0040d968(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_64 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_68 = 0x40d99b;
  puVar2 = (undefined4 *)FUN_00679d86();
  iStack_64 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = unaff_EBP + -0x10;
  iStack_6c = 0x40d9ae;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_64 = 0x40d9c5;
    FUN_00403384();
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_64 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(int *)(unaff_EBP + -0x20) = extraout_ECX + 0x200;
  iStack_68 = 0x40d9e9;
  iVar3 = FUN_00416199();
  if (iVar3 == 0) {
    iStack_64 = 0x40d9fd;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar3 != 0) {
      FUN_0040dbec();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_64 = 0x40da20;
    FUN_00411b31();
    iStack_64 = 0x40da2e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_64 = 0x40da3b;
    FUN_00403191();
    iStack_64 = 0;
    iStack_68 = unaff_EBP + -0x4c;
    iStack_6c = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_70 = 0x40da51;
    uVar4 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_70;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_68 = 0x40da83;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar3 != 0) {
      iStack_64 = 0x40da99;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_64 = 0x40daaa;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_64 = 0x40dab7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_64 = 0x40dac2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_64 = 0x40dacf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_64 = 0x40dada;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_64 = 0x40dae7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_64 = 0x40daf2;
      FUN_00878dfb();
    }
    iStack_64 = 0x40db00;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x28) + 0xc),*(IBinding **)(unaff_EBP + -0x14));
    FUN_0041600f();
    iStack_64 = 0x40db16;
    FUN_00412b9a();
    iVar3 = *(int *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_64 = unaff_EBP + 0xc;
    iStack_68 = 0x40db2f;
    uVar4 = FUN_004161ed();
    *(undefined4 *)(iVar3 + 0x14) = uVar4;
    iVar3 = *(int *)(unaff_EBP + -0x28);
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar3 + 0x10) = uVar4;
    iVar1 = *(int *)(unaff_EBP + -0x28);
    iVar3 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      iStack_64 = 0x40db55;
      InterlockedIncrement((LONG *)(iVar1 + 4));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_64 = 0x40db6d;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      iStack_64 = 0x40db7f;
      FUN_00413111();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x28);
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar3 + 0x10) = uVar4;
    iVar1 = *(int *)(unaff_EBP + -0x28);
    iVar3 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar3 + 4) = iVar1;
    iVar5 = 0;
    if (iVar1 != 0) {
      iStack_64 = 0x40dbb4;
      InterlockedIncrement((LONG *)(iVar1 + 4));
      iVar5 = *(int *)(unaff_EBP + -0x28);
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar5 != 0) {
      iStack_64 = 0x40dbcb;
      FUN_00413111();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


