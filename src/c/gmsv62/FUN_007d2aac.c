/* FUN_007d2aac - 0x007d2aac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007d2aac(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  (*DAT_0097b534)(*(undefined4 *)(DAT_00973cd8 + 4),6);
  (*DAT_0097b384)(0,unaff_EBP + -0x118,0x104);
  FUN_008280b0(unaff_EBP + -0x118);
  FUN_008280f6(unaff_EBP + -0x118);
  FUN_008280d3(unaff_EBP + -0x118);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x86f);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00434e21(unaff_EBP + -0x10,uVar1,unaff_EBP + -0x118,*(undefined4 *)(unaff_EBP + 8));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  (*DAT_0097b4d0)(*(undefined4 *)(unaff_EBP + -0x10),5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


