/* FUN_004fae10 - 0x004fae10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004fae10(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xa8f);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_00434e21(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 0xc));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(uVar2);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


