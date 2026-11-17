/* FUN_004e67c9 - 0x004e67c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004e67c9(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if ((iVar1 < 0) || (*(int *)(extraout_ECX + 0x1e8) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(extraout_ECX + 0x204 + iVar1 * 8) == 0) {
      uVar2 = FUN_005db4cd(unaff_EBP + -0x14,iVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_004f13b0(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004f182a(0);
      }
    }
    uVar2 = *(undefined4 *)(extraout_ECX + 0x204 + iVar1 * 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


