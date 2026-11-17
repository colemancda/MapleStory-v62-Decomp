/* FUN_006aaf1f - 0x006aaf1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006aaf1f(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_3c;
  int iStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = *(int *)(extraout_ECX + 0x580);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    if (*(int *)(extraout_ECX + 0x584) == 0) {
      iVar1 = FUN_006aabac();
      if (iVar1 == 2) {
        iStack_34 = unaff_EBP + -0x18;
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x10) = 4;
        *(undefined1 *)(unaff_EBP + -4) = 4;
      }
      else {
        iStack_34 = unaff_EBP + -0x1c;
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x10) = 8;
        *(undefined4 *)(unaff_EBP + -4) = 5;
      }
      iStack_34 = 0x6ab05c;
      FUN_00414f8b();
      *(undefined4 *)(unaff_EBP + -4) = 4;
      if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(byte *)(unaff_EBP + -0x10) & 4) == 0) goto LAB_006ab08a;
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    }
    else {
      iStack_34 = unaff_EBP + -0x1c;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_34 = 0x6aaff7;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
  }
  else {
    iVar1 = FUN_006aabac();
    if (iVar1 == 2) {
      iStack_34 = unaff_EBP + -0x1c;
      FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      iStack_34 = unaff_EBP + -0x18;
      FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
    }
    iStack_34 = 0x6aaf9b;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) == 0) goto LAB_006ab08a;
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  }
  FUN_00414ebb();
LAB_006ab08a:
  iStack_34 = unaff_EBP + -0x14;
  FUN_00471102();
  if (*(int *)(extraout_ECX + 0x580) == 0) {
    iStack_34 = unaff_EBP + -0x1c;
    piVar2 = (int *)FUN_00679d86();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
    *(undefined4 *)(unaff_EBP + -4) = 7;
  }
  else {
    iStack_34 = unaff_EBP + -0x18;
    piVar2 = (int *)FUN_00679d86();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 6;
  }
  iStack_34 = *piVar2;
  FUN_007d4073();
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    FUN_00402676();
  }
  iStack_34 = *(int *)(extraout_ECX + 0x580);
  iVar1 = DAT_00978358 + 0x78;
  puStack_3c = &stack0xffffffc8;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc8;
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  FUN_0043f93c();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_3c = extraout_ECX_00;
  FUN_00486ada(&puStack_3c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0043f93c(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00424e27();
  uVar3 = FUN_0043210d();
  FUN_00424e82(uVar3);
  FUN_0042cf11(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_34 = 0x6ab17a;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  if ((*(int *)(extraout_ECX + 0x584) == 0) || (*(int *)(extraout_ECX + 0x580) != 0)) {
    iStack_34 = 0x6ab1c4;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5a0),
               (IBinding *)0x0);
    *(undefined4 *)(extraout_ECX + 0x57c) = 0;
    *(undefined4 *)(extraout_ECX + 0x578) = 0;
    iStack_34 = 0x6ab1e0;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x58c) + 4) + 0x1c))();
    iStack_34 = 1;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x594) + 4) + 0x1c))();
    iStack_34 = 0x6ab1ff;
    FUN_00455c59();
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_34 = 0x6ab210;
      FUN_0045e7c2();
    }
    iStack_34 = *(int *)(extraout_ECX + 0x88);
    puStack_3c = (undefined1 *)0x6ab227;
    FUN_00458c4f();
    *(int **)(unaff_EBP + -0x20) = &iStack_34;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_3c = (undefined1 *)0x6ab249;
      InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x28) + 4));
    }
    puStack_3c = (undefined1 *)0x6ab254;
    FUN_006ab2ec();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_34 = 0x6ab264;
    FUN_004653ef();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_34 = 0x6ab276;
      FUN_00449913();
    }
    if (*(int *)(extraout_ECX + 0x9c) != 0) {
      iStack_34 = 0x6ab28d;
      FUN_00526726();
      FUN_0074d6fb();
      puStack_3c = *(undefined1 **)(extraout_ECX + 0x84);
      iStack_34 = 0;
      FUN_00759767(*(undefined4 *)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -0x20) + 0x14);
    }
    iStack_34 = 0x6ab2bd;
    FUN_008161f1();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      iStack_34 = 0x6ab2ce;
      FUN_00449913();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
  }
  else if (DAT_00979178 != 0) {
    FUN_00815de9();
    if (DAT_00979178 != 0) {
      iStack_34 = 0x6ab1b3;
      (*(code *)**(undefined4 **)(DAT_00979178 + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


