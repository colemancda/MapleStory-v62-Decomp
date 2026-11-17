/* FUN_0047252b - 0x0047252b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0047252b(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    iVar2 = FUN_0087b4c0(iVar1,0x3a);
    if (iVar2 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 - iVar1;
    }
    if (-1 < iVar2) {
      FUN_0045e070(*(undefined4 *)(unaff_EBP + 8),iVar2 + -1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      FUN_00414ebb();
      puVar3 = *(undefined4 **)(unaff_EBP + 8);
      goto LAB_004725a8;
    }
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
LAB_004725a8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


