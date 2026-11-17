/* FUN_0084e8b6 - 0x0084e8b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084e8b6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_0042459a();
  iVar2 = FUN_004029b9(0x8c);
  *(int *)(unaff_EBP + 8) = iVar2;
  iVar3 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_007e160b(1,iVar1 == 0x414ec0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
  *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar4 != 0) & uVar4 - 8;
  FUN_0083e30d();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004bc6a2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0083e32a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


