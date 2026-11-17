/* FUN_004b8410 - 0x004b8410 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004b8410(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_004b95d3(unaff_EBP + 0xc,unaff_EBP + -0x10);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (iVar2 != 0) {
    FUN_004b8375(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


