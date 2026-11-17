/* FUN_005ea71a - 0x005ea71a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ea71a(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_005c5810();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005d0c41();
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x14);
  if (iVar1 < 0xb) {
    iVar1 = 10;
  }
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (0x8b < iVar1) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x8c;
  }
  FUN_005d0f1a((double)*(int *)(unaff_EBP + -0x10) * _DAT_008e8cd0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


