/* ptr_006ab004 - 0x006ab004 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006ab004(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *extraout_ECX;
  IBinding *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puStack_10;
  
  iVar1 = FUN_006aabac();
  if (iVar1 == 2) {
    FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x10) = 4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  else {
    FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x10) = 8;
    *(undefined4 *)(unaff_EBP + -4) = 5;
  }
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    FUN_00414ebb();
  }
  *(IBinding **)(unaff_EBP + -4) = unaff_EBX;
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    FUN_00414ebb();
  }
  FUN_00471102();
  if (*(IBinding **)(unaff_ESI + 0x580) == unaff_EBX) {
    FUN_00679d86();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
    *(undefined4 *)(unaff_EBP + -4) = 7;
  }
  else {
    FUN_00679d86();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 6;
  }
  FUN_007d4073();
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
    FUN_00402676();
  }
  *(IBinding **)(unaff_EBP + -4) = unaff_EBX;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    FUN_00402676();
  }
  iVar1 = DAT_00978358 + 0x78;
  puStack_10 = &stack0xfffffff4;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  FUN_0043f93c();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_10;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_10 = extraout_ECX;
  FUN_00486ada(&puStack_10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0043f93c(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00424e27();
  uVar2 = FUN_0043210d();
  FUN_00424e82(uVar2);
  FUN_0042cf11(uVar2);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (*(IBinding **)(unaff_EBP + -0x18) != unaff_EBX) {
    (**(code **)(*(int *)*(IBinding **)(unaff_EBP + -0x18) + 8))();
  }
  if ((*(IBinding **)(unaff_ESI + 0x584) == unaff_EBX) ||
     (*(IBinding **)(unaff_ESI + 0x580) != unaff_EBX)) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_ESI + 0x5a0),unaff_EBX);
    *(IBinding **)(unaff_ESI + 0x57c) = unaff_EBX;
    *(IBinding **)(unaff_ESI + 0x578) = unaff_EBX;
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x58c) + 4) + 0x1c))();
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x594) + 4) + 0x1c))();
    FUN_00455c59();
    if (*(IBinding **)(unaff_EBP + -0x20) != unaff_EBX) {
      FUN_0045e7c2();
    }
    puStack_10 = (undefined1 *)0x6ab227;
    FUN_00458c4f();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(IBinding **)(unaff_EBP + -0x28) != unaff_EBX) {
      puStack_10 = (undefined1 *)0x6ab249;
      InterlockedIncrement((LONG *)(*(IBinding **)(unaff_EBP + -0x28) + 4));
    }
    puStack_10 = (undefined1 *)0x6ab254;
    FUN_006ab2ec();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_004653ef();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(IBinding **)(unaff_EBP + -0x20) != unaff_EBX) {
      FUN_00449913();
    }
    if (*(IBinding **)(unaff_ESI + 0x9c) != unaff_EBX) {
      FUN_00526726();
      FUN_0074d6fb();
      puStack_10 = *(undefined1 **)(unaff_ESI + 0x84);
      FUN_00759767(*(undefined4 *)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -0x20) + 0x14);
    }
    FUN_008161f1();
    *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
    if (*(IBinding **)(unaff_EBP + -0x28) != unaff_EBX) {
      FUN_00449913();
      *(IBinding **)(unaff_EBP + -0x28) = unaff_EBX;
    }
  }
  else if (DAT_00979178 != unaff_EBX) {
    FUN_00815de9();
    if (DAT_00979178 != unaff_EBX) {
      (*(code *)**(undefined4 **)(DAT_00979178 + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


