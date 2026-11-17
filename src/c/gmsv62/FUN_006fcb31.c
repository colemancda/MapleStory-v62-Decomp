/* FUN_006fcb31 - 0x006fcb31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006fcb31(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_0062f6cd(unaff_EBP + 8,unaff_EBP + -0x20);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    iVar2 = unaff_EBP + -0x18;
  }
  else {
    iVar2 = unaff_EBP + -0x20;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x14) != 0)) {
    FUN_0062f18d(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_0062f18d(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


