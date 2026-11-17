/* FUN_00777974 - 0x00777974 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00777974(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(DAT_00978368 + 0x2cac);
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      uVar2 = FUN_008569e9(unaff_EBP + -0x10,iVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00414f8b(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    } while (iVar1 < 5);
    FUN_008161f1(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


