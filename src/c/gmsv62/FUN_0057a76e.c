/* FUN_0057a76e - 0x0057a76e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057a76e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined *local_18;
  
  FUN_00879bb8();
  local_18 = (undefined *)0x104;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_18 = (undefined *)0x57a7a2;
    iVar1 = FUN_0057a093();
  }
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar2 != 0) & uVar2 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_18 = (undefined *)0x57a7c8;
  FUN_0057bb8a();
  *(undefined ***)(unaff_EBP + -0x14) = &local_18;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  local_18 = (undefined *)0x0;
  FUN_00419192(unaff_EBP + 8);
  uVar3 = 7;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0057bb81(7);
  FUN_0057ac07(uVar3);
  local_18 = &DAT_0096582c;
  FUN_0046fc3e(unaff_EBP + -0x10);
  local_18 = (undefined *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004de636(0x1bc,0xe5,*(undefined4 *)(unaff_EBP + -0x10),10,1);
  local_18 = (undefined *)0x57a829;
  FUN_0057ab2e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  local_18 = (undefined *)0x57a835;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_18 = (undefined *)0x57a840;
  FUN_0057bba7();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_18 = (undefined *)0x57a84c;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


