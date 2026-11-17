/* FUN_0057a27a - 0x0057a27a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0057a27a(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_004029b9(0x104);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0057a093();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_0057bb8a();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0057abbc(2,*(undefined4 *)(unaff_EBP + 8));
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x52d);
  uVar1 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004de636(0x16a,0xdb,uVar1,10,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar2 = FUN_0057ab2e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0057bba7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2 != 0;
}


