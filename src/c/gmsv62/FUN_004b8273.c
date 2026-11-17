/* FUN_004b8273 - 0x004b8273 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004b8273(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_004b8410(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0xc));
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,(*(int *)(unaff_EBP + -0x1c) != 0) + 0x787);
  uVar2 = *puVar1;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_00434e21(unaff_EBP + 0xc,uVar2,*(undefined4 *)(unaff_EBP + -0x18));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(uVar2);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


