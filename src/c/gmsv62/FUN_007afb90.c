/* FUN_007afb90 - 0x007afb90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007afb90(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar3;
  int iVar4;
  
  FUN_00879bb8();
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 0x3f7);
  iVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4);
  }
  while (iVar3 = iVar3 + -1, 0 < iVar3) {
    FUN_00458c4f(unaff_EBP + -0x18,5,iVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(int *)(unaff_EBP + -0x14) != 0) &&
       (pcVar2 = (code *)FUN_0045e2eb(), pcVar2 == ptr_004df8f0)) {
      iVar4 = iVar4 + 1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x17b8) != iVar4) {
    *(int *)(*(int *)(unaff_EBP + -0x10) + 0x17b8) = iVar4;
    FUN_0079601e(iVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


