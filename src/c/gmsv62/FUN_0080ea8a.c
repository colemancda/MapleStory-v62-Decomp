/* FUN_0080ea8a - 0x0080ea8a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080ea8a(void)

{
  int extraout_ECX;
  int iVar1;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  
  FUN_00879bb8();
  iVar2 = 0;
  if (*(int *)(extraout_ECX + 0xa0) < 0) goto LAB_0080eb4b;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(extraout_ECX + 0xa4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 < 1) {
LAB_0080eaf8:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    iVar1 = extraout_ECX + 0xa8;
    do {
      if (*(int *)(extraout_ECX + 0xa0) != iVar2) {
        iVar3 = iVar1;
        FUN_004655d4(0xffffffff);
        FUN_00414f8b(iVar3);
      }
      FUN_00414edd(&DAT_00978474,0xffffffff);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(extraout_ECX + 0xa4));
    if (*(int *)(unaff_EBP + -0x10) == 0) goto LAB_0080eaf8;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -4);
  }
  iVar2 = 0;
  if (0 < *(int *)(unaff_EBP + -0x14)) {
    do {
      FUN_00414f8b(*(int *)(unaff_EBP + -0x10) + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_EBP + -0x14));
  }
  *(int *)(extraout_ECX + 0xa4) = *(int *)(extraout_ECX + 0xa4) + -1;
  *(undefined4 *)(extraout_ECX + 0xa0) = 0xffffffff;
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045f10c();
LAB_0080eb4b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


