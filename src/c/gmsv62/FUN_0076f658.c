/* FUN_0076f658 - 0x0076f658 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076f658(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x24);
  iVar1 = *(int *)(iVar2 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_0076fa45(*(undefined4 *)(iVar2 + 0x818),unaff_EBP + -0x5c);
    if (iVar2 == -1) {
      *(undefined4 *)(unaff_EBP + -4) = 1;
    }
    else {
      iVar2 = unaff_EBP + -0x58;
      FUN_00429303(iVar2);
      FUN_004ea0ac(iVar2);
      *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x818) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 2;
    }
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


