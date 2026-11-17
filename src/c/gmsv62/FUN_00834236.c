/* FUN_00834236 - 0x00834236 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00834236(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  uVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (0 < *(int *)(unaff_EBP + 8)) {
    iVar1 = FUN_0062ae44(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x10);
    if (((iVar1 != 0) && (*(int *)(unaff_EBP + -0x10) != 0)) &&
       (*(int *)(*(int *)(unaff_EBP + -0x10) + -4) != 0)) {
      FUN_008343cb(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 0xc));
      uVar2 = 1;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005ee767();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


