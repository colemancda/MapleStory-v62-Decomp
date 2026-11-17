/* FUN_004f1f89 - 0x004f1f89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004f1f89(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd(*(undefined4 *)(unaff_EBP + 0xc),0xffffffff);
  iVar1 = **(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + -4);
  }
  uVar3 = FUN_0045efbb(iVar1,uVar3);
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = 0;
  FUN_00414f8b(uVar3);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


