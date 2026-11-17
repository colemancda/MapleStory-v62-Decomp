/* FUN_0072c4ff - 0x0072c4ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0072c4ff(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined *puVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar2 = (uint)*(byte *)(*(int *)(extraout_ECX + 0xa4) + *(int *)(unaff_EBP + 0xc) * 2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (uVar2 < 10) {
    puVar3 = &DAT_0096477c;
  }
  else {
    uVar2 = uVar2 + 0x37;
    puVar3 = &DAT_0096b620;
  }
  FUN_00434e21(unaff_EBP + -0x10,puVar3,uVar2);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


