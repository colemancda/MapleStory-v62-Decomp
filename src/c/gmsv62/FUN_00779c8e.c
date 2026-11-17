/* FUN_00779c8e - 0x00779c8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00779c8e(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *_Str1;
  int extraout_ECX;
  char *_Str2;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 0x14);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  FUN_0078284d();
  if (*(int *)(DAT_00978134 + 0x90) == 0) {
    iVar5 = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(DAT_00978134 + 0x90) + -4);
    *(int *)(unaff_EBP + -0x10) = iVar5;
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar4 = extraout_ECX;
  if (0 < iVar5) {
    do {
      FUN_00414f8b(*(int *)(DAT_00978134 + 0x90) + *(int *)(unaff_EBP + -0x18) * 4);
      iVar3 = FUN_0078288a(0xffffffff);
      FUN_00414f8b(unaff_EBP + -0x48);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      iVar4 = *(int *)(unaff_EBP + -0x18);
      iVar5 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x44);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(unaff_EBP + -0x40);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(unaff_EBP + -0x3c);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    } while (iVar4 < iVar5);
    iVar4 = *(int *)(unaff_EBP + -0x20);
    iVar5 = *(int *)(unaff_EBP + -0x10);
  }
  *(int *)(*(int *)(iVar4 + 0x10) + 0x77c) = iVar5;
  iVar3 = 1;
  if (iVar5 < 1) {
    *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x780) = 1;
  }
  else {
    *(int *)(*(int *)(iVar4 + 0x10) + 0x780) = (iVar5 + 1) / 2;
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar5 != 1 && -1 < iVar5 + -1) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    do {
      if (iVar3 < iVar5) {
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x18) + 0x14;
        *(int *)(unaff_EBP + -0x1c) = iVar5 - iVar3;
        do {
          _Str2 = *(char **)(*(int *)(unaff_EBP + -0x14) + *piVar1);
          iVar4 = *(int *)(unaff_EBP + -0x18);
          if (_Str2 == (char *)0x0) {
            _Str2 = DAT_00980dfc;
          }
          _Str1 = *(char **)(*piVar1 + iVar4);
          if (_Str1 == (char *)0x0) {
            _Str1 = DAT_00980dfc;
          }
          iVar3 = _strcmp(_Str1,_Str2);
          if (0 < iVar3) {
            iVar4 = iVar4 + *piVar1;
            FUN_00414f8b(iVar4);
            iVar3 = *piVar1;
            *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar4 + 4);
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar4 + 8);
            *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar4 + 0xc);
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar4 + 0x10);
            iVar5 = *(int *)(unaff_EBP + -0x14) + iVar3;
            iVar3 = *(int *)(unaff_EBP + -0x18) + iVar3;
            FUN_00414f8b(iVar5);
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
            *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
            *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
            iVar5 = *(int *)(unaff_EBP + -0x14) + *piVar1;
            FUN_00414f8b(unaff_EBP + -0x34);
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(unaff_EBP + -0x30);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(unaff_EBP + -0x2c);
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
            *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
            iVar5 = *(int *)(unaff_EBP + -0x10);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x14;
          piVar2 = (int *)(unaff_EBP + -0x1c);
          *piVar2 = *piVar2 + -1;
        } while (*piVar2 != 0);
      }
      iVar4 = *(int *)(unaff_EBP + -0x20);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x14;
      iVar3 = iVar4 + 1;
      *(int *)(unaff_EBP + -0x20) = iVar3;
    } while (iVar4 < iVar5 + -1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


