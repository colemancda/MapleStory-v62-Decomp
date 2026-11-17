/* ptr_00823b50 - 0x00823b50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00823b50(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  char *pcStack_4;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_4 = (char *)0x823b61;
  (*DAT_0097b660)();
  pcStack_4 = (char *)0x823b66;
  FUN_00823381();
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    pcStack_4 = (char *)0x823b70;
    uVar1 = FUN_007d8205();
    *(char ***)(unaff_EBP + 0x10) = &pcStack_4;
    uStack_8 = 0xffffffff;
    puStack_c = &DAT_00978474;
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    pcStack_4 = (char *)0x0;
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
  pcStack_4 = s_MapleStoryGlobal____MapleStory___0096c564;
  uStack_8 = 0x823c3c;
  FUN_007d2937();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


