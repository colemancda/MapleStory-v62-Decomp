/* FUN_0057a34d - 0x0057a34d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0057a34d(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined1 uVar6;
  
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
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      uVar6 = 3;
      goto LAB_0057a437;
    }
    FUN_0057bb37(*(undefined4 *)(unaff_EBP + -0x14));
  }
  FUN_0057abbc(3,*(undefined4 *)(unaff_EBP + 8));
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x52d);
  uVar1 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004de636(0x16a,0xdb,uVar1,10,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar5 = FUN_0057ab2e();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == *(int *)(unaff_EBP + -0x14))) {
    FUN_0045e621();
  }
  uVar6 = iVar5 != 0;
LAB_0057a437:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0057bba7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


