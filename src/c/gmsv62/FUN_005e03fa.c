/* FUN_005e03fa - 0x005e03fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005e03fa(void)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar1 = FUN_004538dc(*(undefined4 *)(unaff_EBP + 0xc),0,0);
  if (iVar1 < 0) {
    uVar4 = *extraout_ECX;
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414edd(uVar4,0xffffffff);
  }
  else {
    uVar4 = 0xffffffff;
    sVar2 = _strlen(*(char **)(unaff_EBP + 0xc));
    uVar4 = FUN_0045ece0(unaff_EBP + -0x18,sVar2 + iVar1,uVar4);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0045ece0(unaff_EBP + -0x14,0,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004653c5(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 0x10));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0045e02d(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


