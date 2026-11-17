/* FUN_00776813 - 0x00776813 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00776813(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x24);
  iVar1 = *(int *)(iVar2 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00776a20(*(undefined4 *)(iVar2 + 0x818),unaff_EBP + -0x50);
    if (iVar2 != -1) {
      iVar2 = FUN_00429303();
      if (iVar2 != 0) {
        FUN_004e9ed9(unaff_EBP + -0x4c);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00773f2e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


