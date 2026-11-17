/* FUN_0045ece0 - 0x0045ece0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0045ece0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 == -1) {
    iVar4 = *extraout_ECX;
    iVar5 = *(int *)(unaff_EBP + 0xc);
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414edd(iVar4 + iVar5,0xffffffff);
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    iVar4 = iVar4 - *(int *)(unaff_EBP + 0xc);
    iVar1 = *extraout_ECX + *(int *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar5 = iVar4;
    uVar2 = FUN_00415015(iVar4,0);
    FUN_00879c20(uVar2,iVar1,iVar5);
    FUN_004150c0(iVar4);
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414f8b(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


