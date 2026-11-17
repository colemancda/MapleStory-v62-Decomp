/* FUN_00704b95 - 0x00704b95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00704b95(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_004b95d3(unaff_EBP + 0xc,unaff_EBP + -0x18);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    iVar2 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    iVar2 = unaff_EBP + -0x18;
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(iVar2);
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


