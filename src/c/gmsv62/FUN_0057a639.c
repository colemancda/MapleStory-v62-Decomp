/* FUN_0057a639 - 0x0057a639 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0057a639(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = FUN_004029b9(0x104);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0057a093();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar2 != 0) & uVar2 - 8;
  FUN_0057bb8a();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      uVar5 = 3;
      goto LAB_0057a751;
    }
    FUN_0057bb37(*(undefined4 *)(unaff_EBP + -0x18));
  }
  FUN_0057abbc(6,1);
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x52f);
  uVar5 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004de636(0x16a,0xdb,uVar5,10,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar4 = FUN_0057ab2e();
  if (iVar4 == 1) {
    puVar3 = (undefined4 *)FUN_0045b90e(unaff_EBP + 8);
    uVar5 = *puVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    uVar5 = FUN_0087b6ab(uVar5);
  }
  else {
    uVar5 = 0xffffffff;
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00414ebb();
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == *(int *)(unaff_EBP + -0x18))) {
    FUN_0045e621();
  }
LAB_0057a751:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0057bba7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


