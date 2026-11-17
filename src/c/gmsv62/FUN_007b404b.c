/* FUN_007b404b - 0x007b404b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b404b(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_005df3f8(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    FUN_004b8f25(*(int *)(unaff_EBP + -0x10) + 8,unaff_EBP + 8);
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar1 = FUN_004b8f25(*(undefined4 *)(unaff_EBP + -0x10),0);
      if (iVar1 != 0) goto LAB_007b40f0;
      FUN_004b8f75(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x10));
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 8) + 1;
    }
    else {
      iVar1 = FUN_005d1070(*(undefined4 *)(unaff_EBP + -0x10));
      if (iVar1 == 0) goto LAB_007b40f0;
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 8) + -1;
    }
    FUN_004b8f75(*(int *)(unaff_EBP + -0x10) + 8,unaff_EBP + 0xc);
  }
LAB_007b40f0:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_005e064d(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


