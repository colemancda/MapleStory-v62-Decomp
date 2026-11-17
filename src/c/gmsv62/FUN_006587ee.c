/* FUN_006587ee - 0x006587ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006587ee(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *_Str1;
  char *_Str2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00657830(4);
    }
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00658a9e();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar1 != 0) {
      FUN_0057bb37();
    }
    iVar2 = FUN_004bc6a2();
    if (iVar2 != 1) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_006589d2:
      FUN_00658abb();
      break;
    }
    FUN_00658a18();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    if (iVar1 != 0) {
      FUN_0045e621();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00658abb();
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00657830(4);
    }
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00658a9e();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffcc;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00679d22(&stack0xffffffcc,0xfd7);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00658a84();
    FUN_0065877e();
    if (iVar1 != 0) {
      FUN_0057bb37();
    }
    iVar2 = FUN_004bc6a2();
    if (iVar2 != 1) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_006589d2;
    }
    FUN_00658a18();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00414ebb();
    _Str2 = *(char **)(unaff_EBP + -0x14);
    if (*(char **)(unaff_EBP + -0x14) == (char *)0x0) {
      _Str2 = DAT_00980dfc;
    }
    _Str1 = DAT_00980dfc;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      _Str1 = *(char **)(unaff_EBP + -0x10);
    }
    iVar2 = _strcmp(_Str1,_Str2);
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
    }
    else {
      FUN_0057a453(0x29);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00658abb();
  } while (*(int *)(unaff_EBP + -0x18) == 0);
  if (iVar1 != 0) {
    FUN_0045e621();
  }
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}


