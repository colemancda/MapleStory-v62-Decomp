/* ptr_007fe800 - 0x007fe800 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_007fe800(void)

{
  uint in_EAX;
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EBX + 0x244) + 100U < in_EAX) && (unaff_EDI != 0)) {
    iVar1 = FUN_00614a21();
    if (iVar1 == 0) {
      iVar1 = FUN_004cd670(unaff_EDI + 0x148,*(undefined4 *)(unaff_EDI + 0x150));
      if (iVar1 != 0) {
        iVar1 = FUN_004cd670(unaff_EDI + 0x124,*(undefined4 *)(unaff_EDI + 300));
        if (iVar1 == 0) {
          iVar1 = FUN_004cd670(unaff_EDI + 0x118,*(undefined4 *)(unaff_EDI + 0x120));
          if (iVar1 == 0) goto LAB_007fe870;
        }
        *(undefined4 *)(unaff_EBX + 0x25c) = *(undefined4 *)(unaff_EBX + 0x24c);
      }
    }
  }
LAB_007fe870:
  FUN_007f7fd3(*(undefined4 *)(unaff_EBX + 0x25c),0);
  *(undefined4 *)(unaff_EBX + 0x240) = *(undefined4 *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBX + 0x248) = *(undefined4 *)(unaff_EBP + -0x1c);
  FUN_007f1845(*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


