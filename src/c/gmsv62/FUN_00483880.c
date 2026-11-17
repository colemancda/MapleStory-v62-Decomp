/* FUN_00483880 - 0x00483880 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00483880(void)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  char *_Str1;
  int iVar4;
  undefined4 uVar5;
  char *_Str2;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  sVar1 = _strlen(&DAT_00964364);
  FUN_0045efbb(&DAT_00964364,sVar1);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while (iVar4 = *(int *)(unaff_EBP + 8), iVar4 != 0) {
    iVar2 = FUN_0087b4c0(iVar4,0x20);
    if (iVar2 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 - iVar4;
    }
    if (iVar2 < 0) break;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piVar3 = (int *)FUN_0045e070(unaff_EBP + -0x14,iVar2);
      _Str2 = *(char **)(unaff_EBP + 0xc);
      if (*(char **)(unaff_EBP + 0xc) == (char *)0x0) {
        _Str2 = DAT_00980dfc;
      }
      _Str1 = (char *)*piVar3;
      if ((char *)*piVar3 == (char *)0x0) {
        _Str1 = DAT_00980dfc;
      }
      iVar4 = _strcmp(_Str1,_Str2);
      FUN_00414ebb();
      if (iVar4 == 0) goto LAB_0048391c;
LAB_004839d3:
      bVar6 = false;
      goto LAB_004839e2;
    }
LAB_0048391c:
    if (*(int *)(unaff_EBP + -0x10) == 1) {
      uVar5 = FUN_0045e070(unaff_EBP + -0x18,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414f8b(uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 2) {
      uVar5 = FUN_0045e070(unaff_EBP + -0x1c,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414f8b(uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 3) {
      uVar5 = FUN_0045e070(unaff_EBP + -0x20,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414f8b(uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 4) goto LAB_004839d3;
    uVar5 = FUN_0045e053(unaff_EBP + -0x24,iVar2 + 1,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  bVar6 = *(int *)(unaff_EBP + -0x10) == 4;
LAB_004839e2:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar6;
}


