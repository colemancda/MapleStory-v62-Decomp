/* FUN_004b3a49 - 0x004b3a49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b3a49(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar1 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar1 != 0) & uVar1 - 8;
    FUN_004b3f35();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004b3ee0(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    uVar1 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar1 != 0) & uVar1 - 8;
    FUN_004b3f35();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_004b4039(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_004b3f35();
    FUN_004b3f52();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  FUN_004b3f52();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


