/* FUN_004834bf - 0x004834bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_004834bf(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar2 = DAT_00980dfc;
  }
  iVar1 = DAT_00980dfc;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  iVar2 = FUN_008858f0(iVar1,iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2 == 0;
}


