/* FUN_0083432d - 0x0083432d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0083432d(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_008343a7(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0062f407(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_005ee767();
  if ((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -4) != 0)) {
    FUN_008343cb(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 8));
    uVar2 = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005ee767();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


