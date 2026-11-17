/* FUN_0062df7e - 0x0062df7e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0062df7e(void)

{
  int iVar1;
  int unaff_EBP;
  undefined1 uVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0062f1bc(unaff_EBP + 0xc,unaff_EBP + -0x14);
  iVar1 = *(int *)(unaff_EBP + -0x10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(iVar1 + 2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_004b8ba3(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


