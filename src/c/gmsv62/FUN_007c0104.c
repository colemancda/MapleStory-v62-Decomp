/* FUN_007c0104 - 0x007c0104 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007c0104(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_007c16cd(unaff_EBP + 8,unaff_EBP + -0x14);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004f6e32(0);
    }
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004f6e32(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


