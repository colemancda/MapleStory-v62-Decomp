/* FUN_00823b57 - 0x00823b57 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00823b57(void)

{
  undefined4 uVar1;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  (*DAT_0097b660)();
  FUN_00823381();
  if (*(int *)(unaff_EBP + -0x18) != unaff_EBX) {
    uVar1 = FUN_007d8205();
    *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffffffc;
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00978474;
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    FUN_00414edd();
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_8;
    puStack_c = (undefined1 *)0xffffffff;
    *(undefined4 *)(unaff_EBP + -4) = 0x22;
    FUN_0045f0f3(&DAT_00978474);
    *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_c;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00679d22(&puStack_c,0x389);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_005e7131();
  }
  uStack_8 = 0x823c3c;
  FUN_007d2937();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


