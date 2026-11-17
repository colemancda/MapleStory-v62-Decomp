/* FUN_0047c713 - 0x0047c713 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0047c713(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar2 = FUN_0047ca3f(*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x100;
  iVar3 = (*DAT_0097b6b8)(uVar2,*(undefined4 *)(unaff_EBP + 0x10),0,unaff_EBP + -0x14,
                          unaff_EBP + -0x118,unaff_EBP + -0x10);
  if (((iVar3 == 0) && (*(int *)(unaff_EBP + -0x14) == 1)) &&
     (*(char *)(unaff_EBP + -0x119 + *(int *)(unaff_EBP + -0x10)) == '\0')) {
    iVar3 = unaff_EBP + -0x118;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 0x14);
  }
  FUN_00414edd(iVar3,0xffffffff);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


