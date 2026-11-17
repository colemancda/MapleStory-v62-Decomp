/* FUN_0058735b - 0x0058735b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058735b(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_004029b9(0x114);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00587422();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_005889dc();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00587ede(2,*(undefined4 *)(unaff_EBP + 8));
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0xbae);
  uVar1 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004de636(0x16a,0xdb,uVar1,10,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  FUN_00587e50();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005889f9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


