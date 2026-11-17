/* ptr_00855db9 - 0x00855db9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855db9(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_EBP;
  
  iVar1 = FUN_0042459a();
  if (iVar1 == *(int *)(unaff_EBX + 0x2cac)) {
    uVar2 = FUN_0042459a();
    *(undefined4 *)(unaff_EBX + 0x2cce) = uVar2;
    if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
      FUN_0077e45e();
    }
    if (DAT_00978358 != 0) {
      FUN_007b02be();
    }
    if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
      FUN_0077e45e();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


